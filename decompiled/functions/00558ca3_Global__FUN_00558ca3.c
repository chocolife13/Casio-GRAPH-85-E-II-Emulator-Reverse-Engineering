// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00558ca3
// entry: 00558ca3  size: 177


undefined4 * FUN_00558ca3(void)

{
  undefined4 *puVar1;
  LPVOID pvVar2;
  
  if (DAT_005d96b4 == DAT_005d96a4) {
    pvVar2 = HeapReAlloc(DAT_005d96bc,0,DAT_005d96b8,(DAT_005d96a4 * 5 + 0x50) * 4);
    if (pvVar2 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_005d96a4 = DAT_005d96a4 + 0x10;
    DAT_005d96b8 = pvVar2;
  }
  puVar1 = (undefined4 *)((int)DAT_005d96b8 + DAT_005d96b4 * 0x14);
  pvVar2 = HeapAlloc(DAT_005d96bc,8,0x41c4);
  puVar1[4] = pvVar2;
  if (pvVar2 != (LPVOID)0x0) {
    pvVar2 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar1[3] = pvVar2;
    if (pvVar2 != (LPVOID)0x0) {
      puVar1[2] = 0xffffffff;
      *puVar1 = 0;
      puVar1[1] = 0;
      DAT_005d96b4 = DAT_005d96b4 + 1;
      *(undefined4 *)puVar1[4] = 0xffffffff;
      return puVar1;
    }
    HeapFree(DAT_005d96bc,0,(LPVOID)puVar1[4]);
  }
  return (undefined4 *)0x0;
}

