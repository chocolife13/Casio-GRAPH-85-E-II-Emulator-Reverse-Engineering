// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005509c0
// entry: 005509c0  size: 541


int FUN_005509c0(short *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_308;
  undefined4 local_304;
  short local_300;
  undefined1 local_2fc [12];
  undefined1 local_2f0 [24];
  undefined1 *local_2d8 [26];
  undefined1 local_270 [624];
  
  local_308 = *(undefined4 *)param_1;
  local_304 = *(undefined4 *)(param_1 + 2);
  local_300 = param_1[4];
  FUN_00485e40(local_2fc);
  iVar1 = FUN_00489760(&local_308,0xfd,0,0x1311);
  if ((iVar1 != 0) || (iVar2 = FUN_004d9190(0xfd,0,local_270), iVar2 == 0)) goto LAB_00550bc1;
  local_2d8[0] = local_270;
  if (param_2 == 0) {
    FUN_0052f860();
    thunk_FUN_0040add0();
    iVar1 = FUN_004c9600(1,local_2d8);
LAB_00550a7b:
    if (iVar1 != 0) goto LAB_00550bc1;
  }
  else if (param_2 == 1) {
    FUN_0052f860();
    thunk_FUN_0040add0();
    iVar1 = FUN_004c9710(1,local_2d8);
    goto LAB_00550a7b;
  }
  iVar2 = FUN_00527440(0xfd,0);
  if (*param_1 == param_1[2]) {
    if (999 < iVar2) {
      iVar2 = 999;
    }
  }
  else if (0x1a < iVar2) {
    iVar2 = 0x1a;
  }
  iVar4 = 1;
  if (0 < iVar2) {
    do {
      FUN_0052f840();
      iVar3 = FUN_00527570(0xfd,0,iVar4,local_2f0);
      if (iVar3 != 0) {
LAB_00550b7c:
        iVar1 = 4;
        goto LAB_00550bc1;
      }
      if (*param_1 == param_1[2]) {
        iVar3 = FUN_00485fc0(local_2fc,(int)(short)local_308,local_308._2_2_ + -1 + iVar4,local_2f0)
        ;
      }
      else {
        iVar3 = FUN_00485fc0(local_2fc,(short)local_308 + -1 + iVar4,(int)local_308._2_2_,local_2f0)
        ;
      }
      if (iVar3 != 0) goto LAB_00550b7c;
      iVar4 = iVar4 + 1;
    } while (iVar4 <= iVar2);
  }
  if (*param_1 == param_1[2]) {
    iVar4 = local_308._2_2_ + iVar2;
    if (iVar4 < 1000) {
      FUN_004888a0(local_2fc,(int)(short)local_308,iVar4,
                   (((int)local_304._2_2_ - (int)local_308._2_2_) - iVar2) + 1);
    }
  }
  else {
    iVar4 = (int)(short)local_308;
    if (iVar2 <= (short)local_304 - iVar4) {
      do {
        if (iVar4 + iVar2 < 0x1b) {
          FUN_004888a0(local_2fc,iVar4 + iVar2,(int)local_308._2_2_,1);
        }
        iVar4 = (int)(short)local_308;
        iVar2 = iVar2 + 1;
      } while (iVar2 <= (short)local_304 - iVar4);
    }
  }
LAB_00550bc1:
  FUN_00528480(0xfd,0);
  return iVar1;
}

