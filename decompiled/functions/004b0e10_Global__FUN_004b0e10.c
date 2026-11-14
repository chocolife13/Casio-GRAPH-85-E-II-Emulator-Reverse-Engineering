// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004b0e10
// entry: 004b0e10  size: 234


void FUN_004b0e10(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined2 local_27c;
  undefined2 local_27a;
  undefined2 local_278;
  undefined2 local_276;
  undefined2 local_274;
  undefined1 local_270;
  undefined1 local_26f [99];
  undefined2 local_20c;
  undefined2 local_20a;
  undefined2 local_208;
  undefined2 local_206;
  undefined2 local_204;
  undefined2 local_202;
  undefined2 local_200;
  undefined2 local_1fe;
  undefined4 local_1fc [127];
  
  local_20c = 0x5c;
  local_20a = 0x5c;
  local_200 = 0x5c;
  local_208 = 0x66;
  local_206 = 0x6c;
  local_204 = 0x73;
  local_202 = 0x30;
  local_1fe = 0;
  local_27c = 0x2e;
  puVar2 = local_1fc;
  for (iVar1 = 0x7f; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_27a = 0x67;
  local_278 = 0x31;
  local_276 = 0x65;
  local_274 = 0;
  local_270 = 0x5a;
  FUN_004af130(param_2,local_26f);
  FUN_0042a490(param_1,&local_20c);
  iVar1 = FUN_0042a410(param_1,&local_270,0xc);
  FUN_0042aac0(param_1 + iVar1 * 2);
  iVar1 = FUN_0042a410(param_1,&local_27c);
  FUN_0042a490(param_1 + iVar1 * 2);
  return;
}

