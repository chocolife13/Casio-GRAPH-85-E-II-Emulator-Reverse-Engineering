// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0054c380
// entry: 0054c380  size: 118


uint FUN_0054c380(undefined4 param_1,char *param_2,int *param_3)

{
  char cVar1;
  char cVar2;
  uint in_EAX;
  char *pcVar3;
  int iVar4;
  ushort uVar5;
  
  if (*param_2 == '\0') {
    return in_EAX & 0xffff0000;
  }
  FUN_004b7750(param_1,param_2);
  pcVar3 = (char *)*param_3;
  cVar2 = *pcVar3;
  if (cVar2 == '$') {
    pcVar3 = pcVar3 + 1;
    *param_3 = (int)pcVar3;
  }
  cVar1 = *(char *)*param_3;
  iVar4 = CONCAT31((int3)((uint)pcVar3 >> 8),cVar1);
  *param_2 = cVar1;
  uVar5 = (ushort)(cVar2 == '$');
  if (cVar1 != '\0') {
    iVar4 = FUN_004b7370(iVar4);
    if (iVar4 == 0) {
      param_2[1] = '\0';
      iVar4 = *param_3;
      *param_3 = iVar4 + 1;
      return CONCAT22((short)((uint)(iVar4 + 1) >> 0x10),uVar5);
    }
    iVar4 = *param_3;
    *param_3 = iVar4 + 1;
    cVar2 = *(char *)(iVar4 + 1);
    param_2[2] = '\0';
    param_2[1] = cVar2;
    iVar4 = *param_3 + 1;
    *param_3 = iVar4;
  }
  return CONCAT22((short)((uint)iVar4 >> 0x10),uVar5);
}

