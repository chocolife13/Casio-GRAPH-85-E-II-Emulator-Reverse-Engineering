// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00496c70
// entry: 00496c70  size: 385


undefined4 FUN_00496c70(undefined4 param_1,undefined4 param_2)

{
  undefined1 uVar1;
  char cVar2;
  undefined4 uVar3;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_14 = (int)DAT_005d6da6;
  uVar1 = FUN_00526090(0x57);
  local_10 = CONCAT31(local_10._1_3_,uVar1);
  uVar1 = FUN_00526090(0x2b);
  local_c = CONCAT31(local_c._1_3_,uVar1);
  uVar1 = FUN_00526090(0x2a);
  local_8 = CONCAT31(local_8._1_3_,uVar1);
  uVar1 = FUN_00526090(0x13);
  local_4 = CONCAT31(local_4._1_3_,uVar1);
  uVar3 = FUN_00495570(&DAT_005d6da0,0);
  FUN_00526070(0x57,uVar3);
  FUN_00526070(0x2b,DAT_005d6db2);
  uVar3 = FUN_00495570(&DAT_005d6da0,1);
  FUN_00526070(0x2a,uVar3);
  uVar3 = FUN_00495570(&DAT_005d6da0,2);
  FUN_00526070(0x13,uVar3);
  FUN_0052f6c0(0x3d,DAT_005d6db1);
  FUN_004b6a70((int)DAT_005d6dac);
  FUN_004b6a90((int)DAT_005d6dae);
  switch(local_14) {
  case 5:
    FUN_004b6300(param_1,param_2);
    goto LAB_00496db7;
  default:
    break;
  case 8:
    local_14 = 0;
    cVar2 = FUN_00495570(&DAT_005d6da0,0);
    FUN_00526070(0x57,cVar2 != '\x01');
    break;
  case 9:
  case 10:
    FUN_004b6330(param_1,param_2,local_14 == 10);
    goto LAB_00496db7;
  }
  FUN_004b5060(param_1,param_2,&local_14);
LAB_00496db7:
  FUN_00526070(0x57,local_10);
  FUN_00526070(0x2b,local_c);
  FUN_00526070(0x2a,local_8);
  FUN_00526070(0x13,local_4);
  return param_2;
}

