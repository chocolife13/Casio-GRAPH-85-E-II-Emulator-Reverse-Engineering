// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004a8a00
// entry: 004a8a00  size: 105


void FUN_004a8a00(undefined2 param_1)

{
  char cVar1;
  uint local_18;
  undefined1 local_14 [4];
  undefined1 local_10 [16];
  
  FUN_004ab670(local_10);
  local_18 = (uint)CONCAT11((char)param_1,(char)((ushort)param_1 >> 8));
  cVar1 = FUN_004ad350(local_10,s_LangNo_005c03fc,local_14);
  if (cVar1 != '\0') {
    FUN_004abb50(local_10,s_LangNo_005c03fc,2,&local_18);
    return;
  }
  FUN_004ac2f0(2,&local_18,0);
  return;
}

