# Build rules for the Linux distribution of the CASIO GRAPH 85 emulator.
#
# The emulator itself is the original 32-bit Windows binary and is run
# through Wine.  The only program compiled here is the small launcher.

CC       ?= cc
CFLAGS   ?= -O2 -Wall -Wextra
CPPFLAGS ?=
LDFLAGS  ?=

PREFIX   ?= /usr/local
DESTDIR  ?=
APPID    := graph85
VERSION  := 1.0

BUILD    := build
BIN      := $(BUILD)/graph85
NATIVE   := $(BUILD)/graph85-native
NATIVE_SRC := native/src/main.c native/src/calc.c native/src/lcd.c \
              native/src/png_load.c
SDL_CFLAGS := $(shell pkg-config --cflags sdl2 libpng 2>/dev/null)
SDL_LIBS   := $(shell pkg-config --libs sdl2 libpng 2>/dev/null)
DIST     := dist/GRAPH85
DISTTGZ  := dist/$(APPID)-$(VERSION)-linux-x86_64.tar.gz
DISTNATIVE := dist/$(APPID)-native-0.1-linux-x86_64.tar.gz

.PHONY: all clean run check native run-native dist dist-native \
        install install-native uninstall uninstall-native

all: $(BIN) $(NATIVE)

$(BIN): src/launcher.c
	@mkdir -p $(BUILD)
	$(CC) $(CPPFLAGS) $(CFLAGS) -o $@ $< $(LDFLAGS)

$(NATIVE): $(NATIVE_SRC) native/src/font6x8.h native/src/keys.h \
           native/src/lcd.h native/src/calc.h native/src/png_load.h
	@mkdir -p $(BUILD)
	$(CC) $(CPPFLAGS) $(CFLAGS) $(SDL_CFLAGS) -o $@ $(NATIVE_SRC) \
		$(SDL_LIBS) -lm $(LDFLAGS)

native: $(NATIVE)

run: $(BIN)
	./$(BIN) --exe ./GRAPH85emulator.exe

run-native: $(NATIVE)
	./$(NATIVE) --assets assets

check: $(BIN)
	./$(BIN) --print-config --exe ./GRAPH85emulator.exe \
		--prefix "$${HOME}/.local/share/graph85/wineprefix"
	@echo "launcher OK"

dist: $(BIN) $(NATIVE)
	rm -rf $(DIST)
	mkdir -p $(DIST)
	cp $(BIN) $(DIST)/graph85
	cp GRAPH85emulator.exe $(DIST)/GRAPH85emulator.exe
	cp packaging/graph85.desktop $(DIST)/graph85.desktop
	cp assets/icon-256.png $(DIST)/graph85.png
	cp $(NATIVE) $(DIST)/graph85-native
	cp native/README.md $(DIST)/NATIVE.md
	cp README.md $(DIST)/README.md
	cp REPORT.md $(DIST)/REPORT.md
	cp LICENSE $(DIST)/LICENSE
	mkdir -p $(DIST)/assets
	cp assets/screenshot.png $(DIST)/assets/screenshot.png
	cp assets/keypad.png $(DIST)/assets/keypad.png
	chmod 755 $(DIST)/graph85 $(DIST)/graph85-native
	tar -C dist -czf $(DISTTGZ) GRAPH85
	@echo "Bundle: $(DISTTGZ)"

dist-native: $(NATIVE)
	rm -rf dist/GRAPH85-native
	mkdir -p dist/GRAPH85-native/assets
	cp $(NATIVE) dist/GRAPH85-native/graph85-native
	cp assets/keypad.png dist/GRAPH85-native/assets/keypad.png
	cp native/README.md dist/GRAPH85-native/README.md
	chmod 755 dist/GRAPH85-native/graph85-native
	tar -C dist -czf $(DISTNATIVE) GRAPH85-native
	@echo "Bundle: $(DISTNATIVE)"

install: $(BIN) $(NATIVE)
	install -d "$(DESTDIR)$(PREFIX)/bin"
	install -m 755 $(NATIVE) "$(DESTDIR)$(PREFIX)/bin/graph85-native"
	install -m 755 $(BIN) "$(DESTDIR)$(PREFIX)/bin/graph85"
	install -d "$(DESTDIR)$(PREFIX)/share/graph85"
	install -m 644 GRAPH85emulator.exe \
		"$(DESTDIR)$(PREFIX)/share/graph85/GRAPH85emulator.exe"
	install -m 644 assets/keypad.png \
		"$(DESTDIR)$(PREFIX)/share/graph85/keypad.png"
	install -d "$(DESTDIR)$(PREFIX)/share/applications"
	install -m 644 packaging/graph85.desktop \
		"$(DESTDIR)$(PREFIX)/share/applications/graph85.desktop"
	for size in 16 32 48 64 128 256; do \
		install -d "$(DESTDIR)$(PREFIX)/share/icons/hicolor/$${size}x$${size}/apps"; \
		install -m 644 assets/icon-$$size.png \
			"$(DESTDIR)$(PREFIX)/share/icons/hicolor/$${size}x$${size}/apps/graph85.png"; \
	done

install-native: $(NATIVE)
	install -d "$(DESTDIR)$(PREFIX)/bin" "$(DESTDIR)$(PREFIX)/share/graph85"
	install -m 755 $(NATIVE) "$(DESTDIR)$(PREFIX)/bin/graph85-native"
	install -m 644 assets/keypad.png \
		"$(DESTDIR)$(PREFIX)/share/graph85/keypad.png"

uninstall: uninstall-native
	rm -f "$(DESTDIR)$(PREFIX)/bin/graph85"
	rm -f "$(DESTDIR)$(PREFIX)/share/graph85/GRAPH85emulator.exe"
	rmdir --ignore-fail-on-non-empty "$(DESTDIR)$(PREFIX)/share/graph85" 2>/dev/null || true
	rm -f "$(DESTDIR)$(PREFIX)/share/applications/graph85.desktop"
	for size in 16 32 48 64 128 256; do \
		rm -f "$(DESTDIR)$(PREFIX)/share/icons/hicolor/$${size}x$${size}/apps/graph85.png"; \
	done

clean:
	rm -rf $(BUILD) dist
