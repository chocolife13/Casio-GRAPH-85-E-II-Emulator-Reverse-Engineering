// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004f6000
// entry: 004f6000  size: 293


undefined4 FUN_004f6000(undefined4 param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int local_4;
  
  local_4 = 0;
  uVar1 = *(undefined1 *)(param_2 + 1);
  *(undefined4 *)(param_3 + 0x140) = 1;
  switch(*(undefined4 *)(param_3 + 0x138)) {
  case 3:
    cVar2 = FUN_00434830(uVar1,&local_4);
    if (cVar2 != '\0') {
      uVar4 = FUN_004f58f0(4,param_2);
      return uVar4;
    }
    goto switchD_004f6038_caseD_6;
  case 4:
    FUN_00414240();
    cVar2 = FUN_00434230(0,0,&local_4);
    if (cVar2 != '\0') {
      uVar4 = FUN_004f58f0(4,param_2);
      return uVar4;
    }
    goto switchD_004f6038_caseD_6;
  case 5:
    iVar3 = FUN_005037d0(&local_4,1);
    break;
  default:
    goto switchD_004f6038_caseD_6;
  case 7:
    iVar3 = FUN_004f5eb0(*(undefined4 *)(param_3 + 0x144),&local_4);
    break;
  case 8:
    iVar3 = FUN_00504590(&local_4);
    break;
  case 9:
    iVar3 = FUN_00519920(&local_4);
    break;
  case 10:
    iVar3 = FUN_004739a0(1,0,0,0,0,&local_4);
  }
  if (iVar3 != 0) {
    uVar4 = FUN_004f58f0(iVar3,param_2);
    return uVar4;
  }
switchD_004f6038_caseD_6:
  if (local_4 - 0x7532U < 0x26) {
                    /* WARNING: Could not recover jumptable at 0x004f6117. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (*(code *)(&PTR_LAB_004f6190)[*(byte *)(local_4 + 0x4eec6e)])();
    return uVar4;
  }
  return 1;
}

