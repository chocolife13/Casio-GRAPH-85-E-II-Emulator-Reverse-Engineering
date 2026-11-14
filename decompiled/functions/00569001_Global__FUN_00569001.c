// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00569001
// entry: 00569001  size: 290


undefined4 FUN_00569001(int param_1,LPCSTR param_2,undefined1 *param_3,undefined4 param_4)

{
  DWORD_PTR DVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  SHFILEINFOA local_170;
  int *local_c;
  int *local_8;
  
  uVar4 = 0;
  *param_3 = 0;
  DVar1 = SHGetFileInfoA(param_2,0,&local_170,0x160,0x800);
  if (((DVar1 == 0) || ((local_170.dwAttributes._2_1_ & 1) == 0)) ||
     (iVar2 = FUN_00568e07(&DAT_0059cb78), iVar2 < 0)) {
    return 0;
  }
  iVar2 = (**(code **)*local_8)();
  if (-1 < iVar2) {
    if (param_2 == (LPCSTR)0x0) {
      puVar5 = (undefined1 *)0x0;
    }
    else {
      puVar5 = &stack0xfffffe78;
      iVar2 = lstrlenA(param_2);
      FUN_00553a90();
      MultiByteToWideChar(0,0,param_2,-1,(LPWSTR)&stack0xfffffe78,iVar2 + 1);
    }
    iVar2 = (**(code **)(*local_c + 0x14))(local_c,puVar5,0);
    if (-1 < iVar2) {
      if (param_1 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined4 *)(param_1 + 0x1c);
      }
      iVar2 = (**(code **)(*local_8 + 0x4c))(local_8,uVar3,2);
      if (-1 < iVar2) {
        (**(code **)(*local_8 + 0xc))(local_8,param_3,param_4,0,0);
        (**(code **)(*local_c + 8))(local_c);
        uVar4 = 1;
        goto LAB_00569107;
      }
    }
    (**(code **)(*local_c + 8))(local_c);
  }
LAB_00569107:
  (**(code **)(*local_8 + 8))(local_8);
  return uVar4;
}

