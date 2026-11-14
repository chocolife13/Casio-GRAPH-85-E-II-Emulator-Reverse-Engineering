// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00421250
// entry: 00421250  size: 767


void FUN_00421250(undefined2 *param_1,ushort param_2,uint param_3)

{
  if ((param_2 & 0x8000) == 0) {
    switch(param_2) {
    case 1:
      FUN_0041f950(param_1,1);
      return;
    case 3:
    case 4:
    case 0x20:
    case 0x37:
      *param_1 = CONCAT11((char)*param_1,(char)((ushort)*param_1 >> 8));
      return;
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
      FUN_00420870(param_1,param_3);
      return;
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x1d:
    case 0x1e:
      FUN_0041f8e0(param_1,0xb);
      return;
    case 0x12:
    case 0x30:
      FUN_0041f8e0(param_1,2);
      return;
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x3b:
    case 0x3c:
      FUN_00420900(param_1,param_3 & 0xff);
      return;
    case 0x1b:
      FUN_0041f870(param_1,2);
      return;
    case 0x22:
      FUN_0041f8a0(param_1,4);
      return;
    case 0x23:
    case 0x2f:
      FUN_0041f8e0(param_1,0xe);
      return;
    case 0x25:
    case 0x26:
      FUN_00420f20(param_1,param_3);
      return;
    case 0x27:
      FUN_0041f990(param_1);
      return;
    case 0x28:
      *param_1 = CONCAT11((char)*param_1,(char)((ushort)*param_1 >> 8));
      param_1[1] = CONCAT11((char)param_1[1],(char)((ushort)param_1[1] >> 8));
      param_1[2] = CONCAT11((char)param_1[2],(char)((ushort)param_1[2] >> 8));
      param_1[3] = CONCAT11((char)param_1[3],(char)((ushort)param_1[3] >> 8));
      param_1[4] = CONCAT11((char)param_1[4],(char)((ushort)param_1[4] >> 8));
      param_1[5] = CONCAT11((char)param_1[5],(char)((ushort)param_1[5] >> 8));
      return;
    case 0x29:
      FUN_0041fa20(param_1);
      return;
    case 0x2a:
      FUN_0041fe20(param_1);
      return;
    case 0x2b:
      FUN_0041fe70(param_1);
      return;
    case 0x2d:
      FUN_0041ff60(param_1);
      return;
    case 0x2e:
      FUN_0041f8e0(param_1,3);
      return;
    case 0x31:
      FUN_00420010(param_1);
      return;
    case 0x33:
      FUN_00420370(param_1);
      return;
    case 0x34:
      *param_1 = CONCAT11((char)*param_1,(char)((ushort)*param_1 >> 8));
      param_1[1] = CONCAT11((char)param_1[1],(char)((ushort)param_1[1] >> 8));
      param_1[2] = CONCAT11((char)param_1[2],(char)((ushort)param_1[2] >> 8));
      param_1[3] = CONCAT11((char)param_1[3],(char)((ushort)param_1[3] >> 8));
      param_1[4] = CONCAT11((char)param_1[4],(char)((ushort)param_1[4] >> 8));
      param_1[9] = CONCAT11((char)param_1[9],(char)((ushort)param_1[9] >> 8));
      param_1[10] = CONCAT11((char)param_1[10],(char)((ushort)param_1[10] >> 8));
      param_1[0xb] = CONCAT11((char)param_1[0xb],(char)((ushort)param_1[0xb] >> 8));
      param_1[0xc] = CONCAT11((char)param_1[0xc],(char)((ushort)param_1[0xc] >> 8));
      param_1[0xd] = CONCAT11((char)param_1[0xd],(char)((ushort)param_1[0xd] >> 8));
      param_1[0xe] = CONCAT11((char)param_1[0xe],(char)((ushort)param_1[0xe] >> 8));
      param_1[0xf] = CONCAT11((char)param_1[0xf],(char)((ushort)param_1[0xf] >> 8));
      param_1[0x10] = CONCAT11((char)param_1[0x10],(char)((ushort)param_1[0x10] >> 8));
      param_1[5] = CONCAT11((char)param_1[5],(char)((ushort)param_1[5] >> 8));
      param_1[6] = CONCAT11((char)param_1[6],(char)((ushort)param_1[6] >> 8));
      param_1[7] = CONCAT11((char)param_1[7],(char)((ushort)param_1[7] >> 8));
      param_1[8] = CONCAT11((char)param_1[8],(char)((ushort)param_1[8] >> 8));
      param_1[0x11] = CONCAT11((char)param_1[0x11],(char)((ushort)param_1[0x11] >> 8));
      param_1[0x12] = CONCAT11((char)param_1[0x12],(char)((ushort)param_1[0x12] >> 8));
      param_1[0x13] = CONCAT11((char)param_1[0x13],(char)((ushort)param_1[0x13] >> 8));
      param_1[0x14] = CONCAT11((char)param_1[0x14],(char)((ushort)param_1[0x14] >> 8));
      return;
    case 0x35:
      FUN_00420530(param_1,param_3);
      return;
    case 0x36:
      FUN_00420f20(param_1,param_3);
      break;
    case 0x3a:
      FUN_0041f950(param_1,0x1d);
      return;
    }
  }
  return;
}

