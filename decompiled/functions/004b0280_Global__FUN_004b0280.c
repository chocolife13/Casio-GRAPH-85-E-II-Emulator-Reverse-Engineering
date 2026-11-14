// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004b0280
// entry: 004b0280  size: 367


void FUN_004b0280(void)

{
  int iVar1;
  undefined4 *puVar2;
  int local_230;
  undefined2 local_22c;
  undefined2 local_22a;
  undefined2 local_228;
  undefined2 local_226;
  undefined2 local_224;
  char local_220 [20];
  undefined2 local_20c [8];
  undefined4 local_1fc [127];
  
  local_20c[0] = 0x5c;
  local_20c[1] = 0x5c;
  local_20c[6] = 0x5c;
  local_20c[2] = 0x66;
  local_20c[3] = 0x6c;
  local_20c[4] = 0x73;
  local_20c[5] = 0x30;
  local_20c[7] = 0;
  puVar2 = local_1fc;
  for (iVar1 = 0x7f; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_22c = 0x2e;
  local_22a = 0x74;
  local_228 = 0x73;
  local_226 = 0x74;
  local_224 = 0;
  local_230 = FUN_004afd10(s_Input_File_Size_005c08cc,7,0);
  thunk_FUN_0040add0();
  if (local_230 != 0) {
    local_220[0] = '\0';
    FUN_004affd0(local_220,s_Input_File_Name_005c08bc,8);
    if ((local_230 != 0) && (local_220[0] != '\0')) {
      iVar1 = FUN_0042a410(local_20c,local_220,0xc);
      FUN_0042aac0(local_20c + iVar1);
      iVar1 = FUN_0042a410(local_20c,&local_22c);
      FUN_0042a490(local_20c + iVar1);
      iVar1 = FUN_00429e40(local_20c,1,&local_230);
      if (iVar1 == 0) {
        iVar1 = FUN_00429b00(local_20c,1,0);
        if (-1 < iVar1) {
          FUN_00429be0(iVar1);
          FUN_005232d0(1,7);
          FUN_00523470(s_Complete__Press_EXIT_005c08a4,0x15);
          FUN_004af080();
          return;
        }
      }
      FUN_0052b240(999);
    }
  }
  return;
}

