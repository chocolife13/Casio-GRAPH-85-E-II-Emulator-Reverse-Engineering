// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004a4320
// entry: 004a4320  size: 669


void FUN_004a4320(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined2 local_218;
  undefined2 local_216;
  undefined2 local_214;
  undefined2 local_212;
  undefined2 local_210;
  undefined4 local_20c;
  
  local_218 = 0x66;
  puVar4 = &local_20c;
  for (iVar2 = 0x82; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  local_216 = 0x6c;
  local_214 = 0x73;
  local_212 = 0x30;
  local_210 = 0;
  *(undefined2 *)puVar4 = 0;
  iVar2 = FUN_004ab180();
  if ((iVar2 == 0) || (iVar2 = FUN_004a2200(0x2a8,0x2a9,0x296,0x297), iVar2 == 0x31)) {
    FUN_0042aac0(&local_218,&DAT_005be7ec,4);
    iVar2 = 2;
  }
  else {
    if (iVar2 != 0x32) {
      return;
    }
    FUN_0042aac0(&local_218,&PTR_DAT_005bff00,4);
    iVar2 = 3;
  }
  iVar1 = FUN_0049d080(&local_218,&local_20c);
  if (iVar1 != -1) {
    iVar1 = FUN_0042a410(&local_20c,s_BACKUP_005c0258,0xc);
    FUN_0042aac0((int)&local_20c + iVar1 * 2);
    iVar1 = FUN_0042a410(&local_20c,&DAT_005be754,0xc);
    FUN_0042aac0((int)&local_20c + iVar1 * 2);
    if ((iVar2 == 3) && (iVar1 = FUN_004300c0(1), iVar1 != 0)) {
      return;
    }
    FUN_004aacd0(0);
    iVar1 = FUN_004229f0(&local_20c);
    uVar3 = iVar1 + 0x29;
    if (uVar3 < 0x2a) {
      do {
        switch((&switchD_004a445b::switchdataD_004a45c0)
               [(&switchD_004a445b::switchdataD_004a45d8)[uVar3]]) {
        case (undefined *)0x4a4462:
          iVar1 = FUN_0042ac10(&local_20c,0x5c,0);
          iVar1 = FUN_004a2460((int)&local_20c + (iVar1 - (int)&local_20c >> 1) * 2 + 2);
          if (iVar1 != 0x7539) {
            return;
          }
          if ((iVar2 == 3) && (iVar1 = FUN_004300c0(1), iVar1 != 0)) {
            return;
          }
          iVar1 = FUN_0042a080(&local_20c,0);
          if (iVar1 == -0xe) goto switchD_004a445b_caseD_fffffff2;
          if ((iVar1 < -1) || (0 < iVar1)) goto LAB_004a45aa;
          iVar1 = FUN_004229f0(&local_20c);
          uVar3 = iVar1 + 0x29;
          if (0x29 < uVar3) goto switchD_004a445b_caseD_ffffffd8;
          break;
        case (undefined *)0x4a44e8:
          goto switchD_004a445b_caseD_ffffffd8;
        case (undefined *)0x4a4502:
          FUN_0049c820(iVar1);
          return;
        case (undefined *)0x4a4514:
          FUN_004a20c0(0x172,0x173,0x174,1);
          return;
        case (undefined *)0x4a4536:
switchD_004a445b_caseD_fffffff2:
          FUN_004a20c0(0x2cf,0x2d0,0x2d1,1);
          return;
        case (undefined *)0x4a4558:
          if (iVar2 != 2) {
            FUN_0052b240(0xd);
            return;
          }
          FUN_004a20c0(0x29d,0x29e,0x29f,1);
          return;
        }
      } while( true );
    }
switchD_004a445b_caseD_ffffffd8:
    if (0 < iVar1) {
      FUN_0052b240(iVar1);
      return;
    }
    if (iVar2 == 3) {
      FUN_0052b240(0x25);
      return;
    }
LAB_004a45aa:
    FUN_0052b240(4);
  }
  return;
}

