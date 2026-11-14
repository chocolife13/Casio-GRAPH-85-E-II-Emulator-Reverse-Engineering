// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004b80a0
// entry: 004b80a0  size: 84


undefined4 FUN_004b80a0(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 local_14;
  undefined1 local_10 [4];
  char local_c [4];
  char local_8 [4];
  char local_4;
  
  local_c = (char  [4])s_NAT_CLIP_005bdc94._0_4_;
  local_8 = (char  [4])s_NAT_CLIP_005bdc94._4_4_;
  local_4 = s_NAT_CLIP_005bdc94[8];
  cVar1 = FUN_004ad750(10,local_c,local_10,&local_14);
  if (cVar1 == '\0') {
    uVar2 = FUN_004b7550(local_14);
    return uVar2;
  }
  return 0;
}

