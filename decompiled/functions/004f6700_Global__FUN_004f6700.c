// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004f6700
// entry: 004f6700  size: 433


undefined4 FUN_004f6700(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint local_12c;
  
  iVar5 = 1;
  bVar2 = FUN_0052f6b0(0x47);
  if (1 < bVar2) {
    do {
      iVar5 = iVar5 + 1;
      uVar3 = FUN_0052f6b0(0x47);
    } while (iVar5 < (int)(uVar3 & 0xff));
  }
  bVar2 = FUN_004f7100(param_1);
  local_12c = (uint)bVar2;
  switch(local_12c) {
  case 1:
    if ((7 < *(int *)(param_4 + 0x138)) && (*(int *)(param_4 + 0x138) < 0xb)) {
      *(undefined4 *)(param_4 + 0x138) = 1;
    }
    cVar1 = *(char *)*param_1;
    if ((cVar1 == -0x15) ||
       ((cVar1 == -9 && ((cVar1 = ((char *)*param_1)[1], cVar1 == -0x6a || (cVar1 == -0x68)))))) {
      *(undefined4 *)(param_4 + 0x138) = 1;
    }
    break;
  case 2:
  case 0x37:
    *(undefined4 *)(param_4 + 0x138) = 0;
    break;
  case 3:
    *(undefined4 *)(param_4 + 0x138) = 5;
    cVar1 = *(char *)*param_1;
    if (cVar1 != -0x2f) {
      if (cVar1 != -9) break;
      cVar1 = ((char *)*param_1)[1];
      if (cVar1 != '\x19') {
        if (cVar1 == '.') {
          *(undefined4 *)(param_4 + 0x138) = 8;
        }
        else if (cVar1 == '/') {
          *(undefined4 *)(param_4 + 0x138) = 9;
        }
        break;
      }
    }
  default:
    *(undefined4 *)(param_4 + 0x138) = 1;
    break;
  case 0xb:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x1b:
  case 0x1d:
  case 0x1f:
  case 0x32:
  case 0x34:
  case 0x3a:
  case 99:
    break;
  }
  if (10 < bVar2) {
    FUN_004fe330(param_2,param_1);
  }
  if (local_12c - 1 < 99) {
                    /* WARNING: Could not recover jumptable at 0x004f6878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (*(code *)(&PTR_LAB_004f6f10)[(byte)(&DAT_004f6f7f)[local_12c]])();
    return uVar4;
  }
  FUN_004fe330(param_2,param_1);
  FUN_004f58f0(2,param_3);
  return 0;
}

