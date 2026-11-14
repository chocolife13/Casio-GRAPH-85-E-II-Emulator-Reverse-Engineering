// decompiled from GRAPH85emulator.exe
// function: Global::Catch@0056331c
// entry: 0056331c  size: 39


undefined * Catch_0056331c(void)

{
  CWinThread *pCVar1;
  undefined4 uVar2;
  int unaff_EBP;
  
  pCVar1 = AfxGetThread();
  uVar2 = (**(code **)(*(int *)pCVar1 + 0x6c))
                    (*(undefined4 *)(unaff_EBP + 0xc),*(int *)(unaff_EBP + -0x14) + 0x34);
  *(undefined4 *)(unaff_EBP + 0x18) = uVar2;
  FUN_00567ad3();
  return &DAT_00563343;
}

