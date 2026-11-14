// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005136b0
// entry: 005136b0  size: 243


uint FUN_005136b0(char *param_1,int param_2,undefined4 param_3)

{
  uint *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  
  iVar4 = param_2;
  iVar3 = (int)param_1;
  iVar7 = param_2 * 0x20;
  param_1 = *(char **)(iVar7 + *(int *)((int)param_1 + 0x8dc));
  FUN_00513f50(&param_1,&param_2);
  pcVar5 = param_1 + -1;
  puVar1 = (uint *)(iVar7 + 0x18 + *(int *)(iVar3 + 0x8dc));
  if (((*puVar1 & 0x40d) == 0x40d) && (*pcVar5 == ')')) {
    pcVar5 = param_1;
  }
  if (*pcVar5 == '\0') {
    *puVar1 = *puVar1 & 0xffff1fff;
    return 0;
  }
  if (*pcVar5 == ',') {
    if (pcVar5[1] != '[') {
      return -(uint)((*puVar1 & 0x101) != 0x101) & 2;
    }
    cVar2 = pcVar5[2];
    if ((((cVar2 != ':') && (cVar2 != '\r')) && (cVar2 != '\f')) && (cVar2 != '\0')) {
      param_1 = pcVar5 + 2;
      if (pcVar5[3] == '=') {
        uVar6 = FUN_00513df0(iVar3,iVar4,param_3);
        return uVar6;
      }
      if ((*puVar1 & 0x200) == 0) {
        uVar6 = FUN_005137b0(iVar3,iVar4);
        return uVar6;
      }
    }
  }
  return 2;
}

