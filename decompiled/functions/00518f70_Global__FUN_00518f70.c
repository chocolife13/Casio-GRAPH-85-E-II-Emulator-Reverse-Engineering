// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00518f70
// entry: 00518f70  size: 264


int FUN_00518f70(int param_1,int param_2)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int local_8;
  undefined1 local_4 [4];
  
  FUN_00528a20(0x24,&local_8,local_4);
  iVar3 = 0;
  iVar5 = 1;
  piVar4 = (int *)(param_1 + 8);
  do {
    cVar1 = FUN_00518560(iVar5);
    if (cVar1 != '\0') {
      piVar4[4] = 0x904;
      *piVar4 = iVar5;
      *(undefined1 *)((int)piVar4 + 9) = 0;
      piVar4[-1] = local_8;
      uVar2 = FUN_00526090(0x30);
      switch(uVar2) {
      case 0:
        *(undefined1 *)((int)piVar4 + 0x15) = 9;
        break;
      case 1:
      case 2:
        *(undefined1 *)((int)piVar4 + 0x15) = 10;
        break;
      case 3:
      case 4:
        *(undefined1 *)((int)piVar4 + 0x15) = 0xb;
      }
      if ((param_2 == 0x21) || (param_2 == 0x20)) {
        if (iVar5 == 1) {
          *(undefined1 *)((int)piVar4 + 0x16) = 5;
        }
        else if (iVar5 == 2) {
          *(undefined1 *)((int)piVar4 + 0x16) = 6;
        }
        else if (iVar5 == 3) {
          *(undefined1 *)((int)piVar4 + 0x16) = 7;
        }
      }
      else if (iVar5 == 1) {
        *(undefined1 *)((int)piVar4 + 0x16) = 8;
      }
      else if (iVar5 == 2) {
        *(undefined1 *)((int)piVar4 + 0x16) = 9;
      }
      else if (iVar5 == 3) {
        *(undefined1 *)((int)piVar4 + 0x16) = 10;
      }
      uVar2 = FUN_00518540(iVar5);
      *(undefined1 *)(piVar4 + 5) = uVar2;
      switch(param_2) {
      case 0x20:
      case 0x28:
        *(undefined1 *)(piVar4 + 2) = 1;
        break;
      case 0x21:
      case 0x26:
        *(undefined1 *)(piVar4 + 2) = 0;
      }
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 8;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 4);
  *(undefined1 *)(iVar3 * 0x20 + 0x1c + param_1) = 0;
  return iVar3;
}

