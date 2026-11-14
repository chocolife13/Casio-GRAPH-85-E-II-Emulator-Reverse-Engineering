// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00479f70
// entry: 00479f70  size: 1286


int FUN_00479f70(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined1 local_1a8 [24];
  undefined1 local_190 [24];
  undefined1 local_178 [48];
  undefined1 local_148 [24];
  undefined1 local_130 [256];
  undefined1 local_30 [24];
  undefined1 local_18 [24];
  
  switch(param_1 + -9) {
  case 0:
  case 1:
  case 5:
  case 6:
  case 7:
    FUN_00531730(0x11,local_1a8);
    FUN_00531730(0x12,local_190);
    break;
  case 2:
  case 9:
    FUN_00531730(0x11,local_148);
    FUN_00531730(0x12,local_1a8);
    FUN_00531730(0x13,local_190);
    break;
  case 3:
  case 8:
    FUN_00531730(0x11,local_30);
    FUN_00531730(0x12,local_148);
    FUN_00531730(0x13,local_1a8);
    FUN_00531730(0x14,local_190);
    break;
  case 4:
    FUN_00531730(0x11,local_18);
    FUN_00531730(0x12,local_30);
    FUN_00531730(0x13,local_148);
    FUN_00531730(0x14,local_1a8);
    FUN_00531730(0x15,local_190);
  }
  FUN_004b6ef0(local_130,&DAT_005cd010);
  switch(param_1 + -9) {
  case 4:
    uVar3 = FUN_004e5470(local_18,local_178);
    FUN_004b6e70(local_130,uVar3);
    FUN_004b6e70(local_130,&DAT_005bf640);
    FUN_0047a660(local_130,0x89);
  case 3:
    uVar3 = FUN_004e5470(local_30,local_178);
    FUN_004b6e70(local_130,uVar3);
    FUN_004b6e70(local_130,&DAT_005bf63c);
    FUN_0047a660(local_130,0x89);
  case 2:
    uVar3 = FUN_004e5470(local_148,local_178);
    FUN_004b6e70(local_130,uVar3);
    FUN_004b6e70(local_130,&DAT_005bf638);
  case 0:
  case 1:
    uVar3 = FUN_004e5470(local_1a8,local_178);
    FUN_004b6e70(local_130,uVar3);
    FUN_004b6e70(local_130,&DAT_005be980);
    FUN_0047a660(local_130,0x89);
    uVar3 = FUN_004e5470(local_190,local_178);
    FUN_004b6e70(local_130,uVar3);
    break;
  case 5:
    uVar3 = FUN_004e5470(local_1a8,local_178);
    FUN_004b6ef0(local_130,uVar3);
    FUN_0047a660(local_130,0x89);
    uVar3 = FUN_004e5470(local_190,local_178);
    FUN_004b6e70(local_130,uVar3);
    puVar2 = &DAT_005bf634;
    goto LAB_0047a385;
  case 6:
    uVar3 = FUN_004e5470(local_1a8,local_178);
    FUN_004b6ef0(local_130,uVar3);
    FUN_004b6e70(local_130,&DAT_005bf630);
    uVar3 = FUN_004e5470(local_190,local_178);
    FUN_004b6e70(local_130,uVar3);
    FUN_004b6e70(local_130,&DAT_005bf62c);
    break;
  case 7:
    uVar3 = FUN_004e5470(local_1a8,local_178);
    FUN_004b6ef0(local_130,uVar3);
    FUN_004b6e70(local_130,&DAT_005bf628);
    uVar3 = FUN_004e5470(local_190,local_178);
    FUN_004b6e70(local_130,uVar3);
    break;
  case 8:
    uVar3 = FUN_004e5470(local_30,local_178);
    FUN_004b6ef0(local_130,uVar3);
    FUN_0047a660(local_130,0x81);
    FUN_004b6e70(local_130,&DAT_005a913c);
    uVar3 = FUN_004e5470(local_148,local_178);
    FUN_004b6e70(local_130,uVar3);
    FUN_004b6e70(local_130,&DAT_005be980);
    FUN_0047a660(local_130,0x89);
    uVar3 = FUN_004e5470(local_1a8,local_178);
    FUN_004b6e70(local_130,uVar3);
    FUN_004b6e70(local_130,&DAT_005a9138);
    FUN_0047a660(local_130,0x89);
    puVar2 = (undefined *)FUN_004e5470(local_190,local_178);
LAB_0047a385:
    FUN_004b6e70(local_130,puVar2);
    break;
  case 9:
    uVar3 = FUN_004e5470(local_190,local_178);
    FUN_004b6ef0(local_130,uVar3);
    FUN_004b6e70(local_130,&DAT_005bf624);
    FUN_0047a660(local_130,0x89);
    uVar3 = FUN_004e5470(local_148,local_178);
    FUN_004b6e70(local_130,uVar3);
    FUN_004b6e70(local_130,&DAT_005bf630);
    FUN_0047a660(local_130,0x99);
    uVar3 = FUN_004e5470(local_1a8,local_178);
    FUN_004b6e70(local_130,uVar3);
    FUN_004b6e70(local_130,&DAT_005bf620);
  }
  cVar1 = FUN_00433980(param_2,0,local_130);
  return (int)cVar1;
}

