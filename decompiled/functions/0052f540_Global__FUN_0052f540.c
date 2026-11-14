// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0052f540
// entry: 0052f540  size: 336


void FUN_0052f540(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_bc;
  undefined1 local_b8 [52];
  undefined4 local_84 [33];
  
  FUN_005237c0(5);
  FUN_00525b40(4);
  FUN_005232d0(1,2);
  uVar1 = FUN_0052f6f0(5,local_b8);
  FUN_005233e0(uVar1);
  FUN_005232d0(1,3);
  uVar1 = FUN_0052f6f0(0xc,local_b8);
  FUN_005233e0(uVar1);
  FUN_005232d0(1,4);
  uVar1 = FUN_0052f6f0(0xd,local_b8);
  FUN_005233e0(uVar1);
  FUN_005232d0(3,5);
  FUN_005233e0("  V-Win[1~6]:    ");
  iVar2 = FUN_00523cc0(&local_bc,0x11,5,1,6);
  if ((iVar2 == 0) && (iVar2 = FUN_005304f0(local_bc,local_84), iVar2 == 0)) {
    switch(param_2) {
    case 0:
    case 1:
    case 0x11:
      iVar2 = FUN_00515e50(local_84);
      if (iVar2 != 0) {
        FUN_0052b240(4);
        FUN_00523800(5);
        return;
      }
      break;
    case 2:
      iVar2 = FUN_00515f00(local_84);
      if (iVar2 != 0) {
        FUN_0052b240(4);
        FUN_00523800(5);
        return;
      }
      break;
    default:
      goto switchD_0052f608_caseD_3;
    }
    puVar3 = local_84;
    for (iVar2 = 0x21; iVar2 != 0; iVar2 = iVar2 + -1) {
      *param_1 = *puVar3;
      puVar3 = puVar3 + 1;
      param_1 = param_1 + 1;
    }
  }
switchD_0052f608_caseD_3:
  FUN_00523800(5);
  return;
}

