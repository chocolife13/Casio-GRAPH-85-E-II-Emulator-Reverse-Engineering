// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004b8100
// entry: 004b8100  size: 402


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_004b8100(undefined4 param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int local_420;
  int local_41c;
  undefined4 local_418;
  undefined1 local_414;
  char local_410 [4];
  char local_40c [4];
  char local_408;
  uint local_404;
  undefined1 local_400 [1024];
  
  local_418 = _DAT_005bdca0;
  local_410 = (char  [4])s_NAT_CLIP_005bdc94._0_4_;
  local_40c = (char  [4])s_NAT_CLIP_005bdc94._4_4_;
  local_414 = DAT_005bdca4;
  local_408 = s_NAT_CLIP_005bdc94[8];
  local_404 = FUN_004ad2a0(10,&local_418,&local_41c);
  local_404 = local_404 & 0xff;
  if (local_404 == 0) {
    local_41c = local_41c + 0x14;
  }
  cVar1 = FUN_004ad2a0(10,local_410,&local_420);
  if (cVar1 == '\0') {
    local_420 = local_420 + 0x14;
  }
  FUN_00535c50(param_1,local_400,0,2);
  iVar2 = FUN_004b7550(local_400);
  iVar3 = FUN_004adb30((((iVar2 + 4U & 0xfffffffc) + (param_2 + 4U & 0xfffffffc)) -
                       (local_420 + local_41c)) + 0x28);
  if (iVar3 == 0) {
    return '0';
  }
  if (local_404 == 0) {
    FUN_004ac5a0(10,&local_418);
  }
  if (cVar1 == '\0') {
    FUN_004ac5a0(10,local_410);
  }
  cVar1 = FUN_004aba60(10,local_410,param_2 + 1,param_1);
  if (cVar1 == '\0') {
    FUN_004ac2f0(1,&DAT_005cd010,param_2);
    cVar1 = FUN_004aba60(10,&local_418,iVar2 + 1,local_400);
    if (cVar1 != '\0') {
      FUN_004ac5a0(10,local_410);
      return cVar1;
    }
    FUN_004ac2f0(1,&DAT_005cd010,iVar2);
    cVar1 = '\0';
  }
  return cVar1;
}

