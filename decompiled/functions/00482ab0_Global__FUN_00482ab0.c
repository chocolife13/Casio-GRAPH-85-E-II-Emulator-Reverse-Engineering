// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00482ab0
// entry: 00482ab0  size: 326


int FUN_00482ab0(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 local_3c [12];
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  uVar1 = param_2;
  iVar3 = param_1;
  switch(param_2) {
  case 7:
    FUN_00481110(param_1,local_3c,local_30);
    uVar2 = param_5;
    FUN_00482660(uVar1,local_3c,param_4,param_5);
    iVar3 = FUN_004d5210(uVar2,&param_1,param_3 + 0x800);
    if (iVar3 == 0x100) {
      return -1;
    }
    break;
  default:
    goto switchD_00482ac9_caseD_8;
  case 9:
  case 10:
  case 0xe:
  case 0xf:
  case 0x10:
    goto switchD_00482ac9_caseD_9;
  case 0xb:
  case 0x12:
    goto switchD_00482ac9_caseD_b;
  case 0xd:
    FUN_00483e70(0xff,param_1 * 10,5,local_c);
  case 0xc:
  case 0x11:
    FUN_00483e70(0xff,iVar3 * 10,4,local_18);
    goto switchD_00482ac9_caseD_b;
  }
  goto LAB_00482bca;
switchD_00482ac9_caseD_b:
  FUN_00483e70(0xff,iVar3 * 10,3,local_24);
switchD_00482ac9_caseD_9:
  FUN_00483e70(0xff,iVar3 * 10,1,local_3c);
  FUN_00483e70(0xff,iVar3 * 10,2,local_30);
  uVar2 = param_5;
  FUN_00482660(uVar1,local_3c,param_4,param_5);
  iVar3 = FUN_004d5210(uVar2,&param_1,param_3 + 0x800);
  if (iVar3 != 0x100) {
LAB_00482bca:
    if (iVar3 == 0x200) {
      return 0x41;
    }
    if (iVar3 != 0x1000) {
      return param_1;
    }
  }
switchD_00482ac9_caseD_8:
  return -1;
}

