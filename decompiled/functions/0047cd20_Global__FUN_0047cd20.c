// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0047cd20
// entry: 0047cd20  size: 4963


undefined4 FUN_0047cd20(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puStack0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  int in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  undefined4 in_stack_00000044;
  undefined4 in_stack_00000048;
  undefined4 in_stack_0000004c;
  undefined4 in_stack_00000080;
  undefined4 in_stack_00000084;
  undefined4 in_stack_00000088;
  int in_stack_00000098;
  undefined4 in_stack_00002f80;
  undefined4 in_stack_00002f84;
  undefined4 in_stack_00002f88;
  int in_stack_00002f8c;
  undefined4 *in_stack_00002f90;
  undefined4 in_stack_00002f94;
  
  FUN_00553a90();
  in_stack_0000001c = 0;
  iVar1 = FUN_00527440(0,in_stack_00002f88);
  if (iVar1 == 0) {
    return 9;
  }
  in_stack_00000098 = iVar1;
  FUN_004e5780(&stack0x00000080);
  FUN_004e57a0(&stack0x00000050);
  FUN_004e6ab0(&stack0x00000050,&stack0x00000050,&stack0x00000038);
  in_stack_00000044 = in_stack_00000080;
  in_stack_00000048 = in_stack_00000084;
  *in_stack_00002f90 = in_stack_00000080;
  in_stack_0000004c = in_stack_00000088;
  in_stack_00000020 = in_stack_00000080;
  in_stack_00000024 = in_stack_00000084;
  in_stack_00002f90[1] = in_stack_00000084;
  in_stack_00000028 = in_stack_00000088;
  in_stack_00002f90[2] = in_stack_00000088;
  if (in_stack_00002f8c == 0) {
    FUN_004e5070(iVar1,&stack0x0000002c);
  }
  else {
    FUN_004e5780(&stack0x0000002c);
  }
  iVar4 = 1;
  if (0 < iVar1) {
    puStack0000000c = &stack0x000000a8;
    do {
      FUN_00483e70(0,in_stack_00002f88,iVar4,puStack0000000c);
      if (in_stack_00002f8c == 0) {
        FUN_004e6ab0(&stack0x00000044,puStack0000000c,&stack0x00000044);
      }
      else {
        FUN_00483e70(0,in_stack_00002f8c,iVar4,&stack0x00000000);
        if ((in_stack_0000001c == 0) &&
           (iVar2 = FUN_004e7250(&stack0x00000000,&stack0x00000080), iVar2 == 1)) {
          in_stack_0000001c = 1;
        }
        FUN_004e6ab0(&stack0x0000002c,&stack0x00000000,&stack0x0000002c);
        FUN_004e6d00(puStack0000000c,&stack0x00000000,&stack0x00000000);
        FUN_004e6ab0(&stack0x00000000,&stack0x00000044,&stack0x00000044);
      }
      iVar4 = iVar4 + 1;
      puStack0000000c = puStack0000000c + 0xc;
    } while (iVar4 <= iVar1);
  }
  FUN_004e6dd0(&stack0x00000044,&stack0x0000002c,&stack0x00000044);
  FUN_00531730(0x11,&stack0x00000074);
  FUN_00531730(0x12,&stack0x00000068);
  switch(in_stack_00002f80) {
  case 9:
    iVar4 = 1;
    if (0 < iVar1) {
      puStack0000000c = &stack0x000000a8;
      do {
        FUN_00483e70(0,in_stack_00002f84,iVar4,&stack0x00000000);
        FUN_004e6d00(&stack0x00000074,&stack0x00000000,&stack0x00000000);
        FUN_004e6ab0(&stack0x00000068,&stack0x00000000,&stack0x00000000);
        FUN_004e6c30(puStack0000000c,&stack0x00000000,&stack0x00000000);
        FUN_004e6d00(&stack0x00000000,&stack0x00000000,&stack0x00000000);
        if (in_stack_00002f8c != 0) {
          FUN_00483e70(0,in_stack_00002f8c,iVar4,&stack0x00000010);
          FUN_004e6d00(&stack0x00000000,&stack0x00000010,&stack0x00000000);
        }
        FUN_004e6ab0(in_stack_00002f90,&stack0x00000000,in_stack_00002f90);
        FUN_004e6c30(puStack0000000c,&stack0x00000044,&stack0x00000000);
        FUN_004e6d00(&stack0x00000000,&stack0x00000000,&stack0x00000000);
        if (in_stack_00002f8c != 0) {
          FUN_00483e70(0,in_stack_00002f8c,iVar4,&stack0x00000010);
          FUN_004e6d00(&stack0x00000000,&stack0x00000010,&stack0x00000000);
        }
        FUN_004e6ab0(&stack0x00000020,&stack0x00000000,&stack0x00000020);
        iVar4 = iVar4 + 1;
        puStack0000000c = puStack0000000c + 0xc;
      } while (iVar4 <= iVar1);
    }
    FUN_004e6c30(&stack0x0000002c,&stack0x00000038,&stack0x00000000);
    FUN_004e6dd0(in_stack_00002f90,&stack0x00000000,in_stack_00002f90);
    FUN_004e6dd0(in_stack_00002f90,&stack0x00000020,&stack0x00000000);
    FUN_004e6c30(&stack0x00000050,&stack0x00000000,in_stack_00002f94);
    iVar1 = FUN_004e7250(&stack0x00000038,&stack0x0000002c);
    goto LAB_0047ddfe;
  default:
    goto switchD_0047cf16_caseD_a;
  case 0xb:
    FUN_00531730(0x13,&stack0x0000005c);
    iVar4 = 1;
    if (0 < iVar1) {
      puStack0000000c = &stack0x000000a8;
      do {
        FUN_00483e70(0,in_stack_00002f84,iVar4,&stack0x00000010);
        FUN_004e6d00(&stack0x00000074,&stack0x00000010,&stack0x00000000);
        FUN_004e6ab0(&stack0x00000068,&stack0x00000000,&stack0x00000000);
        FUN_004e6d00(&stack0x00000010,&stack0x00000000,&stack0x00000000);
        FUN_004e6ab0(&stack0x0000005c,&stack0x00000000,&stack0x00000000);
        FUN_004e6c30(puStack0000000c,&stack0x00000000,&stack0x00000000);
        FUN_004e6d00(&stack0x00000000,&stack0x00000000,&stack0x00000000);
        if (in_stack_00002f8c != 0) {
          FUN_00483e70(0,in_stack_00002f8c,iVar4,&stack0x00000010);
          FUN_004e6d00(&stack0x00000000,&stack0x00000010,&stack0x00000000);
        }
        FUN_004e6ab0(in_stack_00002f90,&stack0x00000000,in_stack_00002f90);
        FUN_004e6c30(puStack0000000c,&stack0x00000044,&stack0x00000000);
        FUN_004e6d00(&stack0x00000000,&stack0x00000000,&stack0x00000000);
        if (in_stack_00002f8c != 0) {
          FUN_00483e70(0,in_stack_00002f8c,iVar4,&stack0x00000010);
          FUN_004e6d00(&stack0x00000000,&stack0x00000010,&stack0x00000000);
        }
        FUN_004e6ab0(&stack0x00000020,&stack0x00000000,&stack0x00000020);
        iVar4 = iVar4 + 1;
        puStack0000000c = puStack0000000c + 0xc;
      } while (iVar4 <= iVar1);
    }
    FUN_004e6c30(&stack0x0000002c,&stack0x00000038,&stack0x00000000);
    FUN_004e6c30(&stack0x00000000,&stack0x00000050,&stack0x00000000);
    in_stack_00000010 = *in_stack_00002f90;
    in_stack_00000014 = in_stack_00002f90[1];
    in_stack_00000018 = in_stack_00002f90[2];
    FUN_004e6dd0(in_stack_00002f90,&stack0x00000000,in_stack_00002f90);
    FUN_004e6dd0(&stack0x00000010,&stack0x00000020,&stack0x00000000);
    FUN_004e6c30(&stack0x00000050,&stack0x00000000,in_stack_00002f94);
    FUN_004e7910(in_stack_00002f94,in_stack_00002f94);
    FUN_004e6ab0(&stack0x00000050,&stack0x00000038,&stack0x00000000);
    iVar1 = FUN_004e7250(&stack0x00000000,&stack0x0000002c);
    if (iVar1 == 0) {
      FUN_004e5630(3,in_stack_00002f90);
    }
    if (in_stack_0000001c == 1) {
      FUN_004e5630(3,in_stack_00002f94);
      goto switchD_0047cf16_caseD_a;
    }
    break;
  case 0xc:
    FUN_00531730(0x13,&stack0x0000005c);
    FUN_00531730(0x14,&stack0x0000008c);
    iVar4 = 1;
    if (0 < iVar1) {
      puStack0000000c = &stack0x000000a8;
      do {
        FUN_00483e70(0,in_stack_00002f84,iVar4,&stack0x00000010);
        FUN_004e6d00(&stack0x00000074,&stack0x00000010,&stack0x00000000);
        FUN_004e6ab0(&stack0x00000068,&stack0x00000000,&stack0x00000000);
        FUN_004e6d00(&stack0x00000010,&stack0x00000000,&stack0x00000000);
        FUN_004e6ab0(&stack0x0000005c,&stack0x00000000,&stack0x00000000);
        FUN_004e6d00(&stack0x00000010,&stack0x00000000,&stack0x00000000);
        FUN_004e6ab0(&stack0x0000008c,&stack0x00000000,&stack0x00000000);
        FUN_004e6c30(puStack0000000c,&stack0x00000000,&stack0x00000000);
        FUN_004e6d00(&stack0x00000000,&stack0x00000000,&stack0x00000000);
        if (in_stack_00002f8c != 0) {
          FUN_00483e70(0,in_stack_00002f8c,iVar4,&stack0x00000010);
          FUN_004e6d00(&stack0x00000000,&stack0x00000010,&stack0x00000000);
        }
        FUN_004e6ab0(in_stack_00002f90,&stack0x00000000,in_stack_00002f90);
        FUN_004e6c30(puStack0000000c,&stack0x00000044,&stack0x00000000);
        FUN_004e6d00(&stack0x00000000,&stack0x00000000,&stack0x00000000);
        if (in_stack_00002f8c != 0) {
          FUN_00483e70(0,in_stack_00002f8c,iVar4,&stack0x00000010);
          FUN_004e6d00(&stack0x00000000,&stack0x00000010,&stack0x00000000);
        }
        FUN_004e6ab0(&stack0x00000020,&stack0x00000000,&stack0x00000020);
        iVar4 = iVar4 + 1;
        puStack0000000c = puStack0000000c + 0xc;
      } while (iVar4 <= iVar1);
    }
    FUN_004e6c30(&stack0x0000002c,&stack0x00000038,&stack0x00000000);
    FUN_004e6c30(&stack0x00000000,&stack0x00000038,&stack0x00000000);
    in_stack_00000010 = *in_stack_00002f90;
    in_stack_00000014 = in_stack_00002f90[1];
    in_stack_00000018 = in_stack_00002f90[2];
    FUN_004e6dd0(in_stack_00002f90,&stack0x00000000,in_stack_00002f90);
    FUN_004e6dd0(&stack0x00000010,&stack0x00000020,&stack0x00000000);
    FUN_004e6c30(&stack0x00000050,&stack0x00000000,in_stack_00002f94);
    FUN_004e7910(in_stack_00002f94,in_stack_00002f94);
    FUN_004e6ab0(&stack0x00000038,&stack0x00000038,&stack0x00000000);
    iVar1 = FUN_004e7250(&stack0x00000000,&stack0x0000002c);
    if (iVar1 == 0) {
      FUN_004e5630(3,in_stack_00002f90);
    }
    if (in_stack_0000001c == 1) {
      FUN_004e5630(3,in_stack_00002f94);
      goto switchD_0047cf16_caseD_a;
    }
    break;
  case 0xd:
    FUN_00531730(0x13,&stack0x0000005c);
    FUN_00531730(0x14,&stack0x0000008c);
    FUN_00531730(0x15,&stack0x0000009c);
    iVar4 = 1;
    if (0 < iVar1) {
      puStack0000000c = &stack0x000000a8;
      do {
        FUN_00483e70(0,in_stack_00002f84,iVar4,&stack0x00000010);
        FUN_004e6d00(&stack0x00000074,&stack0x00000010,&stack0x00000000);
        FUN_004e6ab0(&stack0x00000068,&stack0x00000000,&stack0x00000000);
        FUN_004e6d00(&stack0x00000010,&stack0x00000000,&stack0x00000000);
        FUN_004e6ab0(&stack0x0000005c,&stack0x00000000,&stack0x00000000);
        FUN_004e6d00(&stack0x00000010,&stack0x00000000,&stack0x00000000);
        FUN_004e6ab0(&stack0x0000008c,&stack0x00000000,&stack0x00000000);
        FUN_004e6d00(&stack0x00000010,&stack0x00000000,&stack0x00000000);
        FUN_004e6ab0(&stack0x0000009c,&stack0x00000000,&stack0x00000000);
        FUN_004e6c30(puStack0000000c,&stack0x00000000,&stack0x00000000);
        FUN_004e6d00(&stack0x00000000,&stack0x00000000,&stack0x00000000);
        if (in_stack_00002f8c != 0) {
          FUN_00483e70(0,in_stack_00002f8c,iVar4,&stack0x00000010);
          FUN_004e6d00(&stack0x00000000,&stack0x00000010,&stack0x00000000);
        }
        FUN_004e6ab0(in_stack_00002f90,&stack0x00000000,in_stack_00002f90);
        FUN_004e6c30(puStack0000000c,&stack0x00000044,&stack0x00000000);
        FUN_004e6d00(&stack0x00000000,&stack0x00000000,&stack0x00000000);
        if (in_stack_00002f8c != 0) {
          FUN_00483e70(0,in_stack_00002f8c,iVar4,&stack0x00000010);
          FUN_004e6d00(&stack0x00000000,&stack0x00000010,&stack0x00000000);
        }
        FUN_004e6ab0(&stack0x00000020,&stack0x00000000,&stack0x00000020);
        iVar4 = iVar4 + 1;
        puStack0000000c = puStack0000000c + 0xc;
      } while (iVar4 <= iVar1);
    }
    FUN_004e6c30(&stack0x0000002c,&stack0x00000038,&stack0x00000000);
    FUN_004e6c30(&stack0x00000000,&stack0x00000038,&stack0x00000000);
    FUN_004e6c30(&stack0x00000000,&stack0x00000050,&stack0x00000000);
    in_stack_00000010 = *in_stack_00002f90;
    in_stack_00000014 = in_stack_00002f90[1];
    in_stack_00000018 = in_stack_00002f90[2];
    FUN_004e6dd0(in_stack_00002f90,&stack0x00000000,in_stack_00002f90);
    FUN_004e6dd0(&stack0x00000010,&stack0x00000020,&stack0x00000000);
    FUN_004e6c30(&stack0x00000050,&stack0x00000000,in_stack_00002f94);
    FUN_004e7910(in_stack_00002f94,in_stack_00002f94);
    FUN_004e6ab0(&stack0x00000050,&stack0x00000038,&stack0x00000000);
    FUN_004e6ab0(&stack0x00000038,&stack0x00000000,&stack0x00000000);
    iVar1 = FUN_004e7250(&stack0x00000000,&stack0x0000002c);
    if (iVar1 == 0) {
      FUN_004e5630(3,in_stack_00002f90);
    }
    if (in_stack_0000001c == 1) {
      FUN_004e5630(3,in_stack_00002f94);
      goto switchD_0047cf16_caseD_a;
    }
    break;
  case 0xe:
    iVar4 = 1;
    if (0 < iVar1) {
      puStack0000000c = &stack0x000000a8;
      do {
        FUN_00483e70(0,in_stack_00002f84,iVar4,&stack0x00000000);
        FUN_004e7410(&stack0x00000000,&stack0x00000000);
        FUN_004e6d00(&stack0x00000068,&stack0x00000000,&stack0x00000000);
        FUN_004e6ab0(&stack0x00000074,&stack0x00000000,&stack0x00000000);
        FUN_004e6c30(puStack0000000c,&stack0x00000000,&stack0x00000000);
        FUN_004e6d00(&stack0x00000000,&stack0x00000000,&stack0x00000000);
        if (in_stack_00002f8c != 0) {
          FUN_00483e70(0,in_stack_00002f8c,iVar4,&stack0x00000010);
          FUN_004e6d00(&stack0x00000000,&stack0x00000010,&stack0x00000000);
        }
        FUN_004e6ab0(in_stack_00002f90,&stack0x00000000,in_stack_00002f90);
        FUN_004e6c30(puStack0000000c,&stack0x00000044,&stack0x00000000);
        FUN_004e6d00(&stack0x00000000,&stack0x00000000,&stack0x00000000);
        if (in_stack_00002f8c != 0) {
          FUN_00483e70(0,in_stack_00002f8c,iVar4,&stack0x00000010);
          FUN_004e6d00(&stack0x00000000,&stack0x00000010,&stack0x00000000);
        }
        FUN_004e6ab0(&stack0x00000020,&stack0x00000000,&stack0x00000020);
        iVar4 = iVar4 + 1;
        puStack0000000c = puStack0000000c + 0xc;
      } while (iVar4 <= iVar1);
    }
    FUN_004e6c30(&stack0x0000002c,&stack0x00000038,&stack0x00000000);
    FUN_004e6dd0(in_stack_00002f90,&stack0x00000000,in_stack_00002f90);
    FUN_004e6dd0(in_stack_00002f90,&stack0x00000020,&stack0x00000000);
    FUN_004e6c30(&stack0x00000050,&stack0x00000000,in_stack_00002f94);
    FUN_004e7910(in_stack_00002f94,in_stack_00002f94);
    goto LAB_0047ddf6;
  case 0xf:
    iVar4 = 1;
    if (0 < iVar1) {
      puStack0000000c = &stack0x000000a8;
      do {
        FUN_00483e70(0,in_stack_00002f84,iVar4,&stack0x00000000);
        FUN_004e6d00(&stack0x00000068,&stack0x00000000,&stack0x00000000);
        FUN_004e7410(&stack0x00000074,&stack0x00000010);
        FUN_004e6ab0(&stack0x00000010,&stack0x00000000,&stack0x00000000);
        FUN_004e7410(puStack0000000c,&stack0x00000010);
        FUN_004e6c30(&stack0x00000010,&stack0x00000000,&stack0x00000000);
        FUN_004e6d00(&stack0x00000000,&stack0x00000000,&stack0x00000000);
        if (in_stack_00002f8c != 0) {
          FUN_00483e70(0,in_stack_00002f8c,iVar4,&stack0x00000010);
          FUN_004e6d00(&stack0x00000000,&stack0x00000010,&stack0x00000000);
        }
        FUN_004e6ab0(in_stack_00002f90,&stack0x00000000,in_stack_00002f90);
        FUN_004e7410(puStack0000000c,&stack0x00000010);
        FUN_004e6c30(&stack0x00000010,&stack0x00000044,&stack0x00000000);
        FUN_004e6d00(&stack0x00000000,&stack0x00000000,&stack0x00000000);
        if (in_stack_00002f8c != 0) {
          FUN_00483e70(0,in_stack_00002f8c,iVar4,&stack0x00000010);
          FUN_004e6d00(&stack0x00000000,&stack0x00000010,&stack0x00000000);
        }
        FUN_004e6ab0(&stack0x00000020,&stack0x00000000,&stack0x00000020);
        iVar4 = iVar4 + 1;
        puStack0000000c = puStack0000000c + 0xc;
      } while (iVar4 <= iVar1);
    }
    FUN_004e6c30(&stack0x0000002c,&stack0x00000038,&stack0x00000000);
    FUN_004e6dd0(in_stack_00002f90,&stack0x00000000,in_stack_00002f90);
    FUN_004e6dd0(in_stack_00002f90,&stack0x00000020,&stack0x00000000);
    FUN_004e6c30(&stack0x00000050,&stack0x00000000,in_stack_00002f94);
    FUN_004e7910(in_stack_00002f94,in_stack_00002f94);
    iVar1 = FUN_004e7250(&stack0x00000038,&stack0x0000002c);
    if (iVar1 == 0) {
      FUN_004e5630(3,in_stack_00002f90);
    }
    goto switchD_0047cf16_caseD_a;
  case 0x10:
    iVar4 = 1;
    if (0 < iVar1) {
      puVar5 = &stack0x000000a8;
      do {
        FUN_00483e70(0,in_stack_00002f84,iVar4,&stack0x00000000);
        FUN_004e7410(&stack0x00000000,&stack0x00000000);
        FUN_004e6d00(&stack0x00000068,&stack0x00000000,&stack0x00000000);
        FUN_004e7410(&stack0x00000074,&stack0x00000010);
        FUN_004e6ab0(&stack0x00000010,&stack0x00000000,&stack0x00000000);
        FUN_004e7410(puVar5,&stack0x00000010);
        FUN_004e6c30(&stack0x00000010,&stack0x00000000,&stack0x00000000);
        FUN_004e6d00(&stack0x00000000,&stack0x00000000,&stack0x00000000);
        if (in_stack_00002f8c != 0) {
          FUN_00483e70(0,in_stack_00002f8c,iVar4,&stack0x00000010);
          FUN_004e6d00(&stack0x00000000,&stack0x00000010,&stack0x00000000);
        }
        FUN_004e6ab0(in_stack_00002f90,&stack0x00000000,in_stack_00002f90);
        FUN_004e7410(puVar5,&stack0x00000010);
        FUN_004e6c30(&stack0x00000010,&stack0x00000044,&stack0x00000000);
        FUN_004e6d00(&stack0x00000000,&stack0x00000000,&stack0x00000000);
        if (in_stack_00002f8c != 0) {
          FUN_00483e70(0,in_stack_00002f8c,iVar4,&stack0x00000010);
          FUN_004e6d00(&stack0x00000000,&stack0x00000010,&stack0x00000000);
        }
        FUN_004e6ab0(&stack0x00000020,&stack0x00000000,&stack0x00000020);
        iVar4 = iVar4 + 1;
        puVar5 = puVar5 + 0xc;
      } while (iVar4 <= in_stack_00000098);
    }
    FUN_004e6c30(&stack0x0000002c,&stack0x00000038,&stack0x00000000);
    FUN_004e6dd0(in_stack_00002f90,&stack0x00000000,in_stack_00002f90);
    FUN_004e6dd0(in_stack_00002f90,&stack0x00000020,&stack0x00000000);
    FUN_004e6c30(&stack0x00000050,&stack0x00000000,in_stack_00002f94);
    FUN_004e7910(in_stack_00002f94,in_stack_00002f94);
LAB_0047ddf6:
    iVar1 = FUN_004e7250(&stack0x00000038,&stack0x0000002c);
LAB_0047ddfe:
    if (iVar1 == 0) {
      FUN_004e5630(3,in_stack_00002f90);
    }
    goto switchD_0047cf16_caseD_a;
  case 0x11:
    FUN_004e5630(3,in_stack_00002f94);
    FUN_00531730(0x13,&stack0x0000005c);
    FUN_00531730(0x14,&stack0x0000008c);
    iVar4 = 1;
    if (0 < iVar1) {
      puVar5 = &stack0x000000a8;
      do {
        FUN_00483e70(0,in_stack_00002f84,iVar4,&stack0x00000000);
        FUN_004e6d00(&stack0x00000068,&stack0x00000000,&stack0x00000000);
        FUN_004e6ab0(&stack0x00000000,&stack0x0000005c,&stack0x00000000);
        FUN_004e7450(&stack0x00000000,&stack0x00000000,1);
        FUN_004e6d00(&stack0x00000074,&stack0x00000000,&stack0x00000000);
        FUN_004e6ab0(&stack0x00000000,&stack0x0000008c,&stack0x00000000);
        FUN_004e6c30(puVar5,&stack0x00000000,&stack0x00000000);
        FUN_004e6d00(&stack0x00000000,&stack0x00000000,&stack0x00000000);
        FUN_004e6ab0(in_stack_00002f90,&stack0x00000000,in_stack_00002f90);
        iVar4 = iVar4 + 1;
        puVar5 = puVar5 + 0xc;
      } while (iVar4 <= iVar1);
    }
    goto LAB_0047e022;
  case 0x12:
    FUN_004e5630(3,in_stack_00002f94);
    FUN_00531730(0x13,&stack0x0000005c);
    iVar4 = 1;
    if (0 < iVar1) {
      puVar5 = &stack0x000000a8;
      do {
        FUN_00483e70(0,in_stack_00002f84,iVar4,&stack0x00000000);
        FUN_004e6d00(&stack0x00000068,&stack0x00000000,&stack0x00000000);
        uVar3 = FUN_004e7730(&stack0x00000000,&stack0x00000000,&stack0x00000000);
        FUN_004e73d0(uVar3);
        FUN_004e6d00(&stack0x00000074,&stack0x00000000,&stack0x00000000);
        FUN_004e6ab0(&stack0x00000050,&stack0x00000000,&stack0x00000000);
        FUN_004e6dd0(&stack0x0000005c,&stack0x00000000,&stack0x00000000);
        FUN_004e6c30(puVar5,&stack0x00000000,&stack0x00000000);
        FUN_004e6d00(&stack0x00000000,&stack0x00000000,&stack0x00000000);
        FUN_004e6ab0(in_stack_00002f90,&stack0x00000000,in_stack_00002f90);
        iVar4 = iVar4 + 1;
        puVar5 = puVar5 + 0xc;
      } while (iVar4 <= iVar1);
    }
LAB_0047e022:
    FUN_004e5070(iVar1,&stack0x0000002c);
    FUN_004e6c30(&stack0x0000002c,&stack0x00000038,&stack0x00000000);
    FUN_004e6dd0(in_stack_00002f90,&stack0x00000000,in_stack_00002f90);
    in_stack_0000001c = 0;
    goto switchD_0047cf16_caseD_a;
  }
  iVar1 = FUN_004e7250(in_stack_00002f94,&stack0x00000080);
  if (iVar1 == 1) {
    FUN_004e5630(3,in_stack_00002f94);
  }
switchD_0047cf16_caseD_a:
  FUN_004e7910(in_stack_00002f90,in_stack_00002f90);
  if (in_stack_0000001c == 1) {
    FUN_004e5630(3,in_stack_00002f90);
  }
  return 0;
}

