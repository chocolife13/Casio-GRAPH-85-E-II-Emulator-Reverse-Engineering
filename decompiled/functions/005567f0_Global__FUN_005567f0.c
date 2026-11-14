// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005567f0
// entry: 005567f0  size: 74


UINT FUN_005567f0(UINT param_1)

{
  UINT UVar1;
  bool bVar2;
  
  if (param_1 == 0xfffffffe) {
    DAT_005d53d4 = 1;
                    /* WARNING: Could not recover jumptable at 0x0055680a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UVar1 = GetOEMCP();
    return UVar1;
  }
  if (param_1 == 0xfffffffd) {
    DAT_005d53d4 = 1;
                    /* WARNING: Could not recover jumptable at 0x0055681f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UVar1 = GetACP();
    return UVar1;
  }
  bVar2 = param_1 == 0xfffffffc;
  if (bVar2) {
    param_1 = DAT_005d563c;
  }
  DAT_005d53d4 = (uint)bVar2;
  return param_1;
}

