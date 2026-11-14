// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00482660
// entry: 00482660  size: 927


void FUN_00482660(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  switch(param_1) {
  case 7:
    uVar1 = FUN_004e59b0(local_18,param_4);
    FUN_00481d70(uVar1);
    FUN_00481c40(param_2 + 0xc,param_4,param_4);
    FUN_00481d90(param_3,param_2,local_18);
    FUN_00481d40(local_18,param_2 + 0xc,local_18);
    FUN_00481c40(local_18,local_18,local_18);
    uVar1 = FUN_004e57c0(local_c,local_18);
    FUN_00481d40(local_18,uVar1);
    FUN_004e7730(local_18,local_18);
    FUN_00481cc0(local_18,local_18);
    FUN_00481d40(local_18,param_4,param_4);
    break;
  case 9:
  case 10:
    FUN_00481c40(param_2,param_3,param_4);
    FUN_00481c70(param_2 + 0xc,param_4,param_4);
    return;
  case 0xb:
    FUN_00481c40(param_3,param_3,param_4);
    FUN_00481c40(param_2,param_4,param_4);
    uVar1 = FUN_00481c40(param_2 + 0xc,param_3,local_c,param_4);
    FUN_00481c70(param_4,uVar1);
    FUN_00481c70(param_2 + 0x18,param_4,param_4);
    return;
  case 0xc:
    FUN_00481c40(param_3,param_3,local_c);
    FUN_00481c40(param_3,local_c,param_4);
    FUN_00481c40(param_2,param_4,param_4);
    uVar1 = FUN_00481c40(param_2 + 0xc,local_c,local_c,param_4);
    FUN_00481c70(param_4,uVar1);
    uVar1 = FUN_00481c40(param_2 + 0x18,param_3,local_c,param_4);
    FUN_00481c70(param_4,uVar1);
    FUN_00481c70(param_2 + 0x24,param_4,param_4);
    return;
  case 0xd:
    FUN_00481c40(param_3,param_3,local_c);
    FUN_00481c40(local_c,local_c,param_4);
    FUN_00481c40(param_2,param_4,param_4);
    uVar1 = FUN_00481c40(param_3,local_c,local_18,local_18);
    FUN_00481c40(param_2 + 0xc,uVar1);
    FUN_00481c70(param_4,local_18,param_4);
    uVar1 = FUN_00481c40(param_2 + 0x18,local_c,local_c,param_4);
    FUN_00481c70(param_4,uVar1);
    uVar1 = FUN_00481c40(param_2 + 0x24,param_3,local_c,param_4);
    FUN_00481c70(param_4,uVar1);
    FUN_00481c70(param_2 + 0x30,param_4,param_4);
    return;
  case 0xe:
    FUN_00481ca0(param_3,param_4);
    FUN_00481c40(param_2 + 0xc,param_4,param_4);
    FUN_00481c70(param_2,param_4,param_4);
    return;
  case 0xf:
    FUN_00481c40(param_2 + 0xc,param_3,param_4);
    FUN_00481cc0(param_4,param_4);
    FUN_00481c40(param_2,param_4,param_4);
    return;
  case 0x10:
    FUN_00481ce0(param_3,param_2 + 0xc,param_4);
    FUN_00481c40(param_2,param_4,param_4);
    return;
  case 0x11:
    FUN_00481c40(param_2 + 0xc,param_3,param_4);
    FUN_00481c70(param_2 + 0x18,param_4,param_4);
    FUN_00481d10(param_4,param_4);
    FUN_00481c40(param_2,param_4,param_4);
    FUN_00481c70(param_2 + 0x24,param_4,param_4);
    return;
  case 0x12:
    FUN_00481c40(param_2 + 0xc,param_3,param_4);
    FUN_004e7730(param_4,param_4);
    FUN_00481cc0(param_4,param_4);
    FUN_00481c40(param_2,param_4,param_4);
    uVar1 = FUN_004e57a0(local_c,param_4);
    FUN_00481c70(param_4,uVar1);
    FUN_00481d40(param_2 + 0x18,param_4,param_4);
    return;
  }
  return;
}

