// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004b6410
// entry: 004b6410  size: 201


uint FUN_004b6410(undefined4 *param_1,uint *param_2,uint *param_3,undefined4 *param_4,int *param_5)

{
  char cVar1;
  byte bVar2;
  
  cVar1 = FUN_00526090(0x2a);
  if (-1 < cVar1) {
    if (cVar1 < '\x02') {
      *param_4 = 0;
    }
    else if (cVar1 == '\x02') {
      *param_4 = 1;
    }
  }
  bVar2 = FUN_00526090(0x2b);
  switch((int)(char)bVar2 & 0x70) {
  case 0:
    *param_1 = 0;
    *param_2 = 0;
    break;
  case 0x10:
    *param_1 = 1;
    *param_2 = 0;
    break;
  case 0x20:
    *param_1 = 2;
    goto LAB_004b64a8;
  case 0x30:
    *param_1 = 3;
LAB_004b64a8:
    *param_2 = (int)(char)bVar2 & 0xf;
  }
  *param_3 = (uint)(bVar2 >> 7);
  cVar1 = FUN_00526090(0x17);
  *param_5 = (int)cVar1;
  return (uint)param_5 & 0xffffff00;
}

