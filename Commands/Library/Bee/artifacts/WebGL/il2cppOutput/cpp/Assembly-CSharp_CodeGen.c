#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Void Chapter.Command.BikeController::ToggleTurbo()
extern void BikeController_ToggleTurbo_mE9A56E07A8606D6763D317D5674121A88AEAB106 (void);
// 0x00000002 System.Void Chapter.Command.BikeController::Turn(Chapter.Command.BikeController/Direction)
extern void BikeController_Turn_m58CF0789266091846C40D11EBC3CA8F7944271FE (void);
// 0x00000003 System.Void Chapter.Command.BikeController::ResetPosition()
extern void BikeController_ResetPosition_m2E24AB4A4F3E8D410A08A1DEA8807000B3D88A56 (void);
// 0x00000004 System.Void Chapter.Command.BikeController::.ctor()
extern void BikeController__ctor_m5E9772E6227ABE2D835CF325999AAE0C5C6736B0 (void);
// 0x00000005 System.Void Chapter.Command.Command::Execute()
// 0x00000006 System.Void Chapter.Command.Command::.ctor()
extern void Command__ctor_m69C1F84C77B57D70909513D8B67CD90864B12FBE (void);
// 0x00000007 System.Void Chapter.Command.InputHandler::Start()
extern void InputHandler_Start_m9FCF38679938C6B5D513EF303254FFFE3EB2B36D (void);
// 0x00000008 System.Void Chapter.Command.InputHandler::Update()
extern void InputHandler_Update_mF645128754DE61C0D03103E83A0F3B4A620747C5 (void);
// 0x00000009 System.Void Chapter.Command.InputHandler::OnGUI()
extern void InputHandler_OnGUI_m92E9DFFEB083D47EA6C403F3D7474E8F01432FA1 (void);
// 0x0000000A System.Void Chapter.Command.InputHandler::.ctor()
extern void InputHandler__ctor_mEC7B1F82633357F2DFE27985F6C790443F5696D4 (void);
// 0x0000000B System.Void Chapter.Command.Invoker::ExecuteCommand(Chapter.Command.Command)
extern void Invoker_ExecuteCommand_m13DEE17F8848CC5AF2596AE9600AE38B2C0CA6E8 (void);
// 0x0000000C System.Void Chapter.Command.Invoker::Record()
extern void Invoker_Record_mA440D2CAFC3B254A77CDEDB7988EBF70732E5554 (void);
// 0x0000000D System.Void Chapter.Command.Invoker::Replay()
extern void Invoker_Replay_mE2FF9C8F4988140736D8C50D3C078E73BF354302 (void);
// 0x0000000E System.Void Chapter.Command.Invoker::FixedUpdate()
extern void Invoker_FixedUpdate_m142808D890884505691B89114898F5F56430CF0F (void);
// 0x0000000F System.Void Chapter.Command.Invoker::.ctor()
extern void Invoker__ctor_mE630C60B8B79E7D2104045EBE57612AB9C7ABC47 (void);
// 0x00000010 System.Void Chapter.Command.ToggleTurbo::.ctor(Chapter.Command.BikeController)
extern void ToggleTurbo__ctor_m8EF7FD893C34C430C012F8C0E0F18D161D2621E8 (void);
// 0x00000011 System.Void Chapter.Command.ToggleTurbo::Execute()
extern void ToggleTurbo_Execute_m56113887473C3990B0C8E5F9F3715815277B2659 (void);
// 0x00000012 System.Void Chapter.Command.TurnLeft::.ctor(Chapter.Command.BikeController)
extern void TurnLeft__ctor_mDF113B89213B08B1E0D9B648E6BD35B652C5C059 (void);
// 0x00000013 System.Void Chapter.Command.TurnLeft::Execute()
extern void TurnLeft_Execute_m0EC5791260F85A651AE407E0DFD65A6623FD9E8B (void);
// 0x00000014 System.Void Chapter.Command.TurnRight::.ctor(Chapter.Command.BikeController)
extern void TurnRight__ctor_m6110FDBC61D012A4F29CAD2226497C22BA7110B9 (void);
// 0x00000015 System.Void Chapter.Command.TurnRight::Execute()
extern void TurnRight_Execute_mCC2F3C92F30B54894B150E1C22C2B10121C96556 (void);
static Il2CppMethodPointer s_methodPointers[21] = 
{
	BikeController_ToggleTurbo_mE9A56E07A8606D6763D317D5674121A88AEAB106,
	BikeController_Turn_m58CF0789266091846C40D11EBC3CA8F7944271FE,
	BikeController_ResetPosition_m2E24AB4A4F3E8D410A08A1DEA8807000B3D88A56,
	BikeController__ctor_m5E9772E6227ABE2D835CF325999AAE0C5C6736B0,
	NULL,
	Command__ctor_m69C1F84C77B57D70909513D8B67CD90864B12FBE,
	InputHandler_Start_m9FCF38679938C6B5D513EF303254FFFE3EB2B36D,
	InputHandler_Update_mF645128754DE61C0D03103E83A0F3B4A620747C5,
	InputHandler_OnGUI_m92E9DFFEB083D47EA6C403F3D7474E8F01432FA1,
	InputHandler__ctor_mEC7B1F82633357F2DFE27985F6C790443F5696D4,
	Invoker_ExecuteCommand_m13DEE17F8848CC5AF2596AE9600AE38B2C0CA6E8,
	Invoker_Record_mA440D2CAFC3B254A77CDEDB7988EBF70732E5554,
	Invoker_Replay_mE2FF9C8F4988140736D8C50D3C078E73BF354302,
	Invoker_FixedUpdate_m142808D890884505691B89114898F5F56430CF0F,
	Invoker__ctor_mE630C60B8B79E7D2104045EBE57612AB9C7ABC47,
	ToggleTurbo__ctor_m8EF7FD893C34C430C012F8C0E0F18D161D2621E8,
	ToggleTurbo_Execute_m56113887473C3990B0C8E5F9F3715815277B2659,
	TurnLeft__ctor_mDF113B89213B08B1E0D9B648E6BD35B652C5C059,
	TurnLeft_Execute_m0EC5791260F85A651AE407E0DFD65A6623FD9E8B,
	TurnRight__ctor_m6110FDBC61D012A4F29CAD2226497C22BA7110B9,
	TurnRight_Execute_mCC2F3C92F30B54894B150E1C22C2B10121C96556,
};
static const int32_t s_InvokerIndices[21] = 
{
	1006,
	864,
	1006,
	1006,
	0,
	1006,
	1006,
	1006,
	1006,
	1006,
	872,
	1006,
	1006,
	1006,
	1006,
	872,
	1006,
	872,
	1006,
	872,
	1006,
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_AssemblyU2DCSharp_CodeGenModule;
const Il2CppCodeGenModule g_AssemblyU2DCSharp_CodeGenModule = 
{
	"Assembly-CSharp.dll",
	21,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	0,
	NULL,
	0,
	NULL,
	NULL,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
