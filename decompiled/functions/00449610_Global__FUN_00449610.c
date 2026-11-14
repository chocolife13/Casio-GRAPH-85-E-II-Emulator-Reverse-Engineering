// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00449610
// entry: 00449610  size: 477


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00449610(undefined1 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 local_160;
  int local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined1 local_14c [4];
  undefined1 local_148 [4];
  char local_144 [4];
  char local_140 [12];
  undefined1 local_134 [52];
  undefined1 local_100 [256];
  
  local_158 = 0;
  uVar1 = FUN_00526410();
  FUN_00526440();
  FUN_00526420(0xe7);
  FUN_00538980(0,0,local_14c);
  _DAT_005ce7b0 = DAT_0057fd78;
  _DAT_005ce7b4 = DAT_0057fd7c;
  FUN_00538860(0,&DAT_005ce7b0);
  FUN_005387f0(0);
LAB_00449672:
  FUN_00443b00(1,8);
  FUN_005232d0(1,1);
  FUN_0052f6f0(0xed,local_134);
  local_154 = 1;
  local_160 = 1;
  local_150 = 0;
  local_15c = 0;
  FUN_0052a160(local_134,1,0,1,0);
  do {
    do {
      FUN_00538b30();
      iVar2 = FUN_00526620(&local_158);
    } while (iVar2 != 0);
    switch(local_158) {
    case 0x7534:
      iVar2 = FUN_00517320(local_160);
      if (iVar2 == 0) {
        *param_1 = 0;
      }
      else {
        FUN_00517360(local_160,local_100);
        puVar3 = local_100;
        iVar2 = FUN_00529a70(local_160);
        if ((iVar2 == 0x409) && (puVar3 = (undefined1 *)FUN_00529b70(local_100), local_15c == 0)) {
          puVar3[-1] = 0;
          puVar3 = local_100;
        }
        FUN_004b7750(param_1,puVar3);
      }
    case 0x7532:
    case 0x754d:
      FUN_005389c0(0,0,local_14c);
      FUN_00538810();
      FUN_00526440();
      FUN_00526420(uVar1);
      return local_158;
    case 0x7542:
    case 0x7547:
      FUN_00529ba0(&local_154,&local_150,&local_160,&local_15c,local_158);
      FUN_0052a160(local_134,local_154,local_150,local_160,local_15c);
      break;
    case 0x7555:
      goto switchD_004496de_caseD_7555;
    }
  } while( true );
switchD_004496de_caseD_7555:
  local_144[0] = s__EQUA_005be254[0];
  local_144[1] = s__EQUA_005be254[1];
  local_144[2] = s__EQUA_005be254[2];
  local_144[3] = s__EQUA_005be254[3];
  local_140[0] = s__EQUA_005be254[4];
  local_140[1] = s__EQUA_005be254[5];
  FUN_0052d2d0(local_144,local_148);
  goto LAB_00449672;
}

