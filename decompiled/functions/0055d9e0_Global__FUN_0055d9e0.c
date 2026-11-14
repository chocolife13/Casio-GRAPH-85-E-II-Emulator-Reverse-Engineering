// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0055d9e0
// entry: 0055d9e0  size: 159


void FUN_0055d9e0(void)

{
  int iVar1;
  CHAR aCStack_c [12];
  
  if (DAT_005db465 != '\0') {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_005da940);
    DAT_005db464 = 0x1e;
    GetProfileStringA(s_windows_005ccae0,s_kanjimenu_005ccad4,s_roman_005ccac0,aCStack_c,9);
    iVar1 = lstrcmpiA(aCStack_c,s_kanji_005ccab0);
    if (iVar1 == 0) {
      DAT_005db464 = 0x1f;
    }
    GetProfileStringA(s_windows_005ccae0,s_hangeulmenu_005ccac8,s_english_005ccab8,aCStack_c,9);
    iVar1 = lstrcmpiA(aCStack_c,s_hangeul_005ccaa8);
    if (iVar1 == 0) {
      DAT_005db464 = 0x1f;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_005da940);
  }
  return;
}

