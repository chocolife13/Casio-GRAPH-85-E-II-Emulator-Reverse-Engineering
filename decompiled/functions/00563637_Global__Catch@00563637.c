// decompiled from GRAPH85emulator.exe
// function: Global::Catch@00563637
// entry: 00563637  size: 60


undefined4 Catch_00563637(void)

{
  CWinThread *pCVar1;
  undefined4 uVar2;
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x4c) = *(undefined4 *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -0x48) = *(undefined4 *)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -0x44) = *(undefined4 *)(unaff_EBP + 0x10);
  *(undefined4 *)(unaff_EBP + -0x40) = *(undefined4 *)(unaff_EBP + 0x14);
  pCVar1 = AfxGetThread();
  uVar2 = (**(code **)(*(int *)pCVar1 + 0x6c))(*(undefined4 *)(unaff_EBP + -0x20),unaff_EBP + -0x4c)
  ;
  *(undefined4 *)(unaff_EBP + -0x14) = uVar2;
  FUN_00567ad3();
  return 0x5635a5;
}

