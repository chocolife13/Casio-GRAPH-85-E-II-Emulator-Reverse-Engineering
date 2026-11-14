// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00554879
// entry: 00554879  size: 48


void FUN_00554879(DWORD param_1)

{
  int iVar1;
  
  if (DAT_005da910 != (code *)0x0) {
    (*DAT_005da910)();
  }
  iVar1 = FUN_005582d3();
  if (iVar1 == 0) {
    __amsg_exit(0x10);
  }
  FUN_0055833a(iVar1);
                    /* WARNING: Subroutine does not return */
  ExitThread(param_1);
}

