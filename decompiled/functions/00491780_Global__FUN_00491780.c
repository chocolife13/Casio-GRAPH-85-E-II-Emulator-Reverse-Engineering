// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00491780
// entry: 00491780  size: 521


byte FUN_00491780(void)

{
  char cVar1;
  undefined1 local_204 [12];
  undefined1 local_1f8 [12];
  undefined1 local_1ec [12];
  undefined1 local_1e0 [12];
  undefined1 local_1d4 [12];
  undefined1 local_1c8 [12];
  undefined1 local_1bc [12];
  undefined1 local_1b0 [12];
  undefined1 local_1a4 [12];
  undefined1 local_198 [12];
  undefined1 local_18c [12];
  undefined1 local_180 [12];
  undefined1 local_174 [12];
  undefined1 local_168 [12];
  undefined1 local_15c [12];
  undefined1 local_150 [12];
  undefined1 local_144 [12];
  undefined1 local_138 [12];
  undefined1 local_12c [12];
  undefined2 local_120;
  undefined2 local_11e;
  undefined2 local_11c;
  undefined2 local_11a;
  undefined2 local_118;
  undefined2 local_116;
  undefined2 local_114;
  undefined2 local_112;
  undefined2 local_110;
  undefined2 local_10e;
  undefined2 local_10c;
  undefined2 local_10a;
  undefined1 local_108 [12];
  undefined1 local_fc [250];
  short sStack_2;
  
  FUN_004ab670(local_108);
  FUN_004e5780(local_204);
  FUN_004e5780(local_1f8);
  FUN_004e5780(local_1ec);
  FUN_004e5780(local_1e0);
  FUN_004e5780(local_1d4);
  FUN_004e5070(0xc,local_1c8);
  FUN_004e5070(0xc,local_1bc);
  FUN_004e5780(local_1b0);
  FUN_004e5780(local_1a4);
  FUN_004e5780(local_198);
  FUN_004e5780(local_18c);
  FUN_004e5780(local_180);
  FUN_004e57a0(local_168);
  FUN_004e5070(0xc,local_15c);
  FUN_004e5780(local_150);
  FUN_004e5780(local_144);
  FUN_004e5780(local_138);
  FUN_004e5780(local_12c);
  FUN_004e57a0(local_174);
  local_11e = 1;
  local_120 = 1;
  local_11c = 0x7cd;
  local_118 = 1;
  local_11a = 1;
  local_116 = 0x7cd;
  local_114 = 1;
  local_112 = 0;
  local_110 = 0;
  local_10e = 0;
  local_10c = 0x65;
  local_10a = 1;
  cVar1 = FUN_004abb50(s__FINANCE_005be230,"fina_mem",0xfc,local_204);
  if (cVar1 != '\0') {
    if (cVar1 != '%') {
      return 4;
    }
    FUN_00491a50(local_fc);
    if (sStack_2 != 1) {
      FUN_00491ad0();
      cVar1 = FUN_004abb50(s__FINANCE_005be230,"fina_mem",0xfc,local_204);
      return -(cVar1 != '\0') & 4;
    }
  }
  return 0;
}

