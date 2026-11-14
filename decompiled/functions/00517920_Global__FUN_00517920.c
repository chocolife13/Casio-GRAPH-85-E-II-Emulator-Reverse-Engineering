// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00517920
// entry: 00517920  size: 413


undefined4 FUN_00517920(char *param_1,uint param_2,undefined4 param_3)

{
  char *pcVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  undefined4 local_1c;
  int local_18;
  uint local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  pcVar1 = param_1;
  local_c = DAT_005bdc68;
  local_8 = 0;
  local_4 = 0;
  if (*param_1 == '\0') {
    return 2;
  }
  cVar3 = FUN_004ad2a0(0xffffffff,s_COMGRAPH_005bdc6c,&local_10);
  if (cVar3 != '\0') {
    local_1c = CONCAT22(local_1c._2_2_,1);
    cVar3 = FUN_004aba60(0xffffffff,s_COMGRAPH_005bdc6c,2,&local_1c);
    if (cVar3 != '\0') {
      return 4;
    }
  }
  FUN_004ad3f0(0,2,&local_1c);
  if (local_1c._1_1_ < 0x1e) {
    local_1c = CONCAT31(CONCAT21(local_1c._2_2_,local_1c._1_1_ + 1),local_1c._1_1_ + 1);
  }
  local_14 = local_1c & 0xff;
  FUN_0055c2fe(local_14,(int)&local_c + 3,10);
  iVar4 = FUN_00517500(0xffffffff,&local_c,pcVar1,0);
  if (iVar4 != 0) {
    return 4;
  }
  FUN_005176a0(0xffffffff,&local_c,param_3);
  uVar2 = param_2;
  FUN_00517750(0xffffffff,&local_c,param_2);
  if ((local_1c._1_1_ < 0x1e) ||
     (cVar3 = (char)local_1c + '\x01', local_1c = CONCAT31(local_1c._1_3_,cVar3), cVar3 == '\x1f'))
  {
    local_1c = CONCAT31(local_1c._1_3_,1);
  }
  FUN_004abff0(0xffffffff,s_COMGRAPH_005bdc6c,2,&local_1c,0);
  if ((uVar2 & 0x401) == 0x401) {
    FUN_00517ff0(0,&local_18);
    FUN_00513f50(&local_18,&local_14);
    if (*(char *)(local_18 + -1) == ',') {
      *(undefined1 *)(local_18 + -1) = 0xf6;
    }
    else {
      param_1 = (char *)CONCAT31(param_1._1_3_,0xf6);
      local_10 = FUN_00518030(0);
      cVar3 = FUN_004abeb0(1,&param_1,local_10 + 3);
      if (cVar3 != '\0') {
        FUN_00518100();
        return 4;
      }
    }
  }
  return 0;
}

