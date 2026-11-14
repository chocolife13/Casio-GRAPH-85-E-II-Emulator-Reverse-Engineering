// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00482c30
// entry: 00482c30  size: 103


void FUN_00482c30(int param_1)

{
  char cVar1;
  undefined1 local_18 [9];
  char local_f;
  
  cVar1 = FUN_00526090(0x21);
  if (cVar1 == '\0') {
    if (param_1 == 0) {
      FUN_004b6ef0(local_18,"Regression");
    }
    else {
      FUN_004b6ef0(local_18,"StatGraph0");
      local_f = local_f + (char)param_1;
    }
    FUN_005232d0(1,1);
    FUN_00523470(local_18,0x15);
  }
  return;
}

