#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif



#include "codegen/il2cpp-codegen-metadata.h"





IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END




// 0x00000001 System.Boolean Unity.Barracuda.BurstBLAS::IsNative()
extern void BurstBLAS_IsNative_m16F61D06C1F38D5D296813AD5E6E8CD7DFB62E50 (void);
// 0x00000002 System.Boolean Unity.Barracuda.BurstBLAS::IsCurrentPlatformSupported()
extern void BurstBLAS_IsCurrentPlatformSupported_m0ED3C0B5CFED93FABF83153697EA75774A0ABCBA (void);
// 0x00000003 System.Void Unity.Barracuda.BurstBLAS::SGEMM(System.Single*,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Int32,System.Boolean,System.Boolean)
extern void BurstBLAS_SGEMM_mCB1AE572C133C25D602350853DFC92586B524431 (void);
// 0x00000004 Unity.Jobs.JobHandle Unity.Barracuda.BurstBLAS::ScheduleSGEMM(Unity.Jobs.JobHandle,System.Single*,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Int32,System.Boolean,System.Boolean)
extern void BurstBLAS_ScheduleSGEMM_m01E25E2A72839D9655753D6D4AB7316678509C31 (void);
// 0x00000005 System.Void Unity.Barracuda.BurstBLAS::.ctor()
extern void BurstBLAS__ctor_m2377490AC33F91D8B32641BBA962EED758A6E6F6 (void);
// 0x00000006 System.Void Unity.Barracuda.UnsafeMatrixBlockMultiplyUnrolled8xhJob::Execute(System.Int32)
extern void UnsafeMatrixBlockMultiplyUnrolled8xhJob_Execute_m650EFA5965DE93C46705E63E277E960987C85337_AdjustorThunk (void);
// 0x00000007 System.Void Unity.Barracuda.UnsafeMatrixBlockMultiplyUnrolled8xhJob::ExecutOverColB(System.Single*,System.Single*,System.Single*,System.Int32)
extern void UnsafeMatrixBlockMultiplyUnrolled8xhJob_ExecutOverColB_mB4C884FF3A36197A69FE331C9E079EA531476912_AdjustorThunk (void);
// 0x00000008 System.Void Unity.Barracuda.UnsafeMatrixBlockMultiplyUnrolled8xhJob::ExecutOverRowA(System.Single*,System.Single*,System.Single*,System.Int32)
extern void UnsafeMatrixBlockMultiplyUnrolled8xhJob_ExecutOverRowA_m802BF19A1F1769BDD7FB992911C136F15C695167_AdjustorThunk (void);
static Il2CppMethodPointer s_methodPointers[8] = 
{
	BurstBLAS_IsNative_m16F61D06C1F38D5D296813AD5E6E8CD7DFB62E50,
	BurstBLAS_IsCurrentPlatformSupported_m0ED3C0B5CFED93FABF83153697EA75774A0ABCBA,
	BurstBLAS_SGEMM_mCB1AE572C133C25D602350853DFC92586B524431,
	BurstBLAS_ScheduleSGEMM_m01E25E2A72839D9655753D6D4AB7316678509C31,
	BurstBLAS__ctor_m2377490AC33F91D8B32641BBA962EED758A6E6F6,
	UnsafeMatrixBlockMultiplyUnrolled8xhJob_Execute_m650EFA5965DE93C46705E63E277E960987C85337_AdjustorThunk,
	UnsafeMatrixBlockMultiplyUnrolled8xhJob_ExecutOverColB_mB4C884FF3A36197A69FE331C9E079EA531476912_AdjustorThunk,
	UnsafeMatrixBlockMultiplyUnrolled8xhJob_ExecutOverRowA_m802BF19A1F1769BDD7FB992911C136F15C695167_AdjustorThunk,
};
static const int32_t s_InvokerIndices[8] = 
{
	89,
	89,
	2370,
	2371,
	23,
	32,
	663,
	663,
};
extern const Il2CppCodeGenModule g_Unity_Barracuda_BurstBLASCodeGenModule;
const Il2CppCodeGenModule g_Unity_Barracuda_BurstBLASCodeGenModule = 
{
	"Unity.Barracuda.BurstBLAS.dll",
	8,
	s_methodPointers,
	s_InvokerIndices,
	0,
	NULL,
	0,
	NULL,
	0,
	NULL,
	NULL,
};
