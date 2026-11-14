// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0043fce0
// entry: 0043fce0  size: 1002


undefined4 FUN_0043fce0(undefined4 param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined4 uVar16;
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  switch(param_1) {
  case 1:
    uVar14 = FUN_004426c0(3,local_24);
    uVar1 = FUN_004427c0(0x110,local_24);
    uVar2 = FUN_004427c0(0x11a,local_24);
    uVar3 = FUN_004426c0(4,local_24);
    uVar4 = FUN_004427c0(0x113,local_24);
    uVar5 = FUN_004427c0(0x11b,local_24);
    uVar6 = FUN_004426c0(5,local_24);
    uVar13 = FUN_004427c0(0x116,local_24);
    uVar13 = uVar14 | uVar1 | uVar2 | uVar3 | uVar4 | uVar5 | uVar6 | uVar13;
    iVar15 = FUN_004427c0(0x11c,local_24);
    break;
  case 2:
    uVar14 = FUN_004426c0(6,local_24);
    uVar1 = FUN_004427c0(0x110,local_24);
    uVar2 = FUN_004427c0(0x11a,local_24);
    uVar3 = FUN_004426c0(7,local_24);
    uVar4 = FUN_004427c0(0x113,local_24);
    uVar5 = FUN_004427c0(0x11b,local_24);
    uVar6 = FUN_004426c0(8,local_24);
    uVar13 = FUN_004427c0(0x116,local_24);
    uVar13 = uVar14 | uVar1 | uVar2 | uVar3 | uVar4 | uVar5 | uVar6 | uVar13;
    iVar15 = FUN_004427c0(0x11c,local_24);
    break;
  case 3:
    uVar14 = FUN_004426c0(3,local_24);
    uVar1 = FUN_004427c0(0x110,local_24);
    uVar2 = FUN_004426c0(6,local_18);
    uVar3 = FUN_004427c0(0x111,local_18);
    uVar16 = FUN_00481c70(local_24,local_18,local_c);
    uVar4 = FUN_004427c0(0x11a,uVar16);
    uVar5 = FUN_004426c0(4,local_24);
    uVar6 = FUN_004427c0(0x113,local_24);
    uVar7 = FUN_004426c0(7,local_18);
    uVar8 = FUN_004427c0(0x114,local_18);
    uVar16 = FUN_00481c70(local_24,local_18,local_c);
    uVar9 = FUN_004427c0(0x11b,uVar16);
    uVar10 = FUN_004426c0(5,local_24);
    uVar11 = FUN_004427c0(0x116,local_24);
    uVar12 = FUN_004426c0(8,local_18);
    uVar13 = FUN_004427c0(0x117,local_18);
    uVar13 = uVar14 | uVar1 | uVar2 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9 | uVar10
             | uVar11 | uVar12 | uVar13;
    uVar16 = FUN_00481c70(local_24,local_18,local_c);
    iVar15 = FUN_004427c0(0x11c,uVar16);
    break;
  case 4:
    uVar14 = FUN_004426c0(6,local_24);
    uVar1 = FUN_004427c0(0x110,local_24);
    uVar2 = FUN_004426c0(9,local_18);
    uVar3 = FUN_004427c0(0x111,local_18);
    uVar16 = FUN_00481c70(local_24,local_18,local_c);
    uVar4 = FUN_004427c0(0x11a,uVar16);
    uVar5 = FUN_004426c0(7,local_24);
    uVar6 = FUN_004427c0(0x113,local_24);
    uVar7 = FUN_004426c0(10,local_18);
    uVar8 = FUN_004427c0(0x114,local_18);
    uVar16 = FUN_00481c70(local_24,local_18,local_c);
    uVar9 = FUN_004427c0(0x11b,uVar16);
    uVar10 = FUN_004426c0(8,local_24);
    uVar11 = FUN_004427c0(0x116,local_24);
    uVar12 = FUN_004426c0(0xb,local_18);
    uVar13 = FUN_004427c0(0x117,local_18);
    uVar13 = uVar14 | uVar1 | uVar2 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9 | uVar10
             | uVar11 | uVar12 | uVar13;
    uVar16 = FUN_00481c70(local_24,local_18,local_c);
    iVar15 = FUN_004427c0(0x11c,uVar16);
    break;
  default:
    FUN_004e5780(local_24);
    uVar13 = FUN_004427c0(0x11a,local_24);
    uVar14 = FUN_004427c0(0x11b,local_24);
    uVar13 = uVar13 | uVar14;
    iVar15 = FUN_004427c0(0x11c,local_24);
  }
  uVar16 = 4;
  if (uVar13 == 0 && iVar15 == 0) {
    uVar16 = 0;
  }
  return uVar16;
}

