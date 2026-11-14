// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0051dad0
// entry: 0051dad0  size: 244


void FUN_0051dad0(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (param_1 < 0x7624) {
    if (0x7620 < param_1) {
      *param_2 = 0x100;
      *param_3 = 0x800;
      return;
    }
    if (param_1 < 0x7610) {
      if (param_1 == 0x760f) {
        *param_2 = 0x100;
        *param_3 = 0xe080;
        return;
      }
      if (param_1 == 0x159) {
switchD_0051db69_caseD_7624:
        *param_2 = 0x100;
        *param_3 = 0x800;
        return;
      }
      if ((0x760c < param_1) && (param_1 < 0x760f)) {
        *param_2 = 0xffff;
        *param_3 = 0x200;
        return;
      }
    }
    else if (param_1 == 0x7620) goto switchD_0051db69_caseD_7624;
  }
  else {
    switch(param_1) {
    case 0x7624:
      goto switchD_0051db69_caseD_7624;
    case 0x7625:
      *param_2 = 0x500;
      *param_3 = 0x800;
      return;
    case 0x7626:
      *param_2 = 0x500;
      *param_3 = 0x801;
      return;
    case 0x7627:
      *param_2 = 0x100;
      *param_3 = 0xa880;
      return;
    }
  }
  *param_2 = 0xffff;
  *param_3 = 0;
  return;
}

