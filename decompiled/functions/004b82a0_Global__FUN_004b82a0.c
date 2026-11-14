// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004b82a0
// entry: 004b82a0  size: 75


undefined4 FUN_004b82a0(void)

{
  char cVar1;
  undefined4 local_14;
  undefined1 local_10 [4];
  char local_c [4];
  char local_8 [4];
  char local_4;
  
  local_c = (char  [4])s_NAT_CLIP_005bdc94._0_4_;
  local_8 = (char  [4])s_NAT_CLIP_005bdc94._4_4_;
  local_4 = s_NAT_CLIP_005bdc94[8];
  cVar1 = FUN_004ad750(10,local_c,local_10,&local_14);
  if (cVar1 != '\0') {
    return 0;
  }
  return local_14;
}

