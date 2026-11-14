// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00485170
// entry: 00485170  size: 1450


void FUN_00485170(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined1 local_34 [52];
  
  FUN_005232d0(1,1);
  switch(param_1) {
  case 9:
    uVar1 = FUN_0052f6f0(0xe3,local_34);
    FUN_005233e0(uVar1);
    FUN_00485090(param_1,PTR_s_y_ax_b_005bf748);
    return;
  case 10:
    uVar1 = FUN_0052f6f0(0xe4,local_34);
    FUN_005233e0(uVar1);
    FUN_005232d0(1,2);
    FUN_00484c20(PTR_s_a___005bf72c,0x11);
    FUN_005232d0(1,3);
    FUN_00484c20(PTR_s_b___005bf730,0x12);
    FUN_005232d0(1,4);
    FUN_00523470(PTR_s_y_ax_b_005bf748,0x15);
    FUN_005232d0(1,5);
    FUN_00523470(PTR_DAT_005bf76c,0x15);
    FUN_005232d0(1,6);
    FUN_00523470(PTR_DAT_005bf76c,0x15);
    FUN_005232d0(1,7);
    FUN_00523470(PTR_DAT_005bf76c,0x15);
    return;
  case 0xb:
    uVar1 = FUN_0052f6f0(0xe5,local_34);
    FUN_005233e0(uVar1);
    FUN_005232d0(1,2);
    FUN_00484c20(PTR_s_a___005bf72c,0x11);
    FUN_005232d0(1,3);
    FUN_00484c20(PTR_s_b___005bf730,0x12);
    FUN_005232d0(1,4);
    FUN_00484c20(PTR_s_c___005bf734,0x13);
    FUN_00484d60(5,param_1);
    FUN_005232d0(1,7);
    FUN_00523470(PTR_DAT_005bf75c,0x15);
    return;
  case 0xc:
    uVar1 = FUN_0052f6f0(0xe6,local_34);
    FUN_005233e0(uVar1);
    if (param_2 != 1) {
      FUN_005232d0(1,2);
      FUN_00484cb0(PTR_s_b___005bf730,0x12);
      FUN_005232d0(1,3);
      FUN_00484c20(PTR_s_c___005bf734,0x13);
      FUN_005232d0(1,4);
      FUN_00484c20(PTR_s_d___005bf738,0x14);
      FUN_00484d60(5,param_1);
      FUN_005232d0(1,7);
      FUN_00523470(PTR_DAT_005bf760,0x15);
      return;
    }
    FUN_005232d0(1,2);
    FUN_00484c20(PTR_s_a___005bf72c,0x11);
    FUN_005232d0(1,3);
    FUN_00484c20(PTR_s_b___005bf730,0x12);
    FUN_005232d0(1,4);
    FUN_00484c20(PTR_s_c___005bf734,0x13);
    FUN_005232d0(1,5);
    uVar1 = 0x14;
    puVar2 = PTR_s_d___005bf738;
LAB_0048547f:
    FUN_00484c20(puVar2,uVar1);
    FUN_00484d60(6,param_1);
    return;
  case 0xd:
    uVar1 = FUN_0052f6f0(0xe7,local_34);
    FUN_005233e0(uVar1);
    if (param_2 == 1) {
      FUN_005232d0(1,2);
      FUN_00484c20(PTR_s_a___005bf72c,0x11);
      FUN_005232d0(1,3);
      FUN_00484c20(PTR_s_b___005bf730,0x12);
      FUN_005232d0(1,4);
      FUN_00484c20(PTR_s_c___005bf734,0x13);
      FUN_005232d0(1,5);
      FUN_00484c20(PTR_s_d___005bf738,0x14);
      FUN_005232d0(1,6);
      FUN_00484c20(PTR_s_e___005bf73c,0x15);
      FUN_00484d60(7,param_1);
    }
    else {
      if (param_2 == 2) {
        FUN_005232d0(1,2);
        FUN_00484cb0(PTR_s_b___005bf730,0x12);
        FUN_005232d0(1,3);
        FUN_00484c20(PTR_s_c___005bf734,0x13);
        FUN_005232d0(1,4);
        FUN_00484c20(PTR_s_d___005bf738,0x14);
        FUN_005232d0(1,5);
        uVar1 = 0x15;
        puVar2 = PTR_s_e___005bf73c;
        goto LAB_0048547f;
      }
      if (param_2 == 3) {
        FUN_005232d0(1,2);
        FUN_00484cb0(PTR_s_c___005bf734,0x13);
        FUN_005232d0(1,3);
        FUN_00484c20(PTR_s_d___005bf738,0x14);
        FUN_005232d0(1,4);
        FUN_00484c20(PTR_s_e___005bf73c,0x15);
        FUN_00484d60(5,param_1);
        FUN_005232d0(1,7);
        FUN_00523470(PTR_DAT_005bf768,0x15);
        return;
      }
    }
    break;
  case 0xe:
    uVar1 = FUN_0052f6f0(0xe8,local_34);
    FUN_005233e0(uVar1);
    FUN_00485090(param_1,PTR_DAT_005bf74c);
    return;
  case 0xf:
    uVar1 = FUN_0052f6f0(0xe9,local_34);
    FUN_005233e0(uVar1);
    FUN_00485090(param_1,PTR_DAT_005bf750);
    return;
  case 0x10:
    uVar1 = FUN_0052f6f0(0xea,local_34);
    FUN_005233e0(uVar1);
    FUN_00485090(param_1,PTR_DAT_005bf754);
    return;
  case 0x11:
    uVar1 = FUN_0052f6f0(0xeb,local_34);
    FUN_005233e0(uVar1);
    FUN_005232d0(1,2);
    FUN_00484c20(PTR_s_a___005bf72c,0x11);
    FUN_005232d0(1,3);
    FUN_00484c20(PTR_s_b___005bf730,0x12);
    FUN_005232d0(1,4);
    FUN_00484c20(PTR_s_c___005bf734,0x13);
    FUN_005232d0(1,5);
    FUN_00484c20(PTR_s_d___005bf738,0x14);
    FUN_005232d0(1,6);
    FUN_00485000(param_1);
    FUN_005232d0(1,7);
    FUN_00523470(PTR_DAT_005bf770,0x15);
    return;
  case 0x12:
    uVar1 = FUN_0052f6f0(0xec,local_34);
    FUN_005233e0(uVar1);
    FUN_005232d0(1,2);
    FUN_00484c20(PTR_s_a___005bf72c,0x11);
    FUN_005232d0(1,3);
    FUN_00484c20(PTR_s_b___005bf730,0x12);
    FUN_005232d0(1,4);
    FUN_00484c20(PTR_s_c___005bf734,0x13);
    FUN_005232d0(1,5);
    FUN_00485000(param_1);
    FUN_005232d0(1,6);
    FUN_00523470(PTR_DAT_005bf774,0x15);
    FUN_005232d0(1,7);
    FUN_00523470(PTR_DAT_005bf76c,0x15);
    return;
  }
  return;
}

