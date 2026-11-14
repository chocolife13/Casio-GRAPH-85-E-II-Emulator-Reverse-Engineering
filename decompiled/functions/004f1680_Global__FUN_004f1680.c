// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004f1680
// entry: 004f1680  size: 156


undefined4 FUN_004f1680(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  FUN_0052f760(0xc0,param_3);
  bVar1 = FUN_00526090(0x2b);
  uVar2 = FUN_00526090(0x2b);
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar1 & 0x70) {
  case 0:
  case 0x10:
    iVar3 = FUN_004b4050(param_3,0);
    break;
  default:
    goto switchD_004f16c2_caseD_1;
  case 0x20:
    iVar3 = FUN_004b3fb0(param_3,uVar2 & 0xf);
    break;
  case 0x30:
    iVar3 = FUN_004b4000(param_3,uVar2 & 0xf);
  }
  if (iVar3 == 1) {
    FUN_0052f780(0xc0,param_3);
  }
  else {
switchD_004f16c2_caseD_1:
                    /* WARNING: This code block may not be properly labeled as switch case */
    FUN_004f58f0(2,param_3);
  }
  FUN_004fe330(param_2,param_1);
  return 1;
}

