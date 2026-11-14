// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004a4a80
// entry: 004a4a80  size: 205


undefined4 FUN_004a4a80(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 local_10 [4];
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  undefined2 local_4;
  
  uVar3 = 0;
  local_c = 99;
  local_a = 0x72;
  local_8 = 100;
  local_6 = 0x30;
  local_4 = 0;
  uVar1 = FUN_00429c40(&local_c,local_10);
  switch(uVar1) {
  case 0xffffffd7:
switchD_004a4ac9_caseD_ffffffd7:
    FUN_0052b240(0x27);
    return 0x27;
  default:
    uVar2 = FUN_0042a270(&local_c);
    if ((uVar2 & 0x400) != 0) goto switchD_004a4ac9_caseD_ffffffdf;
    if ((uVar2 & 0x200) != 0) goto switchD_004a4ac9_caseD_ffffffd7;
    if ((uVar2 & 0x800) == 0) {
      if ((uVar2 & 0x1000) == 0) goto LAB_004a4b3d;
    }
    else if (param_1 == 0) goto LAB_004a4b3d;
switchD_004a4ac9_caseD_fffffff2:
    uVar3 = 0x26;
LAB_004a4b3d:
    FUN_0052b240(uVar3);
    return uVar3;
  case 0xffffffdf:
  case 0xffffffe1:
  case 0xffffffef:
switchD_004a4ac9_caseD_ffffffdf:
    FUN_0052b240(0x28);
    return 0x28;
  case 0xffffffe8:
  case 0xffffffe9:
  case 0xfffffffb:
    FUN_0052b240(0x25);
    return 0x25;
  case 0xfffffff2:
  case 0xfffffff8:
    goto switchD_004a4ac9_caseD_fffffff2;
  }
}

