// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00437750
// entry: 00437750  size: 129


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00437750(undefined4 param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  char local_34 [4];
  undefined4 local_30;
  undefined2 local_2c;
  
  cVar1 = FUN_00526090(0x2a);
  if (cVar1 == '\x02') {
    FUN_004b1b70(param_1);
  }
  else {
    FUN_004b1890(param_1,param_2);
  }
  local_34[0] = s_ERROR_0057f088[0];
  local_34[1] = s_ERROR_0057f088[1];
  local_34[2] = s_ERROR_0057f088[2];
  local_34[3] = s_ERROR_0057f088[3];
  local_30 = ram0x0057f08c;
  local_2c = DAT_0057f090;
  iVar2 = FUN_0055b770(param_2,local_34);
  if (iVar2 == 0) {
    *(undefined4 *)param_2 = s_ERROR_0057f092._0_4_;
    *(undefined4 *)(param_2 + 4) = ram0x0057f096;
    *(undefined2 *)(param_2 + 8) = DAT_0057f09a;
  }
  return;
}

