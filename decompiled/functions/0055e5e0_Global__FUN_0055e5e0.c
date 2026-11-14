// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0055e5e0
// entry: 0055e5e0  size: 236


bool FUN_0055e5e0(HWND param_1,ushort param_2,short param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  LONG LVar3;
  ushort *puVar4;
  CHAR local_10 [16];
  
  iVar1 = FUN_0055c9e0(param_1);
  if (iVar1 != 0) {
    return false;
  }
  iVar1 = 0;
  puVar4 = &DAT_0059d954;
  GetClassNameA(param_1,local_10,0x10);
  do {
    if ((*puVar4 & param_2) != 0) {
      iVar2 = lstrcmpA((LPCSTR)(puVar4 + -0xe),local_10);
      if (iVar2 == 0) {
        LVar3 = GetWindowLongA(param_1,-0x10);
        iVar2 = (*(code *)(&PTR_FUN_0059d950)[iVar1 * 8])
                          (param_1,LVar3,param_2,CONCAT22((short)((uint)puVar4 >> 0x10),param_3),
                           param_4);
        if (iVar2 == 1) {
          if ((param_3 == 1) && (DAT_005da982 == 0x10)) {
            FUN_0055cbf0(param_1,(&DAT_005db3c0)[iVar1 * 6]);
            return true;
          }
          FUN_0055ca50(param_1,(&DAT_005db3c0)[iVar1 * 6]);
        }
        return iVar2 != 0;
      }
    }
    puVar4 = puVar4 + 0x10;
    iVar1 = iVar1 + 1;
    if (&UNK_0059da13 < puVar4) {
      return false;
    }
  } while( true );
}

