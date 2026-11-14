// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00432ea0
// entry: 00432ea0  size: 248


int FUN_00432ea0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_38;
  undefined1 local_34 [52];
  
  FUN_005237c0(5);
  FUN_00525b40(4);
  FUN_005232d0(1,2);
  if (param_1 == 0) {
    uVar3 = 4;
LAB_00432edd:
    uVar3 = FUN_0052f6f0(uVar3,local_34);
    FUN_005233e0(uVar3);
    FUN_005232d0(1,3);
    uVar3 = FUN_0052f6f0(0xe,local_34);
    FUN_005233e0(uVar3);
    FUN_005232d0(1,4);
    uVar3 = FUN_0052f6f0(0xf,local_34);
    FUN_005233e0(uVar3);
  }
  else if (param_1 == 1) {
    uVar3 = 5;
    goto LAB_00432edd;
  }
  FUN_005232d0(3,5);
  FUN_005233e0(s_G_Mem_1_20___005be98c);
  iVar1 = FUN_00523cc0(&local_38,0x11,5,1,0x14);
  if (iVar1 == 0) {
    if (param_1 == 0) {
      iVar2 = FUN_005305c0(local_38);
    }
    else {
      if (param_1 != 1) goto LAB_00432f86;
      iVar2 = FUN_005309a0(local_38);
    }
    if (iVar2 != 0) {
      FUN_0052b240(4);
    }
  }
LAB_00432f86:
  FUN_00523800(5);
  return iVar1;
}

