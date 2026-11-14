// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004a7300
// entry: 004a7300  size: 215


int FUN_004a7300(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *local_4;
  
  iVar1 = FUN_004300c0();
  iVar2 = FUN_00407130(iVar1 * 0x3c);
  if (iVar2 != 0) {
    iVar4 = 0;
    if (0 < iVar1) {
      puVar5 = (undefined4 *)(iVar2 + 0x31);
      do {
        iVar3 = FUN_004300d0(iVar4,0x1d4,&local_4);
        if (iVar3 == 1) {
          FUN_004b71f0((int)puVar5 + -0x31,local_4,0x30);
        }
        else {
          *(undefined4 *)((int)puVar5 + -0x31) = DAT_005c0314;
          *(undefined2 *)((int)puVar5 + -0x2d) = DAT_005c0318;
        }
        iVar3 = FUN_004300d0(iVar4,0x30,&local_4);
        if (iVar3 == 1) {
          *puVar5 = *local_4;
          puVar5[1] = local_4[1];
          *(undefined1 *)((int)puVar5 + 5) = 0;
        }
        else {
          *puVar5 = DAT_005c030c;
          *(undefined2 *)(puVar5 + 1) = DAT_005c0310;
        }
        iVar4 = iVar4 + 1;
        puVar5 = puVar5 + 0xf;
      } while (iVar4 < iVar1);
    }
    *param_1 = iVar1;
    return iVar2;
  }
  *param_1 = 0;
  return 0;
}

