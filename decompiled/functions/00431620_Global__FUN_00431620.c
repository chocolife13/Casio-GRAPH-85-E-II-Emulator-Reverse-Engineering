// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00431620
// entry: 00431620  size: 316


void FUN_00431620(undefined4 param_1,char *param_2)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined1 local_64 [32];
  int aiStack_44 [17];
  
  iVar5 = 1;
  aiStack_44[1] = 0;
  aiStack_44[2] = 1;
  aiStack_44[3] = 2;
  aiStack_44[4] = 3;
  aiStack_44[5] = 4;
  aiStack_44[6] = 4;
  aiStack_44[7] = 5;
  aiStack_44[8] = 6;
  aiStack_44[9] = 7;
  aiStack_44[10] = 8;
  aiStack_44[0xb] = 9;
  aiStack_44[0xc] = 9;
  aiStack_44[0xd] = 10;
  aiStack_44[0xe] = 0xb;
  aiStack_44[0xf] = 0xc;
  aiStack_44[0x10] = 0xd;
  FUN_004b6ca0(param_1);
  iVar1 = FUN_00431b10(param_1,&DAT_005be8d8);
  if ((-1 < iVar1) && (iVar5 = FUN_004b6ca0(param_1), -1 < iVar5)) {
    piVar3 = aiStack_44 + iVar5;
    do {
      FUN_00431760(local_64,*piVar3);
      iVar1 = FUN_00431b10(param_1,local_64);
      if (-1 < iVar1) break;
      iVar5 = iVar5 + -1;
      piVar3 = piVar3 + -1;
    } while (-1 < iVar5);
  }
  iVar1 = aiStack_44[iVar5];
  do {
    if (iVar1 < 0) {
      return;
    }
    FUN_00431760(local_64,iVar1);
    iVar4 = 0;
    iVar5 = FUN_00431b10(param_1,local_64);
    if (iVar5 < 0) {
LAB_00431745:
      cVar2 = (char)iVar4 + '0';
    }
    else {
      do {
        FUN_00431900(param_1,local_64);
        iVar4 = iVar4 + 1;
        iVar5 = FUN_00431b10(param_1,local_64);
      } while (-1 < iVar5);
      if (iVar4 < 10) goto LAB_00431745;
      cVar2 = (char)iVar4 + '\x10';
    }
    *param_2 = cVar2;
    param_2 = param_2 + 1;
    iVar1 = iVar1 + -1;
  } while( true );
}

