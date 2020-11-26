#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif



#include "codegen/il2cpp-codegen-metadata.h"





IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END




// 0x00000001 Unity.Barracuda.Tensor Unity.Barracuda.IOps::MatMul(Unity.Barracuda.Tensor,System.Boolean,Unity.Barracuda.Tensor,System.Boolean)
// 0x00000002 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Dense(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Layer_FusedActivation)
// 0x00000003 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Conv2D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer_FusedActivation)
// 0x00000004 Unity.Barracuda.Tensor Unity.Barracuda.IOps::DepthwiseConv2D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer_FusedActivation)
// 0x00000005 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Conv2DTrans(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[],Unity.Barracuda.Layer_FusedActivation)
// 0x00000006 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Upsample2D(Unity.Barracuda.Tensor,System.Int32[],System.Boolean)
// 0x00000007 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Resample2D(Unity.Barracuda.Tensor,System.Int32[],System.Boolean)
// 0x00000008 Unity.Barracuda.Tensor Unity.Barracuda.IOps::DepthToSpace(Unity.Barracuda.Tensor,System.Int32[],Unity.Barracuda.Layer_DepthToSpaceMode)
// 0x00000009 Unity.Barracuda.Tensor Unity.Barracuda.IOps::SpaceToDepth(Unity.Barracuda.Tensor,System.Int32[])
// 0x0000000A Unity.Barracuda.Tensor Unity.Barracuda.IOps::MaxPool2D(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
// 0x0000000B Unity.Barracuda.Tensor Unity.Barracuda.IOps::AvgPool2D(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
// 0x0000000C Unity.Barracuda.Tensor Unity.Barracuda.IOps::GlobalMaxPool2D(Unity.Barracuda.Tensor)
// 0x0000000D Unity.Barracuda.Tensor Unity.Barracuda.IOps::GlobalAvgPool2D(Unity.Barracuda.Tensor)
// 0x0000000E Unity.Barracuda.Tensor Unity.Barracuda.IOps::GlobalAvgVariancePool2D(Unity.Barracuda.Tensor)
// 0x0000000F Unity.Barracuda.Tensor Unity.Barracuda.IOps::Border2D(Unity.Barracuda.Tensor,System.Int32[],System.Single)
// 0x00000010 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Pad2DReflect(Unity.Barracuda.Tensor,System.Int32[])
// 0x00000011 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Pad2DSymmetric(Unity.Barracuda.Tensor,System.Int32[])
// 0x00000012 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Pad2DEdge(Unity.Barracuda.Tensor,System.Int32[])
// 0x00000013 Unity.Barracuda.Tensor Unity.Barracuda.IOps::ScaleBias(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
// 0x00000014 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Normalization(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32,System.Int32,System.Single,Unity.Barracuda.Layer_FusedActivation)
// 0x00000015 Unity.Barracuda.Tensor Unity.Barracuda.IOps::LRN(Unity.Barracuda.Tensor,System.Single,System.Single,System.Single,System.Int32)
// 0x00000016 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Dropout(Unity.Barracuda.Tensor,System.Single)
// 0x00000017 Unity.Barracuda.Tensor Unity.Barracuda.IOps::RandomNormal(Unity.Barracuda.TensorShape,System.Single,System.Single,System.Int32)
// 0x00000018 Unity.Barracuda.Tensor Unity.Barracuda.IOps::RandomUniform(Unity.Barracuda.TensorShape,System.Single,System.Single,System.Int32)
// 0x00000019 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Multinomial(Unity.Barracuda.Tensor,System.Int32,System.Int32)
// 0x0000001A Unity.Barracuda.Tensor Unity.Barracuda.IOps::OneHot(Unity.Barracuda.Tensor,System.Int32,System.Single,System.Single)
// 0x0000001B Unity.Barracuda.Tensor Unity.Barracuda.IOps::Relu(Unity.Barracuda.Tensor)
// 0x0000001C Unity.Barracuda.Tensor Unity.Barracuda.IOps::Softmax(Unity.Barracuda.Tensor)
// 0x0000001D Unity.Barracuda.Tensor Unity.Barracuda.IOps::LogSoftmax(Unity.Barracuda.Tensor)
// 0x0000001E Unity.Barracuda.Tensor Unity.Barracuda.IOps::Tanh(Unity.Barracuda.Tensor)
// 0x0000001F Unity.Barracuda.Tensor Unity.Barracuda.IOps::Sigmoid(Unity.Barracuda.Tensor)
// 0x00000020 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Elu(Unity.Barracuda.Tensor,System.Single)
// 0x00000021 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Relu6(Unity.Barracuda.Tensor)
// 0x00000022 Unity.Barracuda.Tensor Unity.Barracuda.IOps::LeakyRelu(Unity.Barracuda.Tensor,System.Single)
// 0x00000023 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Selu(Unity.Barracuda.Tensor,System.Single,System.Single)
// 0x00000024 Unity.Barracuda.Tensor Unity.Barracuda.IOps::PRelu(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
// 0x00000025 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Swish(Unity.Barracuda.Tensor)
// 0x00000026 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Abs(Unity.Barracuda.Tensor)
// 0x00000027 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Neg(Unity.Barracuda.Tensor)
// 0x00000028 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Ceil(Unity.Barracuda.Tensor)
// 0x00000029 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Clip(Unity.Barracuda.Tensor,System.Single,System.Single)
// 0x0000002A Unity.Barracuda.Tensor Unity.Barracuda.IOps::Floor(Unity.Barracuda.Tensor)
// 0x0000002B Unity.Barracuda.Tensor Unity.Barracuda.IOps::Reciprocal(Unity.Barracuda.Tensor)
// 0x0000002C Unity.Barracuda.Tensor Unity.Barracuda.IOps::Pow(Unity.Barracuda.Tensor,System.Single)
// 0x0000002D Unity.Barracuda.Tensor Unity.Barracuda.IOps::Exp(Unity.Barracuda.Tensor)
// 0x0000002E Unity.Barracuda.Tensor Unity.Barracuda.IOps::Log(Unity.Barracuda.Tensor)
// 0x0000002F Unity.Barracuda.Tensor Unity.Barracuda.IOps::Sqrt(Unity.Barracuda.Tensor)
// 0x00000030 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Add(Unity.Barracuda.Tensor[])
// 0x00000031 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Sub(Unity.Barracuda.Tensor[])
// 0x00000032 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Mul(Unity.Barracuda.Tensor[])
// 0x00000033 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Div(Unity.Barracuda.Tensor[])
// 0x00000034 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Pow(Unity.Barracuda.Tensor[])
// 0x00000035 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Min(Unity.Barracuda.Tensor[])
// 0x00000036 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Max(Unity.Barracuda.Tensor[])
// 0x00000037 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Mean(Unity.Barracuda.Tensor[])
// 0x00000038 Unity.Barracuda.Tensor Unity.Barracuda.IOps::ReduceMax(Unity.Barracuda.Tensor,System.Int32)
// 0x00000039 Unity.Barracuda.Tensor Unity.Barracuda.IOps::ReduceMean(Unity.Barracuda.Tensor,System.Int32)
// 0x0000003A Unity.Barracuda.Tensor Unity.Barracuda.IOps::ReduceMin(Unity.Barracuda.Tensor,System.Int32)
// 0x0000003B Unity.Barracuda.Tensor Unity.Barracuda.IOps::ReduceProd(Unity.Barracuda.Tensor,System.Int32)
// 0x0000003C Unity.Barracuda.Tensor Unity.Barracuda.IOps::ReduceSum(Unity.Barracuda.Tensor,System.Int32)
// 0x0000003D Unity.Barracuda.Tensor Unity.Barracuda.IOps::Greater(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
// 0x0000003E Unity.Barracuda.Tensor Unity.Barracuda.IOps::GreaterEqual(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
// 0x0000003F Unity.Barracuda.Tensor Unity.Barracuda.IOps::Less(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
// 0x00000040 Unity.Barracuda.Tensor Unity.Barracuda.IOps::LessEqual(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
// 0x00000041 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Equal(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
// 0x00000042 Unity.Barracuda.Tensor Unity.Barracuda.IOps::LogicalOr(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
// 0x00000043 Unity.Barracuda.Tensor Unity.Barracuda.IOps::LogicalAnd(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
// 0x00000044 Unity.Barracuda.Tensor Unity.Barracuda.IOps::LogicalXor(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
// 0x00000045 Unity.Barracuda.Tensor Unity.Barracuda.IOps::LogicalNot(Unity.Barracuda.Tensor)
// 0x00000046 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Flatten(Unity.Barracuda.Tensor)
// 0x00000047 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Reshape(Unity.Barracuda.Tensor,Unity.Barracuda.TensorShape)
// 0x00000048 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Expand(Unity.Barracuda.Tensor,Unity.Barracuda.TensorShape)
// 0x00000049 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Transpose(Unity.Barracuda.Tensor)
// 0x0000004A Unity.Barracuda.Tensor Unity.Barracuda.IOps::Concat(Unity.Barracuda.Tensor[],System.Int32)
// 0x0000004B Unity.Barracuda.Tensor Unity.Barracuda.IOps::StridedSlice(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
// 0x0000004C Unity.Barracuda.Tensor Unity.Barracuda.IOps::Tile(Unity.Barracuda.Tensor,System.Int32[])
// 0x0000004D Unity.Barracuda.Tensor Unity.Barracuda.IOps::Gather(Unity.Barracuda.Tensor[],System.Int32)
// 0x0000004E Unity.Barracuda.Tensor Unity.Barracuda.IOps::Copy(Unity.Barracuda.Tensor)
// 0x0000004F Unity.Barracuda.Tensor Unity.Barracuda.IOps::Prepare(Unity.Barracuda.Tensor)
// 0x00000050 System.Void Unity.Barracuda.IOps::ResetAllocator(System.Boolean)
// 0x00000051 System.Void Unity.Barracuda.IModelCompiler::PrepareModel(Unity.Barracuda.Model,System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.TensorShape>)
// 0x00000052 System.Void Unity.Barracuda.IModelCompiler::PreExecuteLayer(Unity.Barracuda.Layer,Unity.Barracuda.Tensor[])
// 0x00000053 System.Void Unity.Barracuda.IVars::SetInput(System.String,Unity.Barracuda.Tensor)
// 0x00000054 System.Void Unity.Barracuda.IVars::PrepareStorage(Unity.Barracuda.Model,Unity.Barracuda.IOps,System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.TensorShape>)
// 0x00000055 Unity.Barracuda.Tensor[] Unity.Barracuda.IVars::GatherInputs(Unity.Barracuda.Layer)
// 0x00000056 System.Void Unity.Barracuda.IVars::PrepareStorage(Unity.Barracuda.Layer)
// 0x00000057 System.Void Unity.Barracuda.IVars::Store(Unity.Barracuda.Layer,Unity.Barracuda.Tensor)
// 0x00000058 Unity.Barracuda.Tensor Unity.Barracuda.IVars::PeekOutput(System.String)
// 0x00000059 Unity.Barracuda.Tensor[] Unity.Barracuda.IVars::PeekConstants(System.String)
// 0x0000005A Unity.Barracuda.ITensorAllocator Unity.Barracuda.IVars::GetAllocator()
// 0x0000005B Unity.Barracuda.Tensor Unity.Barracuda.ITensorAllocator::Alloc(Unity.Barracuda.TensorShape)
// 0x0000005C Unity.Barracuda.Tensor Unity.Barracuda.ITensorAllocator::Alloc(Unity.Barracuda.TensorShape,Unity.Barracuda.ITensorData)
// 0x0000005D System.Void Unity.Barracuda.ITensorAllocator::MoveToDevice(Unity.Barracuda.Tensor,Unity.Barracuda.ITensorData,Unity.Barracuda.ITensorData,System.Boolean)
// 0x0000005E System.Void Unity.Barracuda.ITensorAllocator::Release(Unity.Barracuda.Tensor,System.Boolean)
// 0x0000005F System.Void Unity.Barracuda.ITensorAllocator::WaiveOwnership(Unity.Barracuda.Tensor)
// 0x00000060 System.Void Unity.Barracuda.ITensorAllocator::Reset(System.Boolean)
// 0x00000061 Unity.Barracuda.WorkerFactory_Type Unity.Barracuda.BarracudaBackendsFactory::ResolveAutoType(Unity.Barracuda.WorkerFactory_Type)
extern void BarracudaBackendsFactory_ResolveAutoType_mE1FA34FB3E37F66D044E32C2910F65E1BFB84901 (void);
// 0x00000062 Unity.Barracuda.WorkerFactory_Type Unity.Barracuda.BarracudaBackendsFactory::GetBestTypeForDevice(Unity.Barracuda.WorkerFactory_Device)
extern void BarracudaBackendsFactory_GetBestTypeForDevice_mB8D3C144A6FFB3DC58A8F0B020C3B14B4C3405B1 (void);
// 0x00000063 Unity.Barracuda.WorkerFactory_Type Unity.Barracuda.BarracudaBackendsFactory::ValidateType(Unity.Barracuda.WorkerFactory_Type)
extern void BarracudaBackendsFactory_ValidateType_mD5863560EFD1BE5674FC6BD22C6C2A5CD5019B79 (void);
// 0x00000064 Unity.Barracuda.IOps Unity.Barracuda.BarracudaBackendsFactory::CreateOps(Unity.Barracuda.WorkerFactory_Type,Unity.Barracuda.ITensorAllocator,System.Boolean)
extern void BarracudaBackendsFactory_CreateOps_m9D516CE3B2F84465E6FFA09A027A5E7CEF27AD55 (void);
// 0x00000065 Unity.Barracuda.IWorker Unity.Barracuda.BarracudaBackendsFactory::CreateWorker(Unity.Barracuda.WorkerFactory_Type,Unity.Barracuda.Model,System.String[],System.String[],Unity.Barracuda.WorkerFactory_WorkerConfiguration)
extern void BarracudaBackendsFactory_CreateWorker_mA8ABB3CC7C40FBD1F07EA1ECFA1CD9A5C94AAD3F (void);
// 0x00000066 Unity.Barracuda.Model Unity.Barracuda.BarracudaBackendsFactory::PatchModel(Unity.Barracuda.Model,System.String[],System.String[])
extern void BarracudaBackendsFactory_PatchModel_m5AADDFC1F23F49088754ED739CFA42C84B8342B2 (void);
// 0x00000067 Unity.Barracuda.Model Unity.Barracuda.BarracudaBackendsFactory::ValidateModel(Unity.Barracuda.Model)
extern void BarracudaBackendsFactory_ValidateModel_m8206B8143E846D71A00781069EF5B6635CE3B7AC (void);
// 0x00000068 System.Void Unity.Barracuda.BarracudaBackendsFactory::.ctor()
extern void BarracudaBackendsFactory__ctor_m53CE2D198F71A59BFA1A3FFA253D1E2DC6646586 (void);
// 0x00000069 Unity.Jobs.JobHandle Unity.Barracuda.BurstTensorData::get_fence()
extern void BurstTensorData_get_fence_mE17EFD9CC6702009DA438843D21B46F8DB459D4A (void);
// 0x0000006A System.Void Unity.Barracuda.BurstTensorData::set_fence(Unity.Jobs.JobHandle)
extern void BurstTensorData_set_fence_mCDEBEFC61CFE843A9AF154E6586966D8345D93D1 (void);
// 0x0000006B Unity.Jobs.JobHandle Unity.Barracuda.BurstTensorData::get_reuse()
extern void BurstTensorData_get_reuse_m1E554704F51DFEC39D9CFEA1DB73BE979EBD57AC (void);
// 0x0000006C System.Void Unity.Barracuda.BurstTensorData::set_reuse(Unity.Jobs.JobHandle)
extern void BurstTensorData_set_reuse_m4BA0CA7DB0830F298832CD57B6CF141AEBD0967E (void);
// 0x0000006D System.Void Unity.Barracuda.BurstTensorData::.ctor(System.Int32)
extern void BurstTensorData__ctor_m99F80AA1DE09B1D7CDDFE20A0293145051DDF6BB (void);
// 0x0000006E System.Void Unity.Barracuda.BurstTensorData::.ctor(Unity.Barracuda.TensorShape)
extern void BurstTensorData__ctor_mECDEB2473F7535EEA7F7D81DEC0CC43948186BC1 (void);
// 0x0000006F System.Void Unity.Barracuda.BurstTensorData::.ctor(Unity.Barracuda.ArrayTensorData)
extern void BurstTensorData__ctor_mA9321F4E1F2CCFECE302E1DE7F0F16A072DEA68C (void);
// 0x00000070 System.Void Unity.Barracuda.BurstTensorData::.ctor(Unity.Barracuda.SharedArrayTensorData)
extern void BurstTensorData__ctor_m5F0C64EF48DAB5260A1F5DAEFA479659046B040A (void);
// 0x00000071 System.Void Unity.Barracuda.BurstTensorData::.ctor(Unity.Barracuda.UnsafeArrayTensorData)
extern void BurstTensorData__ctor_mA36A5EF58E213B3BFE13AB850575E465A60706F7 (void);
// 0x00000072 System.Void Unity.Barracuda.BurstTensorData::Finalize()
extern void BurstTensorData_Finalize_mDFC5EBC548E3263D8EBFD2F104553783D19C0C28 (void);
// 0x00000073 System.Void Unity.Barracuda.BurstTensorData::Dispose()
extern void BurstTensorData_Dispose_m8399A096E2C6FE86A66BC754A016A0C5525BC146 (void);
// 0x00000074 System.Void Unity.Barracuda.BurstTensorData::CompleteAllPendingOperations()
extern void BurstTensorData_CompleteAllPendingOperations_m0A542B1038DC9DC932821293D8682148C5806733 (void);
// 0x00000075 System.Void Unity.Barracuda.BurstTensorData::Reserve(System.Int32)
extern void BurstTensorData_Reserve_m4E1106383B1CD72E36886CFB761001ED09333342 (void);
// 0x00000076 System.Void Unity.Barracuda.BurstTensorData::Upload(System.Single[],Unity.Barracuda.TensorShape,System.Int32)
extern void BurstTensorData_Upload_mB0F9B2619D055191A0EB2D30E312803E64C2BF42 (void);
// 0x00000077 System.Single[] Unity.Barracuda.BurstTensorData::Download(Unity.Barracuda.TensorShape)
extern void BurstTensorData_Download_m455F18B618FA10B353F4B42CEE7C498555FB0DF9 (void);
// 0x00000078 System.Single[] Unity.Barracuda.BurstTensorData::SharedAccess(System.Int32&)
extern void BurstTensorData_SharedAccess_mE06E0B7DF19BE8304CFEFFB8E49245A55AD50C42 (void);
// 0x00000079 System.Boolean Unity.Barracuda.BurstTensorData::ScheduleAsyncDownload(System.Int32)
extern void BurstTensorData_ScheduleAsyncDownload_mE4BFDF750361FDC234F69B045EBAC82469C76ADA (void);
// 0x0000007A System.String Unity.Barracuda.BurstTensorData::ToString()
extern void BurstTensorData_ToString_m0F41CF270F0C345B090012FD0312F8CA4EBD5C20 (void);
// 0x0000007B System.Void Unity.Barracuda.BurstCPUOps::.ctor(Unity.Barracuda.ITensorAllocator)
extern void BurstCPUOps__ctor_m9366FE21FC6CED612459F3A838D4564D758E44EB (void);
// 0x0000007C Unity.Barracuda.BurstTensorData Unity.Barracuda.BurstCPUOps::Pin(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Pin_m0735E4F1CFD93432EA86D2DA85F141A73C94190D (void);
// 0x0000007D Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Prepare(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Prepare_m5E815F345BBF4EC1F36868D49FF957A7E87AD49E (void);
// 0x0000007E Unity.Jobs.JobHandle Unity.Barracuda.BurstCPUOps::Dependencies(Unity.Jobs.JobHandle,Unity.Jobs.JobHandle)
extern void BurstCPUOps_Dependencies_mB397C95D7ADF8FE823502686B939D72C6B088B34 (void);
// 0x0000007F Unity.Jobs.JobHandle Unity.Barracuda.BurstCPUOps::Dependencies(Unity.Jobs.JobHandle,Unity.Jobs.JobHandle,Unity.Jobs.JobHandle)
extern void BurstCPUOps_Dependencies_mE7338BC0D47E313C7B2F75D1DEDA56E8F9BB0E44 (void);
// 0x00000080 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::MatMul(Unity.Barracuda.Tensor,System.Boolean,Unity.Barracuda.Tensor,System.Boolean)
extern void BurstCPUOps_MatMul_m8B4D34B9C7D3CBCFDA2518D790D03D95224D6B3D (void);
// 0x00000081 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Dense(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Layer_FusedActivation)
extern void BurstCPUOps_Dense_mE8F72E286BDF5A514378A4D333BF709343E8F75B (void);
// 0x00000082 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Conv2D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer_FusedActivation)
extern void BurstCPUOps_Conv2D_m4EFD9642EDCB2D41F3316DDA897B68AEA5AE8727 (void);
// 0x00000083 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Conv2DUsingIm2ColSliced(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[])
extern void BurstCPUOps_Conv2DUsingIm2ColSliced_mB33760D9F591C4C54E01E59712F46E53B1A1F482 (void);
// 0x00000084 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::MaxPool2D(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void BurstCPUOps_MaxPool2D_m1587A1DD16872AA66026499C4680513B28B6906F (void);
// 0x00000085 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::AvgPool2D(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void BurstCPUOps_AvgPool2D_mB5FB04B79F6152DCC65CE71A75124941F8003221 (void);
// 0x00000086 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::GlobalMaxPool2D(Unity.Barracuda.Tensor)
extern void BurstCPUOps_GlobalMaxPool2D_m32CE5E6AB47D2E63E4DC8CDCC720D1364BCB2509 (void);
// 0x00000087 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::GlobalAvgPool2D(Unity.Barracuda.Tensor)
extern void BurstCPUOps_GlobalAvgPool2D_mB1A71AE1590E92DDFC6D99D75D8BB1ACB3C0FB58 (void);
// 0x00000088 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::DepthwiseConv2D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer_FusedActivation)
extern void BurstCPUOps_DepthwiseConv2D_mCA6FCFA337F640270CE04F25805A3AE6039ED220 (void);
// 0x00000089 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::ScaleBias(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void BurstCPUOps_ScaleBias_m036595A1F503E5B7E42223BD511BB0FAFC7EFE5E (void);
// 0x0000008A Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Relu(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Relu_m62E9C9993C0FC5FA6E8D69062EA44A49B1430A6B (void);
// 0x0000008B Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Relu6(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Relu6_mFA9EF67ADBF816268ABCEBBFBD55C6CF6B9A6683 (void);
// 0x0000008C Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::LeakyRelu(Unity.Barracuda.Tensor,System.Single)
extern void BurstCPUOps_LeakyRelu_mDDE2DAA327770A3FB475F6DC868DB8098358CC2C (void);
// 0x0000008D Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Tanh(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Tanh_m912B687E35F5588EDF8A5FA0AA2B68E9DAB8F046 (void);
// 0x0000008E Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Sigmoid(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Sigmoid_mF519A6A08ED887CD9363181815E3BC74F83E634C (void);
// 0x0000008F Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Elu(Unity.Barracuda.Tensor,System.Single)
extern void BurstCPUOps_Elu_mD9C83FD6A2F91E2341C5D452BBA5F2994135E978 (void);
// 0x00000090 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Selu(Unity.Barracuda.Tensor,System.Single,System.Single)
extern void BurstCPUOps_Selu_m9E961B28F5B8A1438419F169A99B8141A2E52333 (void);
// 0x00000091 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Swish(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Swish_mA6D8E4751F279506F80BC7B11E61EB0B148C182F (void);
// 0x00000092 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::PRelu(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void BurstCPUOps_PRelu_m08086325897887B987F5934341A1DC4EF89B8E01 (void);
// 0x00000093 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Softmax(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Softmax_mE06F9407D1C848DF55AB2F3AC07496CBEBFAA62A (void);
// 0x00000094 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::LogSoftmax(Unity.Barracuda.Tensor)
extern void BurstCPUOps_LogSoftmax_mD84F4045BB70E6ACB7F2E6767BC9F5543393F274 (void);
// 0x00000095 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Abs(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Abs_m5DAB80F7A5740AB857951E95DC872FA5022CE9E0 (void);
// 0x00000096 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Neg(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Neg_m6E4D967CCF99E0E45E73810B630AB6FF79C6F580 (void);
// 0x00000097 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Ceil(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Ceil_m753CD78A887B8765A5844EE40B06093D803FB50F (void);
// 0x00000098 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Clip(Unity.Barracuda.Tensor,System.Single,System.Single)
extern void BurstCPUOps_Clip_m3F5C76D11F8A378F36AA8B58CBC74B08A994B458 (void);
// 0x00000099 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Floor(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Floor_m888D4A89484CB2C4A8BA1599E924400226750EF3 (void);
// 0x0000009A Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Reciprocal(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Reciprocal_m1164C219567DC38D44957F4577860BE695882380 (void);
// 0x0000009B Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Pow(Unity.Barracuda.Tensor,System.Single)
extern void BurstCPUOps_Pow_m4240B490B22E95D3B4BBF20B59666641423986B1 (void);
// 0x0000009C Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Exp(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Exp_mC51D1E5D123157D9876F057EB61C7DB9E8576BB6 (void);
// 0x0000009D Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Log(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Log_mBA5CD85F276F8CD62E0E1DCA6AA00C37B474CEE1 (void);
// 0x0000009E Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Sqrt(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Sqrt_m18883E1349002517B1F7CD484E628B382B5B87EC (void);
// 0x0000009F Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::GenericBroadcast(Unity.Barracuda.Tensor,Unity.Barracuda.TensorShape)
extern void BurstCPUOps_GenericBroadcast_mAC44BD9EE84FECEB9C55ABDE390A5EDF7863DB20 (void);
// 0x000000A0 System.Void Unity.Barracuda.BurstCPUOps::BroadcastAdd(Unity.Barracuda.Tensor&,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Single)
extern void BurstCPUOps_BroadcastAdd_m52B9CB955892AF45FE62DF97AC4E4ED9B2FD523E (void);
// 0x000000A1 System.Void Unity.Barracuda.BurstCPUOps::BroadcastSub(Unity.Barracuda.Tensor&,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void BurstCPUOps_BroadcastSub_m0BD3E67B63500299649E485E00D6B28D3D432F8E (void);
// 0x000000A2 System.Void Unity.Barracuda.BurstCPUOps::BroadcastMul(Unity.Barracuda.Tensor&,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void BurstCPUOps_BroadcastMul_m0B69AA3824DAF0631E7DE3A164C1B599AF1760F1 (void);
// 0x000000A3 System.Void Unity.Barracuda.BurstCPUOps::BroadcastDiv(Unity.Barracuda.Tensor&,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void BurstCPUOps_BroadcastDiv_m021E649553C9E8F8DB8297A4544C206554B666AE (void);
// 0x000000A4 System.Void Unity.Barracuda.BurstCPUOps::BroadcastPow(Unity.Barracuda.Tensor&,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void BurstCPUOps_BroadcastPow_m05D6FC2C537190D451870442026BA1DC82695EC8 (void);
// 0x000000A5 System.Void Unity.Barracuda.BurstCPUOps::BroadcastMin(Unity.Barracuda.Tensor&,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void BurstCPUOps_BroadcastMin_mBD1EF1422507BDA02D6DC18F189061B522E264C6 (void);
// 0x000000A6 System.Void Unity.Barracuda.BurstCPUOps::BroadcastMax(Unity.Barracuda.Tensor&,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void BurstCPUOps_BroadcastMax_mC03666C917A89227185805A6F2356BD4BB882BB7 (void);
// 0x000000A7 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Add(Unity.Barracuda.Tensor[])
extern void BurstCPUOps_Add_m90ADC869FD7E55F40098E12F89FDDACFEF384414 (void);
// 0x000000A8 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Sub(Unity.Barracuda.Tensor[])
extern void BurstCPUOps_Sub_m0F93F87685F416DCA2A374E4783A7BCD641A5F64 (void);
// 0x000000A9 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Mul(Unity.Barracuda.Tensor[])
extern void BurstCPUOps_Mul_mFBD5DB651A4257642AB9CF6DE8591F3FE168013B (void);
// 0x000000AA Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Div(Unity.Barracuda.Tensor[])
extern void BurstCPUOps_Div_mA97D2A7D2A3F1D2DA5AB6055CA1A45AACF2738C2 (void);
// 0x000000AB Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Pow(Unity.Barracuda.Tensor[])
extern void BurstCPUOps_Pow_mCD9E254460A173DE975B139D20F22350C642AC5B (void);
// 0x000000AC Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Min(Unity.Barracuda.Tensor[])
extern void BurstCPUOps_Min_mC00DC7589B0A2B6A7078E19D7F38A9D02C159D4A (void);
// 0x000000AD Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Max(Unity.Barracuda.Tensor[])
extern void BurstCPUOps_Max_m23FEEF12FF8FF02FCA6C22CBC0E35DC08A405A25 (void);
// 0x000000AE Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::CopyAndReshape(Unity.Barracuda.Tensor,Unity.Barracuda.TensorShape)
extern void BurstCPUOps_CopyAndReshape_mD67EA810E768A07972917D4244B230429B15C14D (void);
// 0x000000AF System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary_Entry> Unity.Barracuda.ComputeKernelLibrary::Dense(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,System.Int32)
extern void ComputeKernelLibrary_Dense_m4DA6E9171139C4742B7A59E52FEECDA944350924 (void);
// 0x000000B0 System.Boolean Unity.Barracuda.ComputeKernelLibrary::IsT8x8_R8x8KernelValid(Unity.Barracuda.ComputeKernelLibrary_ChannelMode,Unity.Barracuda.ComputeKernelLibrary_KernelMode,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern void ComputeKernelLibrary_IsT8x8_R8x8KernelValid_mE9E27C0B1E2901E90A9F0E96F14C3FF7240FF46D (void);
// 0x000000B1 System.Boolean Unity.Barracuda.ComputeKernelLibrary::IsT2x32_R8x8KernelValid(Unity.Barracuda.ComputeKernelLibrary_ChannelMode,Unity.Barracuda.ComputeKernelLibrary_KernelMode,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern void ComputeKernelLibrary_IsT2x32_R8x8KernelValid_m39F2259AE113F3757DBE1A0CB2D9792C9ADDC081 (void);
// 0x000000B2 System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary_Entry> Unity.Barracuda.ComputeKernelLibrary::Conv2D(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,System.Int32[],System.Int32[])
extern void ComputeKernelLibrary_Conv2D_m839D6B1B9C501C4B3E8DA77BD9C56C94F0752FC8 (void);
// 0x000000B3 System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary_Entry> Unity.Barracuda.ComputeKernelLibrary::DepthwiseConv2D(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape)
extern void ComputeKernelLibrary_DepthwiseConv2D_mB0C9DC349DBE82D27A57D61CFE37829A50A36F27 (void);
// 0x000000B4 System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary_Entry> Unity.Barracuda.ComputeKernelLibrary::Conv2DTrans(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape)
extern void ComputeKernelLibrary_Conv2DTrans_m54F3196D5B9DEB599790CD132D5C65A12FB49F69 (void);
// 0x000000B5 System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary_Entry> Unity.Barracuda.ComputeKernelLibrary::Activation(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,System.String)
extern void ComputeKernelLibrary_Activation_m073D556A4167E92E3A272EEEAD0CEA00C0BFF496 (void);
// 0x000000B6 System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary_Entry> Unity.Barracuda.ComputeKernelLibrary::PRelu(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape)
extern void ComputeKernelLibrary_PRelu_mA7D8D5B8AFB53BA73D15A8D426AF697A8C724D10 (void);
// 0x000000B7 System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary_Entry> Unity.Barracuda.ComputeKernelLibrary::Softmax(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape)
extern void ComputeKernelLibrary_Softmax_mB431504D0D149E9BF4991B2035F769F76EF81AC0 (void);
// 0x000000B8 System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary_Entry> Unity.Barracuda.ComputeKernelLibrary::LogSoftmax(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape)
extern void ComputeKernelLibrary_LogSoftmax_m348856300B01A392DF3BCAEAAF71E5D9FBF90D4E (void);
// 0x000000B9 System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary_Entry> Unity.Barracuda.ComputeKernelLibrary::ScaleBias(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape)
extern void ComputeKernelLibrary_ScaleBias_mA02002DAAA1B2286AE68031BAAA9292CAA38829C (void);
// 0x000000BA System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary_Entry> Unity.Barracuda.ComputeKernelLibrary::Upsample2D(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,System.Int32[],System.Boolean)
extern void ComputeKernelLibrary_Upsample2D_mDD6EC7D61EA238484F7928BCD906974597412270 (void);
// 0x000000BB System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary_Entry> Unity.Barracuda.ComputeKernelLibrary::Pool2DReduce(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,System.String)
extern void ComputeKernelLibrary_Pool2DReduce_m970500B3A205DF4C559AFA85F85EDC045DCECB6A (void);
// 0x000000BC System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary_Entry> Unity.Barracuda.ComputeKernelLibrary::Pool2D(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,System.String)
extern void ComputeKernelLibrary_Pool2D_m6453C56C0CE5CE5B1F5C0C67EF5D26AD9963E986 (void);
// 0x000000BD System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary_Entry> Unity.Barracuda.ComputeKernelLibrary::PoolAvgVar2D(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,System.String)
extern void ComputeKernelLibrary_PoolAvgVar2D_m9E794C9FE96ACAE04981396B24080E709F784BAC (void);
// 0x000000BE System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary_Entry> Unity.Barracuda.ComputeKernelLibrary::GlobalPool2D(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,System.String)
extern void ComputeKernelLibrary_GlobalPool2D_mD4E9071653ACC2812D2039EE12BF4B84F06B970C (void);
// 0x000000BF System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary_Entry> Unity.Barracuda.ComputeKernelLibrary::NormalizationTail(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape)
extern void ComputeKernelLibrary_NormalizationTail_mF6B0D6559DBFAD920BB77CD4DCA86C7EF1F142A9 (void);
// 0x000000C0 System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary_Entry> Unity.Barracuda.ComputeKernelLibrary::Copy(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape)
extern void ComputeKernelLibrary_Copy_m0B5D9919DBA6AF2D827C2D13359A629A8D22AAD9 (void);
// 0x000000C1 System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary_Entry> Unity.Barracuda.ComputeKernelLibrary::ReshapeFromNHWCModel(Unity.Barracuda.TensorShape)
extern void ComputeKernelLibrary_ReshapeFromNHWCModel_m70AE7AB91B3F1952A2FA203826635DD29F80BF9C (void);
// 0x000000C2 System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary_Entry> Unity.Barracuda.ComputeKernelLibrary::Padding(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,System.String)
extern void ComputeKernelLibrary_Padding_m66CCCBC6D5956548ED7B71357345860C2B7DE4CC (void);
// 0x000000C3 System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary_Entry> Unity.Barracuda.ComputeKernelLibrary::Broadcast(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,System.String)
extern void ComputeKernelLibrary_Broadcast_m3F8A9620E29C71B7A107CDEF00A2C48A9D372810 (void);
// 0x000000C4 System.ValueTuple`3<System.Int32,System.Int32,System.Int32> Unity.Barracuda.ComputeKernelLibrary::Int3(System.Int32,System.Int32,System.Int32)
extern void ComputeKernelLibrary_Int3_mC98B0F475B03A2104FFEA88E57AA859CBA2930E2 (void);
// 0x000000C5 System.Single Unity.Barracuda.ComputeKernelLibrary::BigO(System.Int32)
extern void ComputeKernelLibrary_BigO_mD5DB3E6B5752534FFD20E77C9209B6BAD917A39F (void);
// 0x000000C6 Unity.Barracuda.ComputeKernelLibrary_StrictDimensions Unity.Barracuda.ComputeKernelLibrary::StrictAnd(System.Boolean)
extern void ComputeKernelLibrary_StrictAnd_m5AC9166981C7A821D6849D39EE22A5992B54B36D (void);
// 0x000000C7 Unity.Barracuda.ComputeKernelLibrary_StrictDimensions Unity.Barracuda.ComputeKernelLibrary::Strict()
extern void ComputeKernelLibrary_Strict_m34465B7D48A7942546DA6151C263B4DAD9496460 (void);
// 0x000000C8 System.Void Unity.Barracuda.ComputeKernelLibrary::.ctor()
extern void ComputeKernelLibrary__ctor_m82BD56B7847946663D18E5A4587626EF48677A60 (void);
// 0x000000C9 System.Void Unity.Barracuda.ComputeKernelLibrary::.cctor()
extern void ComputeKernelLibrary__cctor_m490999ACAF5B987938535AC265BC8103575308F8 (void);
// 0x000000CA UnityEngine.ComputeShader Unity.Barracuda.ComputeKernel::get_shader()
extern void ComputeKernel_get_shader_mBEF4FF9F99B82A30AFEC637866AEA2B7B10EB081_AdjustorThunk (void);
// 0x000000CB System.Void Unity.Barracuda.ComputeKernel::.ctor(Unity.Barracuda.ComputeFunc,System.ValueTuple`3<System.Int32,System.Int32,System.Int32>)
extern void ComputeKernel__ctor_m488EBE3AD1644CE47CD4C30A1C6955A51961FD37_AdjustorThunk (void);
// 0x000000CC System.Void Unity.Barracuda.ComputeKernel::SetTensor(System.String,Unity.Barracuda.TensorShape,UnityEngine.ComputeBuffer,System.Int64)
extern void ComputeKernel_SetTensor_mD0ABD7C1289694BA3108D12B1D883064F3B4A412_AdjustorThunk (void);
// 0x000000CD System.Void Unity.Barracuda.ComputeKernel::SetTensor(Unity.Barracuda.ComputeFunc_TensorDecl,System.Int32,Unity.Barracuda.TensorShape,UnityEngine.ComputeBuffer,System.Int64)
extern void ComputeKernel_SetTensor_m4CA6E7DA385C49BD03A19EF82E2604EA91743CE8_AdjustorThunk (void);
// 0x000000CE System.Void Unity.Barracuda.ComputeKernel::SetTensorDecl(System.String,Unity.Barracuda.TensorShape,System.Int64)
extern void ComputeKernel_SetTensorDecl_mFB3C566DC499DFD9ECA575162830E4B9342C1457_AdjustorThunk (void);
// 0x000000CF System.Void Unity.Barracuda.ComputeKernel::SetTensorDecl(Unity.Barracuda.ComputeFunc_TensorDecl,Unity.Barracuda.TensorShape,System.Int64)
extern void ComputeKernel_SetTensorDecl_m573FF4363D88E28A63BAF97B5ABC39922AAEAB43_AdjustorThunk (void);
// 0x000000D0 System.Void Unity.Barracuda.ComputeKernel::SetTensorBuffer(System.String,UnityEngine.ComputeBuffer)
extern void ComputeKernel_SetTensorBuffer_m4F8B6BCF1F234AD1FD856687896423DAF6380C05_AdjustorThunk (void);
// 0x000000D1 System.Void Unity.Barracuda.ComputeKernel::SetTensorBuffer(System.Int32,UnityEngine.ComputeBuffer)
extern void ComputeKernel_SetTensorBuffer_m84491B89B783EA390D309DBE48772A9685990313_AdjustorThunk (void);
// 0x000000D2 System.Void Unity.Barracuda.ComputeKernel::Dispatch()
extern void ComputeKernel_Dispatch_m3F43C7B18C1542AA5CD1E84C07CC2F164C82D9AA_AdjustorThunk (void);
// 0x000000D3 System.Int64 Unity.Barracuda.ComputeKernel::CalculateEntryScore(UnityEngine.ComputeShader[],Unity.Barracuda.ComputeKernelLibrary_Entry,System.Boolean)
extern void ComputeKernel_CalculateEntryScore_m109F09CA0019F1BCC9AF68F5DC1A35A9DA0001A2 (void);
// 0x000000D4 Unity.Barracuda.ComputeKernel Unity.Barracuda.ComputeKernel::BestKernel(UnityEngine.ComputeShader[],System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary_Entry>,System.Boolean)
extern void ComputeKernel_BestKernel_mF520BC626037F635E85CB10AA061C2E5FE77EE8E (void);
// 0x000000D5 System.Void Unity.Barracuda.ComputeOps::.ctor(UnityEngine.ComputeShader[],UnityEngine.ComputeShader,Unity.Barracuda.ITensorAllocator,System.Boolean)
extern void ComputeOps__ctor_mFDF4219D7C7C38EC8ABD283797B133A169DBEC94 (void);
// 0x000000D6 Unity.Barracuda.ComputeKernel Unity.Barracuda.ComputeOps::BestKernel(System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary_Entry>)
extern void ComputeOps_BestKernel_mD2A53FAC143ECC4ACAE6568CFB17EC6C2FC679A8 (void);
// 0x000000D7 Unity.Barracuda.ComputeKernel Unity.Barracuda.ComputeOps::CompileKernel(Unity.Barracuda.ComputeKernelLibrary_Entry)
extern void ComputeOps_CompileKernel_mB0358002054D6FD62E74416959F4834F3F04E404 (void);
// 0x000000D8 Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::Dense(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Layer_FusedActivation)
extern void ComputeOps_Dense_mDF5E3DE89F0395649F9AC572134E87ABEB9BC3AE (void);
// 0x000000D9 Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::Conv2DWinograd(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer_FusedActivation)
extern void ComputeOps_Conv2DWinograd_mCBF066B921B80FCB09AAD70DD5FA0438DC8300F4 (void);
// 0x000000DA Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::Conv2D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer_FusedActivation)
extern void ComputeOps_Conv2D_m20B3FCE032E4EE992F65EE0368B932DA522F9C14 (void);
// 0x000000DB Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::DepthwiseConv2D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer_FusedActivation)
extern void ComputeOps_DepthwiseConv2D_m133486C6CC3BA8B3AD21634C2FBB66CCE11F9F71 (void);
// 0x000000DC Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::Conv2DTrans(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[],Unity.Barracuda.Layer_FusedActivation)
extern void ComputeOps_Conv2DTrans_mD6825E59167060BC85D72B2FF03F210C03CF07CB (void);
// 0x000000DD Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::Upsample2D(Unity.Barracuda.Tensor,System.Int32[],System.Boolean)
extern void ComputeOps_Upsample2D_mE30A4CE66C1291361D4EC799E782D6833426F24C (void);
// 0x000000DE Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::Pool2D(System.String,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void ComputeOps_Pool2D_m7B5D59A9DAE4CB9306CD56F9C3012C701EF91583 (void);
// 0x000000DF Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::GlobalMaxPool2D(Unity.Barracuda.Tensor)
extern void ComputeOps_GlobalMaxPool2D_m6B08BE5CC1AD463E079DD41DA6DFA8A944E095A2 (void);
// 0x000000E0 Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::GlobalAvgPool2D(Unity.Barracuda.Tensor)
extern void ComputeOps_GlobalAvgPool2D_m5BAB25BF25F1F7E7810A86C0F5DFCEB391636AD8 (void);
// 0x000000E1 System.Tuple`2<Unity.Barracuda.Tensor,Unity.Barracuda.Tensor> Unity.Barracuda.ComputeOps::GlobalAvgVariancePool2DReduce(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Boolean)
extern void ComputeOps_GlobalAvgVariancePool2DReduce_m20898741D1AAC4F7AE4B4EC0F3F9F537FA4B004E (void);
// 0x000000E2 Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::GlobalAvgVariancePool2D(Unity.Barracuda.Tensor)
extern void ComputeOps_GlobalAvgVariancePool2D_m96B45F71C500015A5E7882E8C4D141698EA609EB (void);
// 0x000000E3 Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::GlobalPool2DReduce(System.String,Unity.Barracuda.Tensor)
extern void ComputeOps_GlobalPool2DReduce_mCA44D5F32CE7BA33B4025354E154130D2799595E (void);
// 0x000000E4 Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::GlobalPool2D(System.String,System.String,Unity.Barracuda.Tensor)
extern void ComputeOps_GlobalPool2D_m4B8AE165F7A3133A2E6DF068C5249DFE4B54E50F (void);
// 0x000000E5 Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::ScaleBias(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ComputeOps_ScaleBias_m23741F8F758A8224AE78EF1C752D2DD2B2D4CAC2 (void);
// 0x000000E6 Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::Normalization(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32,System.Int32,System.Single,Unity.Barracuda.Layer_FusedActivation)
extern void ComputeOps_Normalization_mD7D76C0A9901786046048F4B734D0D6D2850F7F1 (void);
// 0x000000E7 Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::Activation(System.String,Unity.Barracuda.Tensor,System.Single,System.Single)
extern void ComputeOps_Activation_m700AC604BF4D9F2E17F24F81415EA5179423780A (void);
// 0x000000E8 Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::PRelu(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ComputeOps_PRelu_mCB4D213C4B69A85D2ECEEDCEF1254E21654B39D7 (void);
// 0x000000E9 Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::Softmax(Unity.Barracuda.Tensor)
extern void ComputeOps_Softmax_m5ADA4BC93CCAAFE31E9B29241B5621F0DAFE5FD8 (void);
// 0x000000EA Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::LogSoftmax(Unity.Barracuda.Tensor)
extern void ComputeOps_LogSoftmax_mA86CA3A7BA966B86E27C8D9B0112A475BE846F06 (void);
// 0x000000EB Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::RandomNormal(Unity.Barracuda.TensorShape,System.Single,System.Single,System.Int32)
extern void ComputeOps_RandomNormal_m6623F07D9E791E226D22695EB91E43EBCD069393 (void);
// 0x000000EC Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::RandomUniform(Unity.Barracuda.TensorShape,System.Single,System.Single,System.Int32)
extern void ComputeOps_RandomUniform_mBCA66B900A8A20F4DBCC7D288E4364A096211999 (void);
// 0x000000ED Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::Concat(Unity.Barracuda.Tensor[],System.Int32)
extern void ComputeOps_Concat_mFE05CC560B7D53D7AF66BA056782B9CB038B9F5E (void);
// 0x000000EE System.Int32[] Unity.Barracuda.ComputeOps::GetInputTensorStridesOnDevice(Unity.Barracuda.TensorShape)
extern void ComputeOps_GetInputTensorStridesOnDevice_m74B55EF736C1A77F5F30056327503D2377385F1D (void);
// 0x000000EF Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::ElementwiseWithBroadcast(System.String,Unity.Barracuda.Tensor[])
extern void ComputeOps_ElementwiseWithBroadcast_m27536D9972ADC6BD5303F188E2A418F662A81DC4 (void);
// 0x000000F0 Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::ApplyPadding(Unity.Barracuda.Tensor,System.Int32[],System.String,System.Single)
extern void ComputeOps_ApplyPadding_mC9FB3192EB8EA9217DB2C6825E05DB0FA8195833 (void);
// 0x000000F1 Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::LogicalNot(Unity.Barracuda.Tensor)
extern void ComputeOps_LogicalNot_mC978617EB23566AC434B7D908669AB4CF642BD64 (void);
// 0x000000F2 Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::CopyAndReshape_NCHW(Unity.Barracuda.Tensor,Unity.Barracuda.TensorShape)
extern void ComputeOps_CopyAndReshape_NCHW_mC4345C07550CD8FCE62ABFC2757F07DFCC00AFDE (void);
// 0x000000F3 Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::CopyAndReshape(Unity.Barracuda.Tensor,Unity.Barracuda.TensorShape)
extern void ComputeOps_CopyAndReshape_mEE0B6EC374685C93807C396AF1409EFF33DAFEAB (void);
// 0x000000F4 System.Void Unity.Barracuda.ComputeVarsWithSharedModel::Dispose()
extern void ComputeVarsWithSharedModel_Dispose_m5D2BBE680783BC4A79C1F564813B82656F469A77 (void);
// 0x000000F5 Unity.Barracuda.Tensor[] Unity.Barracuda.ComputeVarsWithSharedModel::PrepareLayerInputTensors(Unity.Barracuda.Model,Unity.Barracuda.Layer,Unity.Barracuda.IOps)
extern void ComputeVarsWithSharedModel_PrepareLayerInputTensors_m04EBB2C7A41D678FC5C1A30A4519DB5BC8673808 (void);
// 0x000000F6 UnityEngine.ComputeBuffer Unity.Barracuda.ComputeVarsWithSharedModel::CreateComputeBufferForModelTensors(Unity.Barracuda.Layer,System.Int64&)
extern void ComputeVarsWithSharedModel_CreateComputeBufferForModelTensors_mC07DC756269F7AA627B3F371F26145D6C9708A4C (void);
// 0x000000F7 System.Void Unity.Barracuda.ComputeVarsWithSharedModel::.ctor()
extern void ComputeVarsWithSharedModel__ctor_m4D02D73AC6B23A8047C1F8314468CC089F88B979 (void);
// 0x000000F8 System.Void Unity.Barracuda.ComputeDebugUtils::LogAssertion(Unity.Barracuda.ComputeDebugUtils_KernelAssertInfo,System.String)
extern void ComputeDebugUtils_LogAssertion_mAB156860C7E64192DBF8F7073210CED2A230EA96 (void);
// 0x000000F9 System.Void Unity.Barracuda.ComputeDebugUtils::PrepareDispatch()
extern void ComputeDebugUtils_PrepareDispatch_m68F6449A3BF0A66AF06AAC06A3707D375D16F75D (void);
// 0x000000FA System.Void Unity.Barracuda.ComputeDebugUtils::VerifyDispatch(System.String)
extern void ComputeDebugUtils_VerifyDispatch_m7BCE6F4EE6A75E3617EBF5B94142DFE8208A4994 (void);
// 0x000000FB System.Void Unity.Barracuda.ComputeDebugUtils::.ctor()
extern void ComputeDebugUtils__ctor_mC051DBB67A71983E2E054011BC04C6E99F16ECBF (void);
// 0x000000FC System.Void Unity.Barracuda.ComputeDebugUtils::.cctor()
extern void ComputeDebugUtils__cctor_mF081A4EEE878FB5A643E767D0AAA10AE0E3690C6 (void);
// 0x000000FD System.Void Unity.Barracuda.PrecompiledComputeOps::.ctor(UnityEngine.ComputeShader[],UnityEngine.ComputeShader,Unity.Barracuda.ITensorAllocator,System.Boolean)
extern void PrecompiledComputeOps__ctor_mC56E59D8CAFA5D9E5892EC858D0FF8380081B5DD (void);
// 0x000000FE UnityEngine.ComputeBuffer Unity.Barracuda.PrecompiledComputeOps::NewComputeBuffer(System.String,System.Int32,System.Int32)
extern void PrecompiledComputeOps_NewComputeBuffer_m214FA1601004477BD4509882616942B9F796DE2C (void);
// 0x000000FF System.Void Unity.Barracuda.PrecompiledComputeOps::ResetAllocator(System.Boolean)
extern void PrecompiledComputeOps_ResetAllocator_mE0F13C92CD4EE05DFCA8BFFA8817F70C3A585158 (void);
// 0x00000100 System.Int32 Unity.Barracuda.PrecompiledComputeOps::CalcModelWithInputsHashCode(Unity.Barracuda.Model,System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.TensorShape>)
extern void PrecompiledComputeOps_CalcModelWithInputsHashCode_mB6301FCE8D0D0B418094C520842C88B75CF4F9C5 (void);
// 0x00000101 Unity.Barracuda.Tensor[] Unity.Barracuda.PrecompiledComputeOps::PrepareConv2dWinograd(Unity.Barracuda.Model,Unity.Barracuda.Layer)
extern void PrecompiledComputeOps_PrepareConv2dWinograd_m3CEE39C9826543494D60B6C1A60AC37412C5BCF6 (void);
// 0x00000102 Unity.Barracuda.Tensor[] Unity.Barracuda.PrecompiledComputeOps::PrepareConv2DTrans(Unity.Barracuda.Model,Unity.Barracuda.Layer)
extern void PrecompiledComputeOps_PrepareConv2DTrans_mF3B43E9D6F34E387E5D8552DA57B1F9A5CD8799F (void);
// 0x00000103 System.Void Unity.Barracuda.PrecompiledComputeOps::PrepareModel(Unity.Barracuda.Model,System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.TensorShape>)
extern void PrecompiledComputeOps_PrepareModel_m7EB4144173570CEEF39BC9CF440BFB92BE45AB14 (void);
// 0x00000104 System.Void Unity.Barracuda.PrecompiledComputeOps::PreExecuteLayer(Unity.Barracuda.Layer,Unity.Barracuda.Tensor[])
extern void PrecompiledComputeOps_PreExecuteLayer_m590B13AA470260A594C6521D61A1FD0EDE901E44 (void);
// 0x00000105 Unity.Barracuda.Tensor Unity.Barracuda.PrecompiledComputeOps::ApplyUnsupportedFusedActivationIfNeeded(Unity.Barracuda.Layer_FusedActivation,Unity.Barracuda.Tensor)
extern void PrecompiledComputeOps_ApplyUnsupportedFusedActivationIfNeeded_m0FBF0B1F2C9AD87BCFF334F0ED27A674E798F98E (void);
// 0x00000106 Unity.Barracuda.Tensor Unity.Barracuda.PrecompiledComputeOps::Dense(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Layer_FusedActivation)
extern void PrecompiledComputeOps_Dense_mF7D72F8C2CDF65671E01741AD179DE321703A928 (void);
// 0x00000107 Unity.Barracuda.Tensor Unity.Barracuda.PrecompiledComputeOps::Conv2D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer_FusedActivation)
extern void PrecompiledComputeOps_Conv2D_mEC3C255D662B0AD1273283DFBF8E0B0D1F66F903 (void);
// 0x00000108 Unity.Barracuda.Tensor Unity.Barracuda.PrecompiledComputeOps::DepthwiseConv2D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer_FusedActivation)
extern void PrecompiledComputeOps_DepthwiseConv2D_mC50E14359340C568418CC57CB6C64A8B0E5F5808 (void);
// 0x00000109 Unity.Barracuda.Tensor Unity.Barracuda.PrecompiledComputeOps::Conv2DTrans(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[],Unity.Barracuda.Layer_FusedActivation)
extern void PrecompiledComputeOps_Conv2DTrans_m53E5047C6F3EE197B04DB8570F53AD1DF22F1DC2 (void);
// 0x0000010A Unity.Barracuda.Tensor Unity.Barracuda.PrecompiledComputeOps::Upsample2D(Unity.Barracuda.Tensor,System.Int32[],System.Boolean)
extern void PrecompiledComputeOps_Upsample2D_m5B40AB7B31608A6D3D687CD00840AFDDE57C4800 (void);
// 0x0000010B Unity.Barracuda.Tensor Unity.Barracuda.PrecompiledComputeOps::Pool2D(System.String,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void PrecompiledComputeOps_Pool2D_m94A1D4A509F12A064EF2F6782ACACA3C6BA01087 (void);
// 0x0000010C Unity.Barracuda.Tensor Unity.Barracuda.PrecompiledComputeOps::ScaleBias(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void PrecompiledComputeOps_ScaleBias_m37805BDE1B34E6BFE46E92D80FB8D4F2B8AAFCA3 (void);
// 0x0000010D Unity.Barracuda.Tensor Unity.Barracuda.PrecompiledComputeOps::GlobalPool2D(Unity.Barracuda.Tensor)
extern void PrecompiledComputeOps_GlobalPool2D_m7351B69E5A236BF2E122531D1F9D84C25C4DB258 (void);
// 0x0000010E Unity.Barracuda.Tensor Unity.Barracuda.PrecompiledComputeOps::GlobalMaxPool2D(Unity.Barracuda.Tensor)
extern void PrecompiledComputeOps_GlobalMaxPool2D_mECDD3EEDC48E1AC5C280F105E096742973B726E0 (void);
// 0x0000010F Unity.Barracuda.Tensor Unity.Barracuda.PrecompiledComputeOps::GlobalAvgPool2D(Unity.Barracuda.Tensor)
extern void PrecompiledComputeOps_GlobalAvgPool2D_mD9B8841FBFC288D4ADF9BE4ACA601575652F8F39 (void);
// 0x00000110 Unity.Barracuda.Tensor Unity.Barracuda.PrecompiledComputeOps::Normalization(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32,System.Int32,System.Single,Unity.Barracuda.Layer_FusedActivation)
extern void PrecompiledComputeOps_Normalization_mE557FA673D7E15522EBAA945DF597237A78F172A (void);
// 0x00000111 Unity.Barracuda.Tensor Unity.Barracuda.PrecompiledComputeOps::Activation(System.String,Unity.Barracuda.Tensor,System.Single,System.Single)
extern void PrecompiledComputeOps_Activation_mE65260DDB8C350B41A2F4F0EE9C15FF1862CE1A7 (void);
// 0x00000112 Unity.Barracuda.Tensor Unity.Barracuda.PrecompiledComputeOps::PRelu(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void PrecompiledComputeOps_PRelu_m0895F1C0D74F8B8E4F2372467CAED4A5BCD81D18 (void);
// 0x00000113 Unity.Barracuda.Tensor Unity.Barracuda.PrecompiledComputeOps::Softmax(Unity.Barracuda.Tensor)
extern void PrecompiledComputeOps_Softmax_m50880BCEBEAB66A49B33DE128FEE58E6D007D496 (void);
// 0x00000114 Unity.Barracuda.Tensor Unity.Barracuda.PrecompiledComputeOps::LogSoftmax(Unity.Barracuda.Tensor)
extern void PrecompiledComputeOps_LogSoftmax_m65661E652A0C86F0FE1815A49435489A9F45667D (void);
// 0x00000115 Unity.Barracuda.Tensor Unity.Barracuda.PrecompiledComputeOps::ElementwiseWithBroadcast(System.String,Unity.Barracuda.Tensor[])
extern void PrecompiledComputeOps_ElementwiseWithBroadcast_mDAF8AD98E2F4D4D021A778B28E51975737293FF7 (void);
// 0x00000116 Unity.Barracuda.Tensor Unity.Barracuda.PrecompiledComputeOps::Concat(Unity.Barracuda.Tensor[],System.Int32)
extern void PrecompiledComputeOps_Concat_m71CF0A44690B14033C15054BB9F42CBD772CE962 (void);
// 0x00000117 System.Void Unity.Barracuda.PrecompiledComputeOps::.cctor()
extern void PrecompiledComputeOps__cctor_mBA37D788C6AE25EE4938064755081914BE2772B2 (void);
// 0x00000118 System.Single[] Unity.Barracuda.ArrayTensorData::get_array()
extern void ArrayTensorData_get_array_mC7E33CD7CC4CE51FD7F838BBB6464C286036A1B0 (void);
// 0x00000119 System.Void Unity.Barracuda.ArrayTensorData::.ctor(System.Int32)
extern void ArrayTensorData__ctor_m26F2CE1B62D06600F42B070382421C209C5B6B97 (void);
// 0x0000011A System.Void Unity.Barracuda.ArrayTensorData::.ctor(Unity.Barracuda.TensorShape)
extern void ArrayTensorData__ctor_mD459DDD0092186A16CFE054CDEFEA8B28A8D251D (void);
// 0x0000011B System.Void Unity.Barracuda.ArrayTensorData::Finalize()
extern void ArrayTensorData_Finalize_m0D0783DCAF4148EE9FD2709619F28E6618CB69D4 (void);
// 0x0000011C System.Void Unity.Barracuda.ArrayTensorData::Dispose()
extern void ArrayTensorData_Dispose_m49854F30AE127674663F22B2872FFFEF383FC94D (void);
// 0x0000011D System.Void Unity.Barracuda.ArrayTensorData::Reserve(System.Int32)
extern void ArrayTensorData_Reserve_mC3E6E4560EE1836FE0ABC552CB4CB34B62549B6E (void);
// 0x0000011E System.Void Unity.Barracuda.ArrayTensorData::Upload(System.Single[],Unity.Barracuda.TensorShape,System.Int32)
extern void ArrayTensorData_Upload_m1D3D3C087972ADCF969F0D8F3503499BE7ECE086 (void);
// 0x0000011F System.Boolean Unity.Barracuda.ArrayTensorData::ScheduleAsyncDownload(System.Int32)
extern void ArrayTensorData_ScheduleAsyncDownload_m30955CCA5931829F9243935E920AF3E9317DBB1D (void);
// 0x00000120 System.Single[] Unity.Barracuda.ArrayTensorData::Download(Unity.Barracuda.TensorShape)
extern void ArrayTensorData_Download_m32AAB66E30558E64652508266691F548C6A14527 (void);
// 0x00000121 System.Single[] Unity.Barracuda.ArrayTensorData::SharedAccess(System.Int32&)
extern void ArrayTensorData_SharedAccess_m6ECE0678F3465CF8525C3A171E19ACA894F3AE90 (void);
// 0x00000122 System.Int32 Unity.Barracuda.ArrayTensorData::get_maxCapacity()
extern void ArrayTensorData_get_maxCapacity_mD6056D4ADB081560E6AC26CC0F6B8050ADB07402 (void);
// 0x00000123 System.String Unity.Barracuda.ArrayTensorData::ToString()
extern void ArrayTensorData_ToString_mA843D84D08221E72F46B6E0B2B6458122A3DD246 (void);
// 0x00000124 System.Single[] Unity.Barracuda.SharedArrayTensorData::get_array()
extern void SharedArrayTensorData_get_array_m9826E77F2C473A308A7CA3FC9AA621E56F6F81A1 (void);
// 0x00000125 System.Int32 Unity.Barracuda.SharedArrayTensorData::get_offset()
extern void SharedArrayTensorData_get_offset_mD4D019A7F920995D9BFBDFC1557FA007803E3075 (void);
// 0x00000126 System.Int32 Unity.Barracuda.SharedArrayTensorData::get_count()
extern void SharedArrayTensorData_get_count_mD77136925B2914EEEEAB341C4F9D81E0D189F93F (void);
// 0x00000127 System.Void Unity.Barracuda.SharedArrayTensorData::.ctor(System.Single[],System.Int32,System.Int32)
extern void SharedArrayTensorData__ctor_m9B024F2C116B626D25DD34CF25AF54F6D6F6AF1E (void);
// 0x00000128 System.Void Unity.Barracuda.SharedArrayTensorData::Finalize()
extern void SharedArrayTensorData_Finalize_m11A394F2B3FE7512F6A40D71393CB38E43B5569D (void);
// 0x00000129 System.Void Unity.Barracuda.SharedArrayTensorData::Dispose()
extern void SharedArrayTensorData_Dispose_m8D81F40D46C75C8003B5A5E1102B64E2E290ACC7 (void);
// 0x0000012A System.Void Unity.Barracuda.SharedArrayTensorData::Reserve(System.Int32)
extern void SharedArrayTensorData_Reserve_mB3832EB7A2BCAC1F2A5EE0F39D3321E554D23614 (void);
// 0x0000012B System.Void Unity.Barracuda.SharedArrayTensorData::Upload(System.Single[],Unity.Barracuda.TensorShape,System.Int32)
extern void SharedArrayTensorData_Upload_m52C62773E80E1A067C8906725D58AA760511F143 (void);
// 0x0000012C System.Boolean Unity.Barracuda.SharedArrayTensorData::ScheduleAsyncDownload(System.Int32)
extern void SharedArrayTensorData_ScheduleAsyncDownload_mB358F900C215C24A2B17C1A82CA3EF84446F0334 (void);
// 0x0000012D System.Single[] Unity.Barracuda.SharedArrayTensorData::Download(Unity.Barracuda.TensorShape)
extern void SharedArrayTensorData_Download_m9474C0D9D5BAE2B17C0693A47D6FAED0B4523C12 (void);
// 0x0000012E System.Single[] Unity.Barracuda.SharedArrayTensorData::SharedAccess(System.Int32&)
extern void SharedArrayTensorData_SharedAccess_m41E54B48B5D1770AB1DA6ABA52705C176BF9CD0A (void);
// 0x0000012F System.Int32 Unity.Barracuda.SharedArrayTensorData::get_maxCapacity()
extern void SharedArrayTensorData_get_maxCapacity_mAB01642C4B4EDCEB4FD3DC041937A03BD5D1CEA8 (void);
// 0x00000130 System.String Unity.Barracuda.SharedArrayTensorData::ToString()
extern void SharedArrayTensorData_ToString_mE3FF29791038CC39CF303881C754536F8890532F (void);
// 0x00000131 System.Void Unity.Barracuda.ReferenceCPUOps::.ctor(Unity.Barracuda.ITensorAllocator)
extern void ReferenceCPUOps__ctor_mDED5F7AA231CEAF511858350E4A8688812D50BDD (void);
// 0x00000132 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::NewTensor(Unity.Barracuda.TensorShape,System.String)
extern void ReferenceCPUOps_NewTensor_mD7656D2E79CF717CEBA48C842C3738733A619935 (void);
// 0x00000133 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::NewTensorLike(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_NewTensorLike_m7FA52D13E8190E349EC54D8D5CB99F537AA50D7C (void);
// 0x00000134 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::NewTensorLike(Unity.Barracuda.Tensor[])
extern void ReferenceCPUOps_NewTensorLike_mB99AB487F6F052CF391B67D9A2E3132FA7E9FFFE (void);
// 0x00000135 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::NewTensor(System.Int32,System.Int32,System.String)
extern void ReferenceCPUOps_NewTensor_mA865C46B6080FBFB58B467F6523FE713169D65CC (void);
// 0x00000136 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::NewTensor(System.Int32,System.Int32,System.Int32,System.Int32,System.String)
extern void ReferenceCPUOps_NewTensor_m21C3A1D1B6C4DDF0FD60792C7C0427DB884D8616 (void);
// 0x00000137 System.Void Unity.Barracuda.ReferenceCPUOps::ResetAllocator(System.Boolean)
extern void ReferenceCPUOps_ResetAllocator_m9B186837A4DA22DE9ACB57EDAD0FDF11D80983AF (void);
// 0x00000138 System.Single Unity.Barracuda.ReferenceCPUOps::ApplyFusedActivation(System.Single,Unity.Barracuda.Layer_FusedActivation)
extern void ReferenceCPUOps_ApplyFusedActivation_m4F34FC909E70FADCB4703275AC5382501518CA4A (void);
// 0x00000139 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::MatMul(Unity.Barracuda.Tensor,System.Boolean,Unity.Barracuda.Tensor,System.Boolean)
extern void ReferenceCPUOps_MatMul_m4AB165D081A32AAE813F8D6BBB8929401736A525 (void);
// 0x0000013A Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Dense(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Layer_FusedActivation)
extern void ReferenceCPUOps_Dense_mA2ECE29DB304E345130856388AA299CA576F356B (void);
// 0x0000013B Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Conv2D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer_FusedActivation)
extern void ReferenceCPUOps_Conv2D_m393B24C23F49584058D8F43BC2BD642EDEB77495 (void);
// 0x0000013C Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::DepthwiseConv2D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer_FusedActivation)
extern void ReferenceCPUOps_DepthwiseConv2D_mF0E5FD6E9D5A315E7A9164B0A0480BDABFFF63BF (void);
// 0x0000013D Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Conv2DTrans(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[],Unity.Barracuda.Layer_FusedActivation)
extern void ReferenceCPUOps_Conv2DTrans_mD62AA31FFCB5BBC0C19A6BCCAE21CBBD30AB2EA1 (void);
// 0x0000013E Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Upsample2D(Unity.Barracuda.Tensor,System.Int32[],System.Boolean)
extern void ReferenceCPUOps_Upsample2D_m2230889FA4FFCA91D663AF929502CF4BD2280EAD (void);
// 0x0000013F Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Resample2D(Unity.Barracuda.Tensor,System.Int32[],System.Boolean)
extern void ReferenceCPUOps_Resample2D_m9D6E2F299A0000F47C6CB5B3EFF868ECF0511A13 (void);
// 0x00000140 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::DepthToSpace(Unity.Barracuda.Tensor,System.Int32[],Unity.Barracuda.Layer_DepthToSpaceMode)
extern void ReferenceCPUOps_DepthToSpace_mFC3BF551F86E3CDC96BDECFF6DB0ADE057BB9A58 (void);
// 0x00000141 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::SpaceToDepth(Unity.Barracuda.Tensor,System.Int32[])
extern void ReferenceCPUOps_SpaceToDepth_m6E66E9E355356F2A898711E68FF945BE7968873C (void);
// 0x00000142 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::MaxPool2D(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void ReferenceCPUOps_MaxPool2D_m8A36F329E683A53280ACE568E5AFB287A59661C6 (void);
// 0x00000143 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::AvgPool2D(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void ReferenceCPUOps_AvgPool2D_m340D78472E72ED444A7AB3B7807626235D1D9CB3 (void);
// 0x00000144 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::GlobalMaxPool2D(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_GlobalMaxPool2D_mD10B29256AF017087ADF945C8C79CDC308C824E3 (void);
// 0x00000145 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::GlobalAvgPool2D(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_GlobalAvgPool2D_mC3D5C0F2F33FD425B44D0C1200C02136C915F2E5 (void);
// 0x00000146 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::GlobalAvgVariancePool2D(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_GlobalAvgVariancePool2D_m0D8C08D284485E37F183B857F749F0AD4FB3EBA6 (void);
// 0x00000147 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::ApplyPadding(Unity.Barracuda.Tensor,System.Int32[],System.Func`6<Unity.Barracuda.Tensor,System.Int32,System.Int32,System.Int32,System.Int32,System.Single>)
extern void ReferenceCPUOps_ApplyPadding_mC9D6503E70EFFEF088FDBC84604ED9453C49C752 (void);
// 0x00000148 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Border2D(Unity.Barracuda.Tensor,System.Int32[],System.Single)
extern void ReferenceCPUOps_Border2D_m86A45856DF40D893B59D150C289CE602ADDA6C92 (void);
// 0x00000149 System.Void Unity.Barracuda.ReferenceCPUOps::ClampHWToTensorShape(Unity.Barracuda.TensorShape,System.Int32&,System.Int32&)
extern void ReferenceCPUOps_ClampHWToTensorShape_m9AE438AE47A0DC999595875497D94749AE7AD3E5 (void);
// 0x0000014A Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Pad2DReflect(Unity.Barracuda.Tensor,System.Int32[])
extern void ReferenceCPUOps_Pad2DReflect_mD1E525BFD75D96060003912E1C9726655B4DE920 (void);
// 0x0000014B Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Pad2DSymmetric(Unity.Barracuda.Tensor,System.Int32[])
extern void ReferenceCPUOps_Pad2DSymmetric_m9BD79B8831AB12935DA3152086B2AC697F87500C (void);
// 0x0000014C Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Pad2DEdge(Unity.Barracuda.Tensor,System.Int32[])
extern void ReferenceCPUOps_Pad2DEdge_m2561E95442FF5D83590E5205DFDD3B5AC627A4E9 (void);
// 0x0000014D Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::ScaleBias(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_ScaleBias_mDF8516E29B802A5577444C00A6148F52FE839714 (void);
// 0x0000014E Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::LRN(Unity.Barracuda.Tensor,System.Single,System.Single,System.Single,System.Int32)
extern void ReferenceCPUOps_LRN_mBEF5EDD8B97B2C73C0342598D513A3FED84150F2 (void);
// 0x0000014F Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Normalization(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32,System.Int32,System.Single,Unity.Barracuda.Layer_FusedActivation)
extern void ReferenceCPUOps_Normalization_m761C1C9C26FC5ADADCD85E11151CF919AD238571 (void);
// 0x00000150 System.Single Unity.Barracuda.ReferenceCPUOps::Bernoulli(System.Single)
extern void ReferenceCPUOps_Bernoulli_m5C3C551DD398042502EB2A43B8D7E55AE0842824 (void);
// 0x00000151 System.Single Unity.Barracuda.ReferenceCPUOps::Gaussian(System.Single,System.Single)
extern void ReferenceCPUOps_Gaussian_m0328A96B5F013FB9003F3CBC8171F041E4566AB7 (void);
// 0x00000152 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Dropout(Unity.Barracuda.Tensor,System.Single)
extern void ReferenceCPUOps_Dropout_m42BB9322F5893516F3E61FEA4F0D5F6BB9C582D7 (void);
// 0x00000153 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::RandomNormal(Unity.Barracuda.TensorShape,System.Single,System.Single,System.Int32)
extern void ReferenceCPUOps_RandomNormal_m5EF7FC4FE3B81B7E410BC0DBD496BEE8A8CD7344 (void);
// 0x00000154 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::RandomUniform(Unity.Barracuda.TensorShape,System.Single,System.Single,System.Int32)
extern void ReferenceCPUOps_RandomUniform_mCC344873698E1860155AF1D1FA5701F1526E1C84 (void);
// 0x00000155 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Multinomial(Unity.Barracuda.Tensor,System.Int32,System.Int32)
extern void ReferenceCPUOps_Multinomial_m0AE2DE3734A4256FB68E2A0FCEEBCA2DB3E603C9 (void);
// 0x00000156 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::OneHot(Unity.Barracuda.Tensor,System.Int32,System.Single,System.Single)
extern void ReferenceCPUOps_OneHot_m365382600BAD0429B0A73A34546BED5396D90BD1 (void);
// 0x00000157 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Relu(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Relu_m1B249F0E16CA78A050882B396BF53C9B523A3CCC (void);
// 0x00000158 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::PRelu(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_PRelu_m5EE37BD2730D4FC8C24E2CCD19D3CFFC1C953AAB (void);
// 0x00000159 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Softmax(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Softmax_m981C78FEC4F1ECBFC491B24EDE35A1780C2ABCA5 (void);
// 0x0000015A Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::LogSoftmax(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_LogSoftmax_m0F926709A84D05E1F5DA0E0258A4010F1E37C3C7 (void);
// 0x0000015B Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Tanh(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Tanh_m0E3D3BC632D057CA4BF2AB54B8606384BC31F3D4 (void);
// 0x0000015C Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Sigmoid(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Sigmoid_mEA6B56371E2185000BBC7FB02B0CF820283F92A8 (void);
// 0x0000015D Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Relu6(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Relu6_mA663A8AEF2539825523B363A4B5ED7F2FDFB7233 (void);
// 0x0000015E Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Elu(Unity.Barracuda.Tensor,System.Single)
extern void ReferenceCPUOps_Elu_mA6B4F067C23BDD13E23CDDE24A4C740778DBFCDF (void);
// 0x0000015F Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::LeakyRelu(Unity.Barracuda.Tensor,System.Single)
extern void ReferenceCPUOps_LeakyRelu_m3A40B751B75C2AB4F8B257B2A97D2F2D6D104D8B (void);
// 0x00000160 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Selu(Unity.Barracuda.Tensor,System.Single,System.Single)
extern void ReferenceCPUOps_Selu_mDDCC2EF76CB44C47EC27CB211A456EA25BE2F8A5 (void);
// 0x00000161 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Swish(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Swish_m6F97D768E9EB15E6FDBF3B81635A64D690CB8B6B (void);
// 0x00000162 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Abs(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Abs_m26ECCFCC646208556673FC86E829767E10D01E87 (void);
// 0x00000163 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Neg(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Neg_m4AAB714EAFFF073B2E1CAA9E29192713580FFEF0 (void);
// 0x00000164 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Ceil(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Ceil_m86AC10E45AE9A2B6FF318BA05AAD084BEBB15A3A (void);
// 0x00000165 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Clip(Unity.Barracuda.Tensor,System.Single,System.Single)
extern void ReferenceCPUOps_Clip_mB81D8540391725290204748B21EAE9D3614B43B1 (void);
// 0x00000166 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Floor(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Floor_mA38DF60B414F32FE7A97E6D6AEAF3E1537ED43F1 (void);
// 0x00000167 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Reciprocal(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Reciprocal_m89BA74EA040F706D755A0555FC0BAA6D6E6B1F21 (void);
// 0x00000168 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Pow(Unity.Barracuda.Tensor,System.Single)
extern void ReferenceCPUOps_Pow_mF72DFDBA0E7528F12FA3BA998D39C80BB489899C (void);
// 0x00000169 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Exp(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Exp_m2F7D01C7CACB0A1156932D2B8265F7C7A36904D6 (void);
// 0x0000016A Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Log(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Log_m6F9799E0B6A88E7E31D59F37A2C58078BDFE3B3E (void);
// 0x0000016B Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Sqrt(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Sqrt_m9B63751ADEF858D647AA8A18C57F4CFD6B47F8A1 (void);
// 0x0000016C Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Concat(Unity.Barracuda.Tensor[],System.Int32)
extern void ReferenceCPUOps_Concat_mCBAF52A099939FD62181B253AFC26E124237F30F (void);
// 0x0000016D Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::StridedSlice(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void ReferenceCPUOps_StridedSlice_mC9B924A5BA6CA09BE321E2CDBF6FC3745E7B331D (void);
// 0x0000016E Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Tile(Unity.Barracuda.Tensor,System.Int32[])
extern void ReferenceCPUOps_Tile_m29A8BE6C998528C9F6FD96CAFA0BD7BE6319A4B2 (void);
// 0x0000016F Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::ApplyElementwiseWithBroadcast(Unity.Barracuda.Tensor[],System.Func`3<System.Single,System.Single,System.Single>)
extern void ReferenceCPUOps_ApplyElementwiseWithBroadcast_mA4F3D95F3C7A950607B6B197817BFA6D80F85818 (void);
// 0x00000170 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Add(Unity.Barracuda.Tensor[])
extern void ReferenceCPUOps_Add_m1E9052AF4F8530A35678AA0DB1EF8ACFF747F8F2 (void);
// 0x00000171 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Sub(Unity.Barracuda.Tensor[])
extern void ReferenceCPUOps_Sub_mF07425D895BF8E9967A9F3DDC9E351F87A0FD34E (void);
// 0x00000172 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Mul(Unity.Barracuda.Tensor[])
extern void ReferenceCPUOps_Mul_mFE522B0ABBE8CF3BC8EE0035FA91644F0A341E6A (void);
// 0x00000173 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Div(Unity.Barracuda.Tensor[])
extern void ReferenceCPUOps_Div_m9EDFAF2D1053BCE0A62207FC38B171D6AB550BBE (void);
// 0x00000174 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Pow(Unity.Barracuda.Tensor[])
extern void ReferenceCPUOps_Pow_m7208A85DA4A279E9606560D2A568702FE22B79F2 (void);
// 0x00000175 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Min(Unity.Barracuda.Tensor[])
extern void ReferenceCPUOps_Min_mA066A6F62C02E48F8BEFBEA272FE5BA2064CF481 (void);
// 0x00000176 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Max(Unity.Barracuda.Tensor[])
extern void ReferenceCPUOps_Max_mCD5E708035AA2F379ACF937BA47FF695E75C153F (void);
// 0x00000177 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Mean(Unity.Barracuda.Tensor[])
extern void ReferenceCPUOps_Mean_mB7D92ED943E097F7A798624191F5CF5664BAA779 (void);
// 0x00000178 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::ReduceMin(Unity.Barracuda.Tensor,System.Int32)
extern void ReferenceCPUOps_ReduceMin_m8950021E5667DE656A5C09615771F60F691B6782 (void);
// 0x00000179 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::ReduceMax(Unity.Barracuda.Tensor,System.Int32)
extern void ReferenceCPUOps_ReduceMax_m1087391D9CDBA05E6CE0548F90425B49417ADF23 (void);
// 0x0000017A Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::ReduceSum(Unity.Barracuda.Tensor,System.Int32)
extern void ReferenceCPUOps_ReduceSum_m851432E3528092E8D3A4A022A84E4DAD8238696E (void);
// 0x0000017B Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::ReduceMean(Unity.Barracuda.Tensor,System.Int32)
extern void ReferenceCPUOps_ReduceMean_m8C0323AF535C6A1454A642B92C99243D01A66008 (void);
// 0x0000017C Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::ReduceProd(Unity.Barracuda.Tensor,System.Int32)
extern void ReferenceCPUOps_ReduceProd_m8A71867C686235ABA941B0DE896B4BA411360343 (void);
// 0x0000017D Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::ApplyLogicalOperator(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Func`3<System.Single,System.Single,System.Single>)
extern void ReferenceCPUOps_ApplyLogicalOperator_mDDC265A4F88C062D020E48B05674A691DCAFD213 (void);
// 0x0000017E Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Greater(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Greater_mE97F7534B06479DBAE406DF01DD45CACCA44381A (void);
// 0x0000017F Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::GreaterEqual(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_GreaterEqual_mEE536A8AB0E1A6772603E270AF142A2A17BA202E (void);
// 0x00000180 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Less(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Less_mEC805D3B8F0C07C0681AEF2BB161E15DB9F63227 (void);
// 0x00000181 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::LessEqual(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_LessEqual_mE918BEA7037B0C46D4202536B126BC648557EABF (void);
// 0x00000182 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Equal(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Equal_mDA18D422CCF2695A0B4B331C138328BD0D335EEF (void);
// 0x00000183 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::LogicalOr(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_LogicalOr_m511FB1666245CDA6A121F7AD41E373F53B30110B (void);
// 0x00000184 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::LogicalAnd(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_LogicalAnd_m1E9FD697994DDC65B5EF77BDFC26CAD1E36060F1 (void);
// 0x00000185 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::LogicalXor(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_LogicalXor_m3EDE157703B28AC1D406ED4412B2730222C93D07 (void);
// 0x00000186 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::LogicalNot(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_LogicalNot_m60E496E11A94692BF930B2227C06F9F9D1DA4353 (void);
// 0x00000187 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::CopyAndReshape(Unity.Barracuda.Tensor,Unity.Barracuda.TensorShape)
extern void ReferenceCPUOps_CopyAndReshape_mEF731E00A059440327E9D656934D5409D2716C0F (void);
// 0x00000188 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Copy(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Copy_mC9AD142CAA7E9A55E397A7C82A19DFA99AF76123 (void);
// 0x00000189 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Flatten(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Flatten_m50C89D44429F337E7ABF4F407A1C1A147B37367B (void);
// 0x0000018A Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Reshape(Unity.Barracuda.Tensor,Unity.Barracuda.TensorShape)
extern void ReferenceCPUOps_Reshape_mD4922D975D916F5610DBDBC0BE30D4A60ED13FF9 (void);
// 0x0000018B Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Expand(Unity.Barracuda.Tensor,Unity.Barracuda.TensorShape)
extern void ReferenceCPUOps_Expand_m86B3A0B5BCC34FE3CAF076F2604663B7B82150D4 (void);
// 0x0000018C Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Gather(Unity.Barracuda.Tensor[],System.Int32)
extern void ReferenceCPUOps_Gather_m0C9D5CC094348BB7D83CC8625CF11ED4BE789506 (void);
// 0x0000018D Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Transpose(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Transpose_m114B17F683513133FD4F919D55748989805D5C74 (void);
// 0x0000018E Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Prepare(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Prepare_m52CBC2A1FA8D6CE4DF9C9593C5E6ED0E67E54FA0 (void);
// 0x0000018F System.Single Unity.Barracuda.MathfEx::Tanh(System.Single)
extern void MathfEx_Tanh_m9E58298C2886197F40D9F686296F622D1F5E9BE5 (void);
// 0x00000190 System.Void Unity.Barracuda.MathfEx::.ctor()
extern void MathfEx__ctor_mA675FDE26870ED17CD449AABF09A7D104843F343 (void);
// 0x00000191 System.Int32 Unity.Barracuda.ComputeHelper::IDivC(System.Int32,System.Int32)
extern void ComputeHelper_IDivC_m24D4EA77786854563D5D641A90F2FD43EBB18B46 (void);
// 0x00000192 UnityEngine.ComputeBuffer Unity.Barracuda.ComputeTensorData::get_buffer()
extern void ComputeTensorData_get_buffer_m1BF545D5C9FD799BCCB813B9BD1A282D3F72DDE9 (void);
// 0x00000193 System.Int32 Unity.Barracuda.ComputeTensorData::get_offset()
extern void ComputeTensorData_get_offset_mCF4305393F8F6BD92BAA1449DF1039E22ECACFB4 (void);
// 0x00000194 System.Void Unity.Barracuda.ComputeTensorData::.ctor(Unity.Barracuda.TensorShape,System.String,Unity.Barracuda.ComputeInfo_ChannelsOrder,System.Boolean)
extern void ComputeTensorData__ctor_m14021963F04BE0F36647A54EF3A13A2CD8BEE87C (void);
// 0x00000195 System.Void Unity.Barracuda.ComputeTensorData::.ctor(UnityEngine.ComputeBuffer,Unity.Barracuda.TensorShape,System.Int32,System.String,Unity.Barracuda.ComputeInfo_ChannelsOrder)
extern void ComputeTensorData__ctor_m1AC7410D234B937F92D3F1F3502099116A79ADF6 (void);
// 0x00000196 System.Void Unity.Barracuda.ComputeTensorData::Finalize()
extern void ComputeTensorData_Finalize_m71DBF07D7B110DDC2081994D7EC02B40D815C89E (void);
// 0x00000197 System.Void Unity.Barracuda.ComputeTensorData::Dispose()
extern void ComputeTensorData_Dispose_m7F1C60F07A4D015138A732001546847FE0AB8A42 (void);
// 0x00000198 System.Void Unity.Barracuda.ComputeTensorData::Reserve(System.Int32)
extern void ComputeTensorData_Reserve_mB479BAC9EDA29C8039FD2BB2565A52ADBE0DF735 (void);
// 0x00000199 System.Void Unity.Barracuda.ComputeTensorData::Upload(System.Single[],Unity.Barracuda.TensorShape,System.Int32)
extern void ComputeTensorData_Upload_m059D4694E758A296BFACBD669D3240A097B67153 (void);
// 0x0000019A System.Boolean Unity.Barracuda.ComputeTensorData::ScheduleAsyncDownload(System.Int32)
extern void ComputeTensorData_ScheduleAsyncDownload_mB16566B5D3FD4CEA58F21F557AD5DA467BF888A3 (void);
// 0x0000019B System.Boolean Unity.Barracuda.ComputeTensorData::WaitFor3Frames(System.Int32)
extern void ComputeTensorData_WaitFor3Frames_mBC6DF51AA8DCC9E42338596BAD13FFB65DED40A3 (void);
// 0x0000019C System.Boolean Unity.Barracuda.ComputeTensorData::WaitForAsyncReadback(System.Int32)
extern void ComputeTensorData_WaitForAsyncReadback_m8B7E37BF468DED8A6FAEA48C0E2CDE64062E331E (void);
// 0x0000019D System.Single[] Unity.Barracuda.ComputeTensorData::ConvertFromOnDeviceFormat(Unity.Barracuda.TensorShape,System.Single[])
extern void ComputeTensorData_ConvertFromOnDeviceFormat_m3E5E18530180DC76906B9F56599F751D49D83165 (void);
// 0x0000019E System.Single[] Unity.Barracuda.ComputeTensorData::Download(Unity.Barracuda.TensorShape)
extern void ComputeTensorData_Download_m0A1BFC024A0047F9FDA41AB59004FFC2A3FB49A5 (void);
// 0x0000019F System.Single[] Unity.Barracuda.ComputeTensorData::SharedAccess(System.Int32&)
extern void ComputeTensorData_SharedAccess_m0D0C5BAB1F4C0D1905664B5176DCDA8FBA76AB75 (void);
// 0x000001A0 System.Int32 Unity.Barracuda.ComputeTensorData::get_maxCapacity()
extern void ComputeTensorData_get_maxCapacity_m03860856AA3932F7C1414D51B519EA82E126C381 (void);
// 0x000001A1 System.String Unity.Barracuda.ComputeTensorData::ToString()
extern void ComputeTensorData_ToString_m1501408FBE9F5664C26D2F2DF6E3B5BB78076747 (void);
// 0x000001A2 System.Void Unity.Barracuda.SharedComputeTensorData::.ctor(UnityEngine.ComputeBuffer,Unity.Barracuda.TensorShape,System.Int32,System.String,Unity.Barracuda.ComputeInfo_ChannelsOrder)
extern void SharedComputeTensorData__ctor_mB7E6FBE8E6E0BB35DA88085B63447A1244F8BD3E (void);
// 0x000001A3 System.Boolean Unity.Barracuda.TextureFormatUtils::IsRedOnly(UnityEngine.TextureFormat)
extern void TextureFormatUtils_IsRedOnly_m9E7AC73B0967582CDE8C10AA9BDCB2C15F51BBDD (void);
// 0x000001A4 System.Boolean Unity.Barracuda.TextureFormatUtils::IsRedOnly(UnityEngine.RenderTextureFormat)
extern void TextureFormatUtils_IsRedOnly_mE3BB3206E195DF2C91218DA1F90EA32C4E5AD086 (void);
// 0x000001A5 System.Boolean Unity.Barracuda.TextureFormatUtils::IsRedGreen(UnityEngine.TextureFormat)
extern void TextureFormatUtils_IsRedGreen_m46C100B79031360C7771A008BA9CC67DD1FF1A13 (void);
// 0x000001A6 System.Boolean Unity.Barracuda.TextureFormatUtils::IsRedGreen(UnityEngine.RenderTextureFormat)
extern void TextureFormatUtils_IsRedGreen_m56C218A4E59323D86DCE583EE1B816241B440558 (void);
// 0x000001A7 System.Boolean Unity.Barracuda.TextureFormatUtils::IsRedGreenBlue(UnityEngine.TextureFormat)
extern void TextureFormatUtils_IsRedGreenBlue_m3BC13571F661F160D3A98EEC55E59ABAB1259FAA (void);
// 0x000001A8 System.Boolean Unity.Barracuda.TextureFormatUtils::IsRedGreenBlue(UnityEngine.RenderTextureFormat)
extern void TextureFormatUtils_IsRedGreenBlue_mC0492D242C2F648F4A163799EFA6FD32348B7464 (void);
// 0x000001A9 System.Boolean Unity.Barracuda.TextureFormatUtils::IsAlphaOnly(UnityEngine.Texture)
extern void TextureFormatUtils_IsAlphaOnly_mDD3F0A9A5DD089CD0165CDB8AD6482CFF2DCE070 (void);
// 0x000001AA System.Boolean Unity.Barracuda.TextureFormatUtils::IsRedOnly(UnityEngine.Texture)
extern void TextureFormatUtils_IsRedOnly_mAD5EC1DE395E82993F11C4D4C95379A5BC7E5C50 (void);
// 0x000001AB System.Boolean Unity.Barracuda.TextureFormatUtils::IsRedGreen(UnityEngine.Texture)
extern void TextureFormatUtils_IsRedGreen_m596DA0E460B1AD0359336783F8094F04E34455C5 (void);
// 0x000001AC System.Boolean Unity.Barracuda.TextureFormatUtils::IsRedGreenBlue(UnityEngine.Texture)
extern void TextureFormatUtils_IsRedGreenBlue_m4FC0F64F1C6FAEC958D0DBD28B58C2CE215E2024 (void);
// 0x000001AD System.Int32 Unity.Barracuda.TextureFormatUtils::FormatToChannelCount(UnityEngine.Texture)
extern void TextureFormatUtils_FormatToChannelCount_mD8FAB4D79401A44E21F01597C3C27BB232248733 (void);
// 0x000001AE UnityEngine.Color Unity.Barracuda.TextureFormatUtils::FormatToChannelMask(UnityEngine.Texture,System.Int32)
extern void TextureFormatUtils_FormatToChannelMask_mDAF3CC7028443E16D7BD743B84FCD0BBF958EDA9 (void);
// 0x000001AF UnityEngine.Color Unity.Barracuda.TextureFormatUtils::FormatToChannelMask(UnityEngine.Texture)
extern void TextureFormatUtils_FormatToChannelMask_m798E2DA10BCCE4D77E23992D6BA8C74FB5FBED36 (void);
// 0x000001B0 System.Void Unity.Barracuda.TextureFormatUtils::.ctor()
extern void TextureFormatUtils__ctor_m4CC13E94FC6B299934C450EB3F9C785546A3D76B (void);
// 0x000001B1 Unity.Barracuda.TensorShape Unity.Barracuda.TextureAsTensorData::get_shape()
extern void TextureAsTensorData_get_shape_m471A006F9FFCE9301E7705C2D0D8DA13D1B1DFF8 (void);
// 0x000001B2 UnityEngine.Texture[] Unity.Barracuda.TextureAsTensorData::get_textures()
extern void TextureAsTensorData_get_textures_mF857E0DDC20CB9048F36DF56649528DC3A2FD6A8 (void);
// 0x000001B3 System.Int32 Unity.Barracuda.TextureAsTensorData::get_interpretPixelAsChannels()
extern void TextureAsTensorData_get_interpretPixelAsChannels_m2959DEFBA74FF0A099EB2DB029A0918D9EEDC071 (void);
// 0x000001B4 Unity.Barracuda.TextureAsTensorData_InterpretDepthAs Unity.Barracuda.TextureAsTensorData::get_interpretDepthAs()
extern void TextureAsTensorData_get_interpretDepthAs_m28FA6F2D82E55E552BA668E957C3841CCFD0E24D (void);
// 0x000001B5 Unity.Barracuda.TextureAsTensorData_InterpretColorAs Unity.Barracuda.TextureAsTensorData::get_interpretColorAs()
extern void TextureAsTensorData_get_interpretColorAs_m975947AEA2BCA5A8B13FBF0651C95F327A980D9E (void);
// 0x000001B6 Unity.Barracuda.TextureAsTensorData_Flip Unity.Barracuda.TextureAsTensorData::get_flip()
extern void TextureAsTensorData_get_flip_mE1B46F32F8E93B9C3CB180FDC0EAAF9810BCF2EC (void);
// 0x000001B7 System.Void Unity.Barracuda.TextureAsTensorData::.ctor(UnityEngine.Texture[],System.Int32,Unity.Barracuda.TextureAsTensorData_Flip,Unity.Barracuda.TextureAsTensorData_InterpretDepthAs,Unity.Barracuda.TextureAsTensorData_InterpretColorAs)
extern void TextureAsTensorData__ctor_m72EA6585C714E932A5C154CAA8528DC492CEEAD6 (void);
// 0x000001B8 System.Void Unity.Barracuda.TextureAsTensorData::.ctor(UnityEngine.Texture,System.Int32,Unity.Barracuda.TextureAsTensorData_Flip,Unity.Barracuda.TextureAsTensorData_InterpretDepthAs,Unity.Barracuda.TextureAsTensorData_InterpretColorAs)
extern void TextureAsTensorData__ctor_m0FF79FECC30149DE25037EB7EEDA71002DE3A7A1 (void);
// 0x000001B9 System.Void Unity.Barracuda.TextureAsTensorData::Reserve(System.Int32)
extern void TextureAsTensorData_Reserve_m3347B326685D244AC94FCAF27720262D2C994829 (void);
// 0x000001BA System.Void Unity.Barracuda.TextureAsTensorData::Upload(System.Single[],Unity.Barracuda.TensorShape,System.Int32)
extern void TextureAsTensorData_Upload_mDA1A54D809D2AD045CB4275B83218ED5243EDE6F (void);
// 0x000001BB System.Boolean Unity.Barracuda.TextureAsTensorData::ScheduleAsyncDownload(System.Int32)
extern void TextureAsTensorData_ScheduleAsyncDownload_m296B57106B2CD2DD821179C174EF15C5BA0D0A47 (void);
// 0x000001BC System.Single[] Unity.Barracuda.TextureAsTensorData::Download(Unity.Barracuda.TensorShape)
extern void TextureAsTensorData_Download_m5BE89DB83F92F06DAC17304F14CE47D649ABD9D8 (void);
// 0x000001BD System.Single[] Unity.Barracuda.TextureAsTensorData::SharedAccess(System.Int32&)
extern void TextureAsTensorData_SharedAccess_mFCED7C43363627C82E62687A61FFF1C0EB1EC5CF (void);
// 0x000001BE System.Int32 Unity.Barracuda.TextureAsTensorData::get_maxCapacity()
extern void TextureAsTensorData_get_maxCapacity_mD97EE265857DAD3F0FCCE8327394B25ED84E226E (void);
// 0x000001BF System.Void Unity.Barracuda.TextureAsTensorData::Dispose()
extern void TextureAsTensorData_Dispose_m76388D83B21D94FAF330BB3DF20D3ECB75BBBDA1 (void);
// 0x000001C0 System.Void Unity.Barracuda.ReferenceComputeOps::.ctor(UnityEngine.ComputeShader,Unity.Barracuda.ITensorAllocator)
extern void ReferenceComputeOps__ctor_mE141EC9A145B1F2DEC522C199C6D0BAB07B929F9 (void);
// 0x000001C1 Unity.Barracuda.ComputeTensorData Unity.Barracuda.ReferenceComputeOps::Pin(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Pin_m442ADE184DAE77ED7A9468DBE98AECC5EFF9A6EF (void);
// 0x000001C2 System.Void Unity.Barracuda.ReferenceComputeOps::SetTensor(Unity.Barracuda.ComputeFunc,System.String,Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_SetTensor_mB3320EDEE1DEE9E062B5D532625DF09DB47B45DA (void);
// 0x000001C3 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::NewTensor(Unity.Barracuda.ComputeFunc,System.String,Unity.Barracuda.TensorShape)
extern void ReferenceComputeOps_NewTensor_m4C60CAD5BC3374A2F26495D685B74DB4D7A2BDE5 (void);
// 0x000001C4 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Dispatch(Unity.Barracuda.ComputeFunc,Unity.Barracuda.TensorShape,System.Int32,System.Int32,System.Int32,System.String)
extern void ReferenceComputeOps_Dispatch_mEA5DE58324C18E9FC45826F19D89E2B57774CCFF (void);
// 0x000001C5 Unity.Barracuda.ITensorData Unity.Barracuda.ReferenceComputeOps::TextureToTensorData(Unity.Barracuda.TextureAsTensorData,System.String)
extern void ReferenceComputeOps_TextureToTensorData_m3B24AC9D6E0A1DE4564E762EF8ABFCE3969A5AC5 (void);
// 0x000001C6 System.Void Unity.Barracuda.ReferenceComputeOps::TensorToRenderTexture(Unity.Barracuda.Tensor,UnityEngine.RenderTexture,System.Int32,System.Int32,UnityEngine.Vector4,UnityEngine.Vector4,UnityEngine.Texture3D)
extern void ReferenceComputeOps_TensorToRenderTexture_mAFBCCAB723EEAF1872B059D4BEF4E8053997AACC (void);
// 0x000001C7 System.Boolean Unity.Barracuda.ReferenceComputeOps::ShouldFlattenInputForDenseLayer(Unity.Barracuda.TensorShape)
extern void ReferenceComputeOps_ShouldFlattenInputForDenseLayer_mC9CA550D450079098739DF83886533ABA95DA727 (void);
// 0x000001C8 System.Boolean Unity.Barracuda.ReferenceComputeOps::IsFusedActivationSupported(Unity.Barracuda.Layer_FusedActivation)
extern void ReferenceComputeOps_IsFusedActivationSupported_m32C00F501698DABD69F467D115BCEB455B21BA62 (void);
// 0x000001C9 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::MatMul(Unity.Barracuda.Tensor,System.Boolean,Unity.Barracuda.Tensor,System.Boolean)
extern void ReferenceComputeOps_MatMul_m20E8C058742EEE4CA3A7C9E84AD3917E92AEDEAE (void);
// 0x000001CA Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Dense(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Layer_FusedActivation)
extern void ReferenceComputeOps_Dense_mAD117042C36BD654489419E9F40E73641FF47C0D (void);
// 0x000001CB Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Conv2DWinograd(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer_FusedActivation)
extern void ReferenceComputeOps_Conv2DWinograd_m4964E74CD9F0B22DE47B41B4B651A12B684D20CB (void);
// 0x000001CC Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Conv2D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer_FusedActivation)
extern void ReferenceComputeOps_Conv2D_mEC15739D76F5B22E754EDA40F5F0B9948D93ADFA (void);
// 0x000001CD Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::DepthwiseConv2D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer_FusedActivation)
extern void ReferenceComputeOps_DepthwiseConv2D_m4AFBF458B56217657C6548CE91C6D837710061FC (void);
// 0x000001CE Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Conv2DTrans(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[],Unity.Barracuda.Layer_FusedActivation)
extern void ReferenceComputeOps_Conv2DTrans_mDAAC2DD24AD90D8365112CAFA3911D5A699447B5 (void);
// 0x000001CF Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Upsample2D(Unity.Barracuda.Tensor,System.Int32[],System.Boolean)
extern void ReferenceComputeOps_Upsample2D_mFF53F5896E90F854303A3B31FC4E06173B7DA4A3 (void);
// 0x000001D0 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Resample2D(Unity.Barracuda.Tensor,System.Int32[],System.Boolean)
extern void ReferenceComputeOps_Resample2D_m13DF819DCD7F872CFD0E5F0A3389854EFC92DB08 (void);
// 0x000001D1 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::DepthToSpace(Unity.Barracuda.Tensor,System.Int32[],Unity.Barracuda.Layer_DepthToSpaceMode)
extern void ReferenceComputeOps_DepthToSpace_mE18FCCE1284EA8D021FF6934C3F8C42F90212B83 (void);
// 0x000001D2 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::SpaceToDepth(Unity.Barracuda.Tensor,System.Int32[])
extern void ReferenceComputeOps_SpaceToDepth_m07BB81F88A6DE6CE77ECEAA2B20C04873AEB9E51 (void);
// 0x000001D3 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Pool2D(System.String,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void ReferenceComputeOps_Pool2D_m8B116BD2380D52D87C964ECF67D569ABC9A8033E (void);
// 0x000001D4 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::MaxPool2D(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void ReferenceComputeOps_MaxPool2D_m7B511F9DB383A13F20B949C60F8FDDB39899F6A1 (void);
// 0x000001D5 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::AvgPool2D(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void ReferenceComputeOps_AvgPool2D_m0C061979D3E2DB77BCC454E394A5396BAA9B53E9 (void);
// 0x000001D6 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::GlobalPool2D(System.String,Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_GlobalPool2D_m5FF4B41F3541E5B3BE3A510EA35E9B05CEF807DB (void);
// 0x000001D7 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::GlobalMaxPool2D(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_GlobalMaxPool2D_m4FEA9939FBEC8CEE28CBD4657D945328C3F7F0D7 (void);
// 0x000001D8 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::GlobalAvgPool2D(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_GlobalAvgPool2D_m7665CB9C3E9A495BEF0C8D6ED7360607037BFDA6 (void);
// 0x000001D9 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::GlobalAvgVariancePool2D(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_GlobalAvgVariancePool2D_m095C953A94CAD779E2832DD6CF19AEF2ADBB7A46 (void);
// 0x000001DA Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::ApplyPadding(Unity.Barracuda.Tensor,System.Int32[],System.String,System.Single)
extern void ReferenceComputeOps_ApplyPadding_m529F525E6E0A39191305324DA251B5816E0E5CE4 (void);
// 0x000001DB Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Border2D(Unity.Barracuda.Tensor,System.Int32[],System.Single)
extern void ReferenceComputeOps_Border2D_m83B13160F6FB38876B867A30C8AA8EF0AC8756F1 (void);
// 0x000001DC Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Pad2DReflect(Unity.Barracuda.Tensor,System.Int32[])
extern void ReferenceComputeOps_Pad2DReflect_m969A48E5B15AA5D18F0824E0B6CD5CCEC1F016A5 (void);
// 0x000001DD Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Pad2DSymmetric(Unity.Barracuda.Tensor,System.Int32[])
extern void ReferenceComputeOps_Pad2DSymmetric_mDE3E2DFDF1D16A7B060767D1641595BD9B23000A (void);
// 0x000001DE Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Pad2DEdge(Unity.Barracuda.Tensor,System.Int32[])
extern void ReferenceComputeOps_Pad2DEdge_m1E9E70ADF1EE536EEAC16497A1C044F5C9E8534E (void);
// 0x000001DF Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::ScaleBias(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_ScaleBias_mC225ABFB458D559938F24B0BC581339E1AC99E1F (void);
// 0x000001E0 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Normalization(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32,System.Int32,System.Single,Unity.Barracuda.Layer_FusedActivation)
extern void ReferenceComputeOps_Normalization_m55C9687C29CE4D7C502DD8A8C3F51D28DC6379C2 (void);
// 0x000001E1 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::LRN(Unity.Barracuda.Tensor,System.Single,System.Single,System.Single,System.Int32)
extern void ReferenceComputeOps_LRN_mAA78D45E79C54BEBCA1939F6B335CF50A1C1F04D (void);
// 0x000001E2 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Dropout(Unity.Barracuda.Tensor,System.Single)
extern void ReferenceComputeOps_Dropout_m586960BA9E70B8AE34DAB8D613BEBAAF80F97429 (void);
// 0x000001E3 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Activation(System.String,Unity.Barracuda.Tensor,System.Single,System.Single)
extern void ReferenceComputeOps_Activation_m3DCCBA6732AD9CFE04F59D53BE7600C4C0AABFAC (void);
// 0x000001E4 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Relu(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Relu_m7038D19315DF072010658A5BFBE09508179BA5D1 (void);
// 0x000001E5 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::PRelu(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_PRelu_m91D6E5DFD9F0039DC6E2F8D948FD664DA9DBBFBE (void);
// 0x000001E6 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Softmax(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Softmax_m8C2615C8CC8B683CC14FC7CDAE1F3A71D618290C (void);
// 0x000001E7 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::LogSoftmax(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_LogSoftmax_mB8646036CE376BD2CC61031431933F9FE76B5CE7 (void);
// 0x000001E8 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Tanh(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Tanh_mCBA85DCAC3AA697F3E03C717D8312ADD381BF14C (void);
// 0x000001E9 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Sigmoid(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Sigmoid_m33872252DD99BB523533D8299063E15F317C209A (void);
// 0x000001EA Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Relu6(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Relu6_m1280F50F46F81A0E6DA081816ED5DC8B9D2E1053 (void);
// 0x000001EB Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Elu(Unity.Barracuda.Tensor,System.Single)
extern void ReferenceComputeOps_Elu_m9055A2C7D72B1AA12DF08135F43E0F959422785C (void);
// 0x000001EC Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::LeakyRelu(Unity.Barracuda.Tensor,System.Single)
extern void ReferenceComputeOps_LeakyRelu_m479FA0B829F19FE1359CF1266164AC3A4E1FB432 (void);
// 0x000001ED Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Selu(Unity.Barracuda.Tensor,System.Single,System.Single)
extern void ReferenceComputeOps_Selu_mAC1D382DD0CCE3D15BA8ED7EBF3A84D7A1A686F3 (void);
// 0x000001EE Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Swish(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Swish_m5F046E5613F428C0993BF43D6C2EDA0F6C0F41BE (void);
// 0x000001EF Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Abs(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Abs_m815D4653341F0EE4EF07BBEF4478064F1D75E59F (void);
// 0x000001F0 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Neg(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Neg_mA2144CD26A5E4AE8865BF765A4F4C555546A3A1A (void);
// 0x000001F1 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Ceil(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Ceil_m5CF724FDE8A6C9B664480D5F684FFAC59F2B1A4E (void);
// 0x000001F2 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Clip(Unity.Barracuda.Tensor,System.Single,System.Single)
extern void ReferenceComputeOps_Clip_m2124D9750022DE57C1D3A366B06B36B386F4699C (void);
// 0x000001F3 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Floor(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Floor_mE7A9E23BC33C50F2EDE278B3840B18BA153E8269 (void);
// 0x000001F4 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Reciprocal(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Reciprocal_m0FE39FA2F8339EAB66DCBDD9E08484658EA6FB0A (void);
// 0x000001F5 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Pow(Unity.Barracuda.Tensor,System.Single)
extern void ReferenceComputeOps_Pow_m5C84C59597BAB41A17B0C30078BF24C70B14C779 (void);
// 0x000001F6 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Exp(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Exp_m50A2B29E91632DA85B7988F9C2BD850CBB8175B4 (void);
// 0x000001F7 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Log(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Log_m97AE9B40ACD640C4DE1803014A3B3339CF579DA0 (void);
// 0x000001F8 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Sqrt(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Sqrt_m03C0FB81B46458C46470C0B004FAF2650692DDA5 (void);
// 0x000001F9 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Expand(Unity.Barracuda.Tensor,Unity.Barracuda.TensorShape)
extern void ReferenceComputeOps_Expand_m903A4838318BC561DA7AE6F83FDA091223B083CC (void);
// 0x000001FA Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::ElementwiseWithBroadcast(System.String,Unity.Barracuda.Tensor[])
extern void ReferenceComputeOps_ElementwiseWithBroadcast_mE6EB8E90AEE624292D4555CA11E4BF907D5650D1 (void);
// 0x000001FB Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Add(Unity.Barracuda.Tensor[])
extern void ReferenceComputeOps_Add_mEE1664106457EC7A587352C9FD952F24F44C427F (void);
// 0x000001FC Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Sub(Unity.Barracuda.Tensor[])
extern void ReferenceComputeOps_Sub_m50CBA16D7E08EB4AA3D61295804AB46D80DFBCC9 (void);
// 0x000001FD Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Mul(Unity.Barracuda.Tensor[])
extern void ReferenceComputeOps_Mul_m10F019A59AB8928CB39FB28AC419CCBDCFCDD7EB (void);
// 0x000001FE Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Div(Unity.Barracuda.Tensor[])
extern void ReferenceComputeOps_Div_mDBADF50D55D4701ECE0F5ABC42034E9D33F46A36 (void);
// 0x000001FF Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Pow(Unity.Barracuda.Tensor[])
extern void ReferenceComputeOps_Pow_mF2D9A97DF6F25DBB3A59DAFE5A15451AB999FDCA (void);
// 0x00000200 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Min(Unity.Barracuda.Tensor[])
extern void ReferenceComputeOps_Min_mD4357385B0528A861F8D8AAB550103ACD53801CA (void);
// 0x00000201 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Max(Unity.Barracuda.Tensor[])
extern void ReferenceComputeOps_Max_mB51331DCC589FB251D3DF65CEEA28ABEAD97D63C (void);
// 0x00000202 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Mean(Unity.Barracuda.Tensor[])
extern void ReferenceComputeOps_Mean_mC3524DDA765CAE76108C15C1E26897D931978658 (void);
// 0x00000203 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Reduce(System.String,Unity.Barracuda.Tensor,System.Int32)
extern void ReferenceComputeOps_Reduce_m2E81C52205A979DDE597F84FC0A23EE0C1D4AB7C (void);
// 0x00000204 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::ReduceMin(Unity.Barracuda.Tensor,System.Int32)
extern void ReferenceComputeOps_ReduceMin_mBFBB32163F601BE829E0D54B784A77EC12E32481 (void);
// 0x00000205 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::ReduceMax(Unity.Barracuda.Tensor,System.Int32)
extern void ReferenceComputeOps_ReduceMax_mF68AF4A859959A699466A30997BB3F6BBA1FF4E6 (void);
// 0x00000206 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::ReduceSum(Unity.Barracuda.Tensor,System.Int32)
extern void ReferenceComputeOps_ReduceSum_m4B1938C24CA927E2D516C95CBAF7C9C6F45AB185 (void);
// 0x00000207 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::ReduceMean(Unity.Barracuda.Tensor,System.Int32)
extern void ReferenceComputeOps_ReduceMean_m17AC85B09E51B4CED2680A4B36009CF564F0B08C (void);
// 0x00000208 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::ReduceProd(Unity.Barracuda.Tensor,System.Int32)
extern void ReferenceComputeOps_ReduceProd_mBE924F01F5478B786B3F80587A5E608D367727DF (void);
// 0x00000209 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Greater(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Greater_mB323FB85F32853E759AB45B2931744678F70D5F0 (void);
// 0x0000020A Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::GreaterEqual(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_GreaterEqual_m608CE30163ADCE102E115C7EC6F81E1C891CA709 (void);
// 0x0000020B Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Less(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Less_m6A4CBA3AF1715ABBCA315AD6F7EFEBFBE8D52A30 (void);
// 0x0000020C Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::LessEqual(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_LessEqual_mFC50E86466AC294C489776DB933ABE96E1905CEC (void);
// 0x0000020D Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Equal(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Equal_m03F7C794B79D22F7EFFA617EC9DCC9D468043470 (void);
// 0x0000020E Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::LogicalOr(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_LogicalOr_mE3C131C6304ECAA5CCF64D8669A9FCF1D02ECE40 (void);
// 0x0000020F Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::LogicalAnd(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_LogicalAnd_mDE454F41A9A86233825B227E9829430553F8A188 (void);
// 0x00000210 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::LogicalXor(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_LogicalXor_mCA7577FA92735C8BEA9FD9E1C481C05BC63C6F0D (void);
// 0x00000211 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::LogicalNot(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_LogicalNot_m33A7CD24653C6C852D1793A2A6A5084BDDAC0D4A (void);
// 0x00000212 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::CopyAndReshape_NCHW(Unity.Barracuda.Tensor,Unity.Barracuda.TensorShape)
extern void ReferenceComputeOps_CopyAndReshape_NCHW_mCB59B233CD09677FA5E0FCA1AB6920D57D58EA75 (void);
// 0x00000213 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::CopyAndReshape(Unity.Barracuda.Tensor,Unity.Barracuda.TensorShape)
extern void ReferenceComputeOps_CopyAndReshape_m5B97CEE685283E55DB3B9E407AE473870C68AA9C (void);
// 0x00000214 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Flatten(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Flatten_m22625B7B836F0749D8070F5E5A49F6484B2D3E9B (void);
// 0x00000215 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Reshape(Unity.Barracuda.Tensor,Unity.Barracuda.TensorShape)
extern void ReferenceComputeOps_Reshape_m4DB7773EDDEB4A5A0DA4A31D9242B671F4696173 (void);
// 0x00000216 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Transpose(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Transpose_m2EF9F55C919FE2317CF763783CB009EA25CB2F20 (void);
// 0x00000217 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Concat(Unity.Barracuda.Tensor[],System.Int32)
extern void ReferenceComputeOps_Concat_m0B165543DC18995A1D74E689ED3EBF78A4C3B26B (void);
// 0x00000218 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::StridedSlice(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void ReferenceComputeOps_StridedSlice_m4833B8C96C8B24D45467CA367507D76D82404752 (void);
// 0x00000219 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Tile(Unity.Barracuda.Tensor,System.Int32[])
extern void ReferenceComputeOps_Tile_mD4A326B8F649DF260A7590A3E625471EDF44732D (void);
// 0x0000021A Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Gather(Unity.Barracuda.Tensor[],System.Int32)
extern void ReferenceComputeOps_Gather_m1D6CBB00E457427F7C0ED826303D95A39B0BA4E9 (void);
// 0x0000021B Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Copy(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Copy_mF0FD6D7D6CD87E1C4792219C6B4D9AD564454A99 (void);
// 0x0000021C Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Prepare(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Prepare_m517D6913E445FC6351A72148D6D47C6BF58CCF98 (void);
// 0x0000021D System.Void Unity.Barracuda.ReferenceComputeOps::.cctor()
extern void ReferenceComputeOps__cctor_mA82934BC2292DE0CE4D30B0CE31EF85E53CCB6C6 (void);
// 0x0000021E System.UInt32 Unity.Barracuda.ComputeFunc::get_threadGroupSize()
extern void ComputeFunc_get_threadGroupSize_m7C67B8A531AFB668137D1ECD397258A779275B9F_AdjustorThunk (void);
// 0x0000021F System.Int32 Unity.Barracuda.ComputeFunc::get_width()
extern void ComputeFunc_get_width_m079CF1A154715AF69CB62DE84CA03F97E3AD4C68_AdjustorThunk (void);
// 0x00000220 System.Int32 Unity.Barracuda.ComputeFunc::get_height()
extern void ComputeFunc_get_height_m4584433AD10BBFBA76C0B3B90F650ECF9ADF5FDC_AdjustorThunk (void);
// 0x00000221 System.Int32 Unity.Barracuda.ComputeFunc::get_depth()
extern void ComputeFunc_get_depth_m9574BAFF883556DE9B8F1EF3A146E8D2EF66F2B2_AdjustorThunk (void);
// 0x00000222 Unity.Barracuda.ComputeFunc_TensorDecl Unity.Barracuda.ComputeFunc::GetTensorDecl(System.String)
extern void ComputeFunc_GetTensorDecl_m38B63770547DAF5B2722473F6EF69A99C9F9675D (void);
// 0x00000223 System.Int32 Unity.Barracuda.ComputeFunc::GetTensorData(System.String)
extern void ComputeFunc_GetTensorData_m389284001165CF46F6ECF23C5296E4A8F46D25F0 (void);
// 0x00000224 UnityEngine.Texture2D Unity.Barracuda.ComputeFunc::get_dummyTexture2D()
extern void ComputeFunc_get_dummyTexture2D_mCBF4032B7DEE37282581A4CC14BAF954FE379227 (void);
// 0x00000225 UnityEngine.Texture3D Unity.Barracuda.ComputeFunc::get_dummyTexture3D()
extern void ComputeFunc_get_dummyTexture3D_m870D28595C0E154EA6CC70CB53DE096A18225E2F (void);
// 0x00000226 UnityEngine.Texture2DArray Unity.Barracuda.ComputeFunc::get_dummyTexture2DArray()
extern void ComputeFunc_get_dummyTexture2DArray_m7F03FF96C090BEA56930B2465D373238310251E6 (void);
// 0x00000227 System.Void Unity.Barracuda.ComputeFunc::.ctor(UnityEngine.ComputeShader,System.String[],System.Int32,System.Int32,System.Int32)
extern void ComputeFunc__ctor_m03931C58FEC95647033591D97E21A2D4846EC979_AdjustorThunk (void);
// 0x00000228 System.Void Unity.Barracuda.ComputeFunc::.ctor(UnityEngine.ComputeShader,System.String)
extern void ComputeFunc__ctor_mBC158C11B0B13AD6ADA63F6EF91841980CE6D00D_AdjustorThunk (void);
// 0x00000229 System.Void Unity.Barracuda.ComputeFunc::.ctor(UnityEngine.ComputeShader[],System.String[],System.Int32,System.Int32,System.Int32)
extern void ComputeFunc__ctor_m96A5C9F347BF9BD463DF73D1388966B4A4476258_AdjustorThunk (void);
// 0x0000022A System.Void Unity.Barracuda.ComputeFunc::.ctor(UnityEngine.ComputeShader[],System.String)
extern void ComputeFunc__ctor_mD90798FAA166BF0BD465A176871A4C0CBE9DC333_AdjustorThunk (void);
// 0x0000022B System.Void Unity.Barracuda.ComputeFunc::SetTensor(System.String,Unity.Barracuda.TensorShape,UnityEngine.ComputeBuffer,System.Int64)
extern void ComputeFunc_SetTensor_m2D0709A7F3C23726941BF242CFB30F21778A8D0F_AdjustorThunk (void);
// 0x0000022C System.Void Unity.Barracuda.ComputeFunc::SetTensor(Unity.Barracuda.ComputeFunc_TensorDecl,System.Int32,Unity.Barracuda.TensorShape,UnityEngine.ComputeBuffer,System.Int64)
extern void ComputeFunc_SetTensor_m41A92A85C8B82323F96831DC5067833C2AA87112_AdjustorThunk (void);
// 0x0000022D System.Void Unity.Barracuda.ComputeFunc::SetTensor(System.String,Unity.Barracuda.TensorShape,UnityEngine.Texture,System.Int64)
extern void ComputeFunc_SetTensor_m72D943E64E0EE744D717AC0C5F1D37A116AA50C7_AdjustorThunk (void);
// 0x0000022E System.Void Unity.Barracuda.ComputeFunc::SetTensorDecl(System.String,Unity.Barracuda.TensorShape,System.Int64)
extern void ComputeFunc_SetTensorDecl_m4A0D257422AC30CB5F0DB8D66CC86434B46B8A17_AdjustorThunk (void);
// 0x0000022F System.Void Unity.Barracuda.ComputeFunc::SetTensorDecl(Unity.Barracuda.ComputeFunc_TensorDecl,Unity.Barracuda.TensorShape,System.Int64)
extern void ComputeFunc_SetTensorDecl_m10B14DEA6E3B163C48AA990945596F9B549344D5_AdjustorThunk (void);
// 0x00000230 System.Void Unity.Barracuda.ComputeFunc::SetTensorBuffer(System.String,UnityEngine.ComputeBuffer)
extern void ComputeFunc_SetTensorBuffer_m5712805048428B611703ECFF473BF4A99F65E18F_AdjustorThunk (void);
// 0x00000231 System.Void Unity.Barracuda.ComputeFunc::SetTensorBuffer(System.Int32,UnityEngine.ComputeBuffer)
extern void ComputeFunc_SetTensorBuffer_mE191AA455F31A474C7249BB9F03F2411460D2603_AdjustorThunk (void);
// 0x00000232 System.Void Unity.Barracuda.ComputeFunc::SetTexture(System.String,UnityEngine.Texture)
extern void ComputeFunc_SetTexture_mBF5D8DAC5F926995A2AC0C742110059C591BE5AF_AdjustorThunk (void);
// 0x00000233 System.Void Unity.Barracuda.ComputeFunc::Dispatch(System.ValueTuple`3<System.Int32,System.Int32,System.Int32>)
extern void ComputeFunc_Dispatch_mFBDA7A3D30B19A2D3CCF244B70DB3603B2E4F1F9_AdjustorThunk (void);
// 0x00000234 System.Void Unity.Barracuda.ComputeFunc::Dispatch(System.Int32,System.Int32,System.Int32)
extern void ComputeFunc_Dispatch_m83B92052AC2D22080E28376D07FBD2C21442D447_AdjustorThunk (void);
// 0x00000235 System.Int32 Unity.Barracuda.ComputeFunc::IntDivCeil(System.Int32,System.Int32)
extern void ComputeFunc_IntDivCeil_m7EAF3BD457C26DDC2E8EF7C416CF4433361A24E0 (void);
// 0x00000236 System.String Unity.Barracuda.ComputeFunc::FindBestKernelMatchingDimensions(UnityEngine.ComputeShader[],System.String[],System.Int32,System.Int32,System.Int32)
extern void ComputeFunc_FindBestKernelMatchingDimensions_mB83177D010EAE3ACDF17112759CC72BF1259F43B (void);
// 0x00000237 System.Void Unity.Barracuda.ComputeFunc::.cctor()
extern void ComputeFunc__cctor_m60CD734497968CE576CC43DEC3F4E35661BF06DF (void);
// 0x00000238 System.Void Unity.Barracuda.UnsafeArrayTensorData::.ctor(System.Int32)
extern void UnsafeArrayTensorData__ctor_m3BB9EEE584A23CFC3867E2B1CB5D55F9701F4B70 (void);
// 0x00000239 System.Void Unity.Barracuda.UnsafeArrayTensorData::.ctor(Unity.Barracuda.TensorShape)
extern void UnsafeArrayTensorData__ctor_m15650C4E26A3D05E6BC52D633FEAF755B0EC0C32 (void);
// 0x0000023A System.Void Unity.Barracuda.UnsafeArrayTensorData::.ctor(Unity.Barracuda.ArrayTensorData)
extern void UnsafeArrayTensorData__ctor_mB852FA17156C624C6954ED2A7CE9F9AAE3FDC2AD (void);
// 0x0000023B System.Void Unity.Barracuda.UnsafeArrayTensorData::.ctor(Unity.Barracuda.SharedArrayTensorData)
extern void UnsafeArrayTensorData__ctor_mE674D6984A6AFF90E4553C0E779F396804EEAED0 (void);
// 0x0000023C System.Void Unity.Barracuda.UnsafeArrayTensorData::.ctor(System.Single[],System.Int32,System.Int32,System.Boolean)
extern void UnsafeArrayTensorData__ctor_mA812D510F417E7A33DCF09420E11C78453479634 (void);
// 0x0000023D System.Void Unity.Barracuda.UnsafeArrayTensorData::Finalize()
extern void UnsafeArrayTensorData_Finalize_m6A0A87D06ABFF2A7E6E9ABD4D497C5CCFA4B8DC1 (void);
// 0x0000023E System.Void Unity.Barracuda.UnsafeArrayTensorData::Dispose()
extern void UnsafeArrayTensorData_Dispose_m73C88EF3BB3CEB3B39E05CBB43BC71396AD13890 (void);
// 0x0000023F System.Void Unity.Barracuda.UnsafeArrayTensorData::Reserve(System.Int32)
extern void UnsafeArrayTensorData_Reserve_m1FD0D070FA2F2A4A8342FAA68B6CA2CB8EAAB3EE (void);
// 0x00000240 System.Void Unity.Barracuda.UnsafeArrayTensorData::Upload(System.Single[],Unity.Barracuda.TensorShape,System.Int32)
extern void UnsafeArrayTensorData_Upload_m49FEACFC9A0A551C0C81FCBC595F0534C9A0610F (void);
// 0x00000241 System.Single[] Unity.Barracuda.UnsafeArrayTensorData::Download(Unity.Barracuda.TensorShape)
extern void UnsafeArrayTensorData_Download_mC33B68C64A99BCC42FFB044312B6DDBA99A27DF1 (void);
// 0x00000242 System.String Unity.Barracuda.UnsafeArrayTensorData::ToString()
extern void UnsafeArrayTensorData_ToString_mC78CA198723099E9039B56025839496E1326DEE7 (void);
// 0x00000243 Unity.Barracuda.BLASPlugin Unity.Barracuda.UnsafeArrayCPUOps::get_blas()
extern void UnsafeArrayCPUOps_get_blas_m17D0BF9F39B0964DFDBA3BEF3119EC27DD1F857D (void);
// 0x00000244 System.Void Unity.Barracuda.UnsafeArrayCPUOps::.ctor(Unity.Barracuda.ITensorAllocator)
extern void UnsafeArrayCPUOps__ctor_m4D480F2704EC36539F08603459089831384796C0 (void);
// 0x00000245 Unity.Barracuda.UnsafeArrayTensorData Unity.Barracuda.UnsafeArrayCPUOps::Pin(Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_Pin_m0EEA6990A7DC5BC461B2A4435E0956021E9FF1C7 (void);
// 0x00000246 System.Void Unity.Barracuda.UnsafeArrayCPUOps::Parallel_For(System.Int64,System.Int64,System.Action`1<System.Int64>)
extern void UnsafeArrayCPUOps_Parallel_For_m0E1EF7A317E33DDB88381A47F3321DAF4F795641 (void);
// 0x00000247 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Neg(Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_Neg_m8A33F794F7BC3CEFFCF912DF57857087473217CD (void);
// 0x00000248 System.Void Unity.Barracuda.UnsafeArrayCPUOps::NegInnerLoop(System.Int32,System.Int32,System.Single*,System.Single*)
extern void UnsafeArrayCPUOps_NegInnerLoop_m67E39309AFC6490DBACFBB5E4CB01010EB284FDF (void);
// 0x00000249 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Relu(Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_Relu_m078A57FD041918536EB47EEE36A71693E87C8C10 (void);
// 0x0000024A System.Void Unity.Barracuda.UnsafeArrayCPUOps::ReluInnerLoop(System.Int32,System.Int32,System.Single*,System.Single*)
extern void UnsafeArrayCPUOps_ReluInnerLoop_m57A02AC7B9BFB31D6B9AEA3D4E8EFA2BBC7A662D (void);
// 0x0000024B Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Relu6(Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_Relu6_m88B1245A4C5E47E1DAD34BE2F793BD9A63780CF3 (void);
// 0x0000024C System.Void Unity.Barracuda.UnsafeArrayCPUOps::Relu6InnerLoop(System.Int32,System.Int32,System.Single*,System.Single*)
extern void UnsafeArrayCPUOps_Relu6InnerLoop_mDC68E83D453140EBD4B51C689B401E2B07E9A7E8 (void);
// 0x0000024D Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::LeakyRelu(Unity.Barracuda.Tensor,System.Single)
extern void UnsafeArrayCPUOps_LeakyRelu_mAF86932BE9D7840D6B7CFAEF8491A810F3094280 (void);
// 0x0000024E System.Void Unity.Barracuda.UnsafeArrayCPUOps::LeakyReluInnerLoop(System.Int32,System.Int32,System.Single*,System.Single*,System.Single)
extern void UnsafeArrayCPUOps_LeakyReluInnerLoop_m2236838DAA01D09DB7EAC34FC07E1F7FA97737C4 (void);
// 0x0000024F Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Elu(Unity.Barracuda.Tensor,System.Single)
extern void UnsafeArrayCPUOps_Elu_m607C7DD5BDD92DE68A5F62E2272AB44A4CF10BFA (void);
// 0x00000250 System.Void Unity.Barracuda.UnsafeArrayCPUOps::EluInnerLoop(System.Int32,System.Int32,System.Single*,System.Single*,System.Single)
extern void UnsafeArrayCPUOps_EluInnerLoop_m4D066C117489C4D7464EE720A2DF9C10CC44AF2F (void);
// 0x00000251 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::PRelu(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_PRelu_m4485A96794697F6C90E629CDEDCF42E7CF66AB3F (void);
// 0x00000252 System.Void Unity.Barracuda.UnsafeArrayCPUOps::PReluInnerLoop(System.Int32,System.Int32,System.Single*,System.Int32,System.Single*,System.Single*,System.Int32)
extern void UnsafeArrayCPUOps_PReluInnerLoop_m368573BC3BEB03DF9394D36098936D86ABEA954A (void);
// 0x00000253 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Sigmoid(Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_Sigmoid_m4316095CDF7672B669E410505C11380569AAF78E (void);
// 0x00000254 System.Void Unity.Barracuda.UnsafeArrayCPUOps::SigmoidInnerLoop(System.Int32,System.Int32,System.Single*,System.Single*)
extern void UnsafeArrayCPUOps_SigmoidInnerLoop_mC885EA416A4654B772FF14E846B407C689DBA2B5 (void);
// 0x00000255 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Swish(Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_Swish_mF14AEEB8D538254D4C6B2734D7C139C47D12C8C8 (void);
// 0x00000256 System.Void Unity.Barracuda.UnsafeArrayCPUOps::SwishInnerLoop(System.Int32,System.Int32,System.Single*,System.Single*)
extern void UnsafeArrayCPUOps_SwishInnerLoop_mD7F3D54520C8473A0CDC93F3FFFFCD778482A601 (void);
// 0x00000257 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Exp(Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_Exp_mCEC24ECBC1CA0BEA12014B61168A198E3FE51C9E (void);
// 0x00000258 System.Void Unity.Barracuda.UnsafeArrayCPUOps::ExpInnerLoop(System.Int32,System.Int32,System.Single*,System.Single*)
extern void UnsafeArrayCPUOps_ExpInnerLoop_m1EBFD75ACDFBE481BE6B047634285F5FD9F6E8A8 (void);
// 0x00000259 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Sqrt(Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_Sqrt_m385BFE0120D9377277E10BFEF515EF6B365D45A4 (void);
// 0x0000025A System.Void Unity.Barracuda.UnsafeArrayCPUOps::SqrtInnerLoop(System.Int32,System.Int32,System.Single*,System.Single*)
extern void UnsafeArrayCPUOps_SqrtInnerLoop_m362C352A58F28E17F860B0F364B9DD67EFF20FB9 (void);
// 0x0000025B Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Tanh(Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_Tanh_m55E6263447605CB6ED7AB2A2F9A3496C1D9303B8 (void);
// 0x0000025C System.Void Unity.Barracuda.UnsafeArrayCPUOps::TanhInnerLoop(System.Int32,System.Int32,System.Single*,System.Single*)
extern void UnsafeArrayCPUOps_TanhInnerLoop_m0E1845FE1FFC52482E46563875D1E5BE9F6DA8D4 (void);
// 0x0000025D System.Boolean Unity.Barracuda.UnsafeArrayCPUOps::CanUseModuloForBroadcasting(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape)
extern void UnsafeArrayCPUOps_CanUseModuloForBroadcasting_m5E7C2D22A2531C7758C3761873D8EC5054333FE5 (void);
// 0x0000025E System.Boolean Unity.Barracuda.UnsafeArrayCPUOps::CanUseModuloForBroadcasting(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape)
extern void UnsafeArrayCPUOps_CanUseModuloForBroadcasting_m38A439213D9E78F98699CD7EAEC302BEC9A5EA46 (void);
// 0x0000025F Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::ApplyElementwiseWithBroadcast(Unity.Barracuda.Tensor[],System.Func`3<System.Single,System.Single,System.Single>,System.Action`1<System.Int64>,System.Action`1<System.Int64>)
extern void UnsafeArrayCPUOps_ApplyElementwiseWithBroadcast_mDF91053B566527DFA3611067DE69DA617AB2FC15 (void);
// 0x00000260 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Add(Unity.Barracuda.Tensor[])
extern void UnsafeArrayCPUOps_Add_m486C43839386D58C09A1B976B866401F48AEE97E (void);
// 0x00000261 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Sub(Unity.Barracuda.Tensor[])
extern void UnsafeArrayCPUOps_Sub_mDDB528C56B564AA93B80E8375CFC27311A056446 (void);
// 0x00000262 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Mul(Unity.Barracuda.Tensor[])
extern void UnsafeArrayCPUOps_Mul_m2A874631EC5325050665681A6FE84F0CF406DDF9 (void);
// 0x00000263 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Div(Unity.Barracuda.Tensor[])
extern void UnsafeArrayCPUOps_Div_m82265FD45D6204EB71D606F609F7E4063E577062 (void);
// 0x00000264 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Min(Unity.Barracuda.Tensor[])
extern void UnsafeArrayCPUOps_Min_mFF17FD3DF59096D9FFF71385A9E3476B643C05D5 (void);
// 0x00000265 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Max(Unity.Barracuda.Tensor[])
extern void UnsafeArrayCPUOps_Max_mA7456462A346FB1A2849E24E061F4614617219BE (void);
// 0x00000266 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Greater(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_Greater_mEAB13BC3D159758F13DB7D8778D7E8116AE566CF (void);
// 0x00000267 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::GreaterEqual(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_GreaterEqual_m947C72A3C822C11BD277EAC3A4F1A9AC89EC723F (void);
// 0x00000268 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Less(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_Less_m982B4EF2F0B883EE29BD4FF3F44FB109019A6B41 (void);
// 0x00000269 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::LessEqual(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_LessEqual_m4A8BA5D6469C275DE616641FE231BD401B4CC01D (void);
// 0x0000026A Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Equal(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_Equal_m4B4DC784C7549C3CAED934364E93CB3BDD8979A9 (void);
// 0x0000026B Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::LogicalOr(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_LogicalOr_m6ED1C48A2BA86E4B186BA1734C4EE28CE8A2E491 (void);
// 0x0000026C Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::LogicalAnd(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_LogicalAnd_m3B2893BA3ADBEB3D70CF9A1144FBD475AF731241 (void);
// 0x0000026D Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::LogicalXor(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_LogicalXor_mC70CF67E0648B7D585C2C7438285770289DB0ADD (void);
// 0x0000026E Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::LogicalNot(Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_LogicalNot_m704EDC95A223382EF3B3AD182BAFA34623C0FF07 (void);
// 0x0000026F Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::ApplyLogicalOperator(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Func`3<System.Single,System.Single,System.Single>,System.Action`1<System.Int64>,System.Action`1<System.Int64>)
extern void UnsafeArrayCPUOps_ApplyLogicalOperator_m503E923D604D12AE26322A0C5D868CCF168D6AF2 (void);
// 0x00000270 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::MatMul(Unity.Barracuda.Tensor,System.Boolean,Unity.Barracuda.Tensor,System.Boolean)
extern void UnsafeArrayCPUOps_MatMul_m1725E90EDA92D38D747CF73AF1BE4AF961244D71 (void);
// 0x00000271 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Dense(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Layer_FusedActivation)
extern void UnsafeArrayCPUOps_Dense_m65B6AF6E3CED3FAEE3B2D1F8895223BB1880E273 (void);
// 0x00000272 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::ApplyFusedActivation(Unity.Barracuda.Tensor,Unity.Barracuda.Layer_FusedActivation)
extern void UnsafeArrayCPUOps_ApplyFusedActivation_m3050FAB0DB7C42FFCE697D11D33067D36CE8D94F (void);
// 0x00000273 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::MaxPool2D(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void UnsafeArrayCPUOps_MaxPool2D_m08D757A115F3FA8CB90966B64C48B621185E53C8 (void);
// 0x00000274 System.Void Unity.Barracuda.UnsafeArrayCPUOps::MaxPool2DInnerLoop(System.Int32[],System.Int32[],System.Int32[],System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Int32)
extern void UnsafeArrayCPUOps_MaxPool2DInnerLoop_m9B968B3375C90C215494D06F4617D1520729BD05 (void);
// 0x00000275 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::AvgPool2D(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void UnsafeArrayCPUOps_AvgPool2D_mB9971AF213C47D3473756B44D103F1AEDA7BCD3D (void);
// 0x00000276 System.Void Unity.Barracuda.UnsafeArrayCPUOps::AvgPool2DInnerLoop(System.Int32[],System.Int32[],System.Int32[],System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Int32)
extern void UnsafeArrayCPUOps_AvgPool2DInnerLoop_m064E2A7E9ED4C9FC8640E56D5AFF6C5A80DA17D2 (void);
// 0x00000277 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::GlobalMaxPool2D(Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_GlobalMaxPool2D_mB6756149FB69A9BD66F3F616E6FF7BEB51B0FF67 (void);
// 0x00000278 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::GlobalAvgPool2D(Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_GlobalAvgPool2D_m84F919367153F1271A8249136FABAC3B917435F8 (void);
// 0x00000279 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Conv2D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer_FusedActivation)
extern void UnsafeArrayCPUOps_Conv2D_m407582E3F361C8786F7803E5B23107A063A6C884 (void);
// 0x0000027A Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Conv2DUsingIm2Col(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[])
extern void UnsafeArrayCPUOps_Conv2DUsingIm2Col_m57BC22A3D7859E6499ED8749EC3A19D00BC53AC5 (void);
// 0x0000027B System.Void Unity.Barracuda.UnsafeArrayCPUOps::Im2ColInnerLoop(System.Int32[],System.Int32[],System.Int32,System.Single*,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern void UnsafeArrayCPUOps_Im2ColInnerLoop_m01896319D9191E8EF3B121CA21C1FD09F91AEC72 (void);
// 0x0000027C System.Int32 Unity.Barracuda.UnsafeArrayCPUOps::SafeIntDivCeil(System.Int32,System.Int32)
extern void UnsafeArrayCPUOps_SafeIntDivCeil_mD0CFEF18BC6FDCA7F5959116BE4D4BEAE45FB067 (void);
// 0x0000027D Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Conv2DUsingIm2ColSliced(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[])
extern void UnsafeArrayCPUOps_Conv2DUsingIm2ColSliced_mF89E53696B580D52E074715DE02F96924324B58B (void);
// 0x0000027E Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::DepthwiseConv2D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer_FusedActivation)
extern void UnsafeArrayCPUOps_DepthwiseConv2D_m5B362A14A8D273D9095914094F2A84D1EF951291 (void);
// 0x0000027F System.Void Unity.Barracuda.UnsafeArrayCPUOps::DepthwiseConv2DInnerLoop(System.Int32[],System.Int32[],System.Int32,System.Int32,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Int32)
extern void UnsafeArrayCPUOps_DepthwiseConv2DInnerLoop_m743760D6C562B69C7F905F7665B5040243A8613F (void);
// 0x00000280 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::ApplyPadding(Unity.Barracuda.Tensor,System.Int32[],System.Single,System.Action`1<System.Int64>)
extern void UnsafeArrayCPUOps_ApplyPadding_mEE1D60F1039324B8430D0BE762E09CC257AF75F5 (void);
// 0x00000281 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Border2D(Unity.Barracuda.Tensor,System.Int32[],System.Single)
extern void UnsafeArrayCPUOps_Border2D_m53180B19CFB6B6492255D57EF6C18B1E08EBF1C8 (void);
// 0x00000282 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Pad2DEdge(Unity.Barracuda.Tensor,System.Int32[])
extern void UnsafeArrayCPUOps_Pad2DEdge_mA68AD7E1E3C843308BB2BC8F922BD4EB8F417141 (void);
// 0x00000283 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Pad2DReflect(Unity.Barracuda.Tensor,System.Int32[])
extern void UnsafeArrayCPUOps_Pad2DReflect_m3774F5E26DE00327A80EFF86CA7A1B1ADE32FA45 (void);
// 0x00000284 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Pad2DSymmetric(Unity.Barracuda.Tensor,System.Int32[])
extern void UnsafeArrayCPUOps_Pad2DSymmetric_mAE5D890278A36856D5620D5CBE4A4F358DACC5C2 (void);
// 0x00000285 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::CopyAndReshape(Unity.Barracuda.Tensor,Unity.Barracuda.TensorShape)
extern void UnsafeArrayCPUOps_CopyAndReshape_mCDC52A8321D69CB8E7353840AC254F20C820638A (void);
// 0x00000286 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::ScaleBias(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_ScaleBias_m5E958C5A3F2C4627AF9B77D41E9D4E07FC5C93C0 (void);
// 0x00000287 System.Void Unity.Barracuda.UnsafeArrayCPUOps::ScaleBiasInnerLoop(System.Int32,System.Int32,System.Single*,System.Int32,System.Single*,System.Single*,System.Int32,System.Single*,System.Int32)
extern void UnsafeArrayCPUOps_ScaleBiasInnerLoop_m30DC84BA2AA0CCE920B009C54A0A576C7E28A2C5 (void);
// 0x00000288 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Prepare(Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_Prepare_mC7692C61F90385F380E00D99FDA30E98D23DA6E0 (void);
// 0x00000289 System.Void Unity.Barracuda.InnerLoop::.ctor()
extern void InnerLoop__ctor_mB039E08E634C24879F3BE8DCCD6327953D53ACF4 (void);
// 0x0000028A System.Void Unity.Barracuda.InnerLoop::SetState(System.Int32,System.Single*,System.Single*,System.Single*,System.Single*,Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape)
extern void InnerLoop_SetState_m681EE94172F7AFC7EEF4C0404C39F6D6EE7FD779 (void);
// 0x0000028B System.Void Unity.Barracuda.InnerLoop::SetState(System.Int32,System.Single*,System.Single*,System.Single*,Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape)
extern void InnerLoop_SetState_m8DAE182E899330EE4661F80B99BC54A7A2E9C3F5 (void);
// 0x0000028C System.Void Unity.Barracuda.InnerLoop::SetState(System.Int32,System.Single*,System.Single*,System.Int32,System.Single*,System.Int32,System.Single*,System.Int32)
extern void InnerLoop_SetState_m2F4D8CB7D354D3BECE72F12EEEEBC3D8A341ED57 (void);
// 0x0000028D System.Void Unity.Barracuda.InnerLoop::SetState(System.Int32,System.Single*,System.Single*,System.Int32,System.Single*,System.Int32)
extern void InnerLoop_SetState_mEFF6D449C7EBAB864B19843DED16C68F3757168E (void);
// 0x0000028E System.Void Unity.Barracuda.InnerLoop::SetState(System.Int32,System.Single*,System.Single*)
extern void InnerLoop_SetState_mEFC6454611B4E2AE1BF2E1FBA5008E406B3A05D5 (void);
// 0x0000028F System.Void Unity.Barracuda.InnerLoop::SetState(System.Int32,System.Single*,System.Single*,System.Single*,System.Single*)
extern void InnerLoop_SetState_mD6D7AD4E5BBC65513C1186A28C953701A4C3506F (void);
// 0x00000290 System.Void Unity.Barracuda.InnerLoop::SetState(System.Int32,System.Single*,System.Single*,System.Single*)
extern void InnerLoop_SetState_m51E185F41E3939AD71002AD91306150DF107716D (void);
// 0x00000291 System.Void Unity.Barracuda.InnerLoop::SetState(System.Int32,System.Single*,System.Single*,System.Single)
extern void InnerLoop_SetState_mCC07499C24A3E4C16E2BC93A04BD5037932A3CED (void);
// 0x00000292 System.Void Unity.Barracuda.InnerLoop::SetState(System.Single*,System.Single*,Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,System.Single,System.Int32,System.Int32)
extern void InnerLoop_SetState_m53D152994136955708F70EE892BF26D30D7704E1 (void);
// 0x00000293 System.Void Unity.Barracuda.InnerLoop::NegInnerLoop(System.Int64)
extern void InnerLoop_NegInnerLoop_m481A135C28DE6D764A0DC3E1AF750F2E3D0B8228 (void);
// 0x00000294 System.Void Unity.Barracuda.InnerLoop::ReluInnerLoop(System.Int64)
extern void InnerLoop_ReluInnerLoop_m63180FFF3CC54112F82DF1994CD9F8C50CC2C71A (void);
// 0x00000295 System.Void Unity.Barracuda.InnerLoop::Relu6InnerLoop(System.Int64)
extern void InnerLoop_Relu6InnerLoop_m4DBF13DDC352CEBB5A84D07BCCB2AF5E8250CFE1 (void);
// 0x00000296 System.Void Unity.Barracuda.InnerLoop::LeakyReluInnerLoop(System.Int64)
extern void InnerLoop_LeakyReluInnerLoop_m651BB9EE455FD83E9825C9314D9D78D7091E30E8 (void);
// 0x00000297 System.Void Unity.Barracuda.InnerLoop::EluInnerLoop(System.Int64)
extern void InnerLoop_EluInnerLoop_mB58BD4F5B4375F9B28513892439742933EBE1582 (void);
// 0x00000298 System.Void Unity.Barracuda.InnerLoop::PReluInnerLoop(System.Int64)
extern void InnerLoop_PReluInnerLoop_m434A8472D19A7F8464E2AA28EDD59B78DD1108B4 (void);
// 0x00000299 System.Void Unity.Barracuda.InnerLoop::SigmoidInnerLoop(System.Int64)
extern void InnerLoop_SigmoidInnerLoop_m8AD679F2714FFA56E02A241A03B4EF3C8EA177C1 (void);
// 0x0000029A System.Void Unity.Barracuda.InnerLoop::SwishInnerLoop(System.Int64)
extern void InnerLoop_SwishInnerLoop_m952B06B5F86E96A078FC9AEB06A803685A856F24 (void);
// 0x0000029B System.Void Unity.Barracuda.InnerLoop::ExpInnerLoop(System.Int64)
extern void InnerLoop_ExpInnerLoop_mCBDC7B879B6F40DC2E662130092684388882C7E7 (void);
// 0x0000029C System.Void Unity.Barracuda.InnerLoop::SqrtInnerLoop(System.Int64)
extern void InnerLoop_SqrtInnerLoop_m89108009981B72D5EA6A1DFC6C0C5B6CB46195FE (void);
// 0x0000029D System.Void Unity.Barracuda.InnerLoop::TanhInnerLoop(System.Int64)
extern void InnerLoop_TanhInnerLoop_m92EFDA27B266B9844EFE528D47DF68E434D30BE3 (void);
// 0x0000029E System.Void Unity.Barracuda.InnerLoop::AddInnerLoop(System.Int64)
extern void InnerLoop_AddInnerLoop_mCC72950361C94601E14C1D842FE0009C91C8D517 (void);
// 0x0000029F System.Void Unity.Barracuda.InnerLoop::SubInnerLoop(System.Int64)
extern void InnerLoop_SubInnerLoop_m0D149B61E5F92118A9E09CBC07D0BB3B12357EFE (void);
// 0x000002A0 System.Void Unity.Barracuda.InnerLoop::MulInnerLoop(System.Int64)
extern void InnerLoop_MulInnerLoop_mF2966B039631C3F83D58C14A2602BF74681E733F (void);
// 0x000002A1 System.Void Unity.Barracuda.InnerLoop::DivInnerLoop(System.Int64)
extern void InnerLoop_DivInnerLoop_m3CF04B4743573258C1D3024B0DD44E08623EF48E (void);
// 0x000002A2 System.Void Unity.Barracuda.InnerLoop::MinInnerLoop(System.Int64)
extern void InnerLoop_MinInnerLoop_mDB867D67568161FC885FB8A1C15CCAC67C7E8700 (void);
// 0x000002A3 System.Void Unity.Barracuda.InnerLoop::MaxInnerLoop(System.Int64)
extern void InnerLoop_MaxInnerLoop_mB1833678D9442A1C5AC0F8A5EB2AFAFF802D0F0B (void);
// 0x000002A4 System.Void Unity.Barracuda.InnerLoop::GreaterInnerLoop(System.Int64)
extern void InnerLoop_GreaterInnerLoop_m171881737E2BBEE99F36AF50FD4142E5EB464FF9 (void);
// 0x000002A5 System.Void Unity.Barracuda.InnerLoop::GreaterEqualInnerLoop(System.Int64)
extern void InnerLoop_GreaterEqualInnerLoop_mD68F7CD3E7E8A9D44946012682802CB206BAEC77 (void);
// 0x000002A6 System.Void Unity.Barracuda.InnerLoop::LessInnerLoop(System.Int64)
extern void InnerLoop_LessInnerLoop_m7819C18D9E24A32C1EAB686D58D2CB1CA521E20D (void);
// 0x000002A7 System.Void Unity.Barracuda.InnerLoop::LessEqualInnerLoop(System.Int64)
extern void InnerLoop_LessEqualInnerLoop_m3C51F5943DC6F348B6AF3C74F7AE46CF301247EE (void);
// 0x000002A8 System.Void Unity.Barracuda.InnerLoop::EqualInnerLoop(System.Int64)
extern void InnerLoop_EqualInnerLoop_mF6D190F57084921F179E93BA93641C706A82F3EF (void);
// 0x000002A9 System.Void Unity.Barracuda.InnerLoop::LogicalOrInnerLoop(System.Int64)
extern void InnerLoop_LogicalOrInnerLoop_m8B5E75F1587185A822900432A809524417D57D75 (void);
// 0x000002AA System.Void Unity.Barracuda.InnerLoop::LogicalAndInnerLoop(System.Int64)
extern void InnerLoop_LogicalAndInnerLoop_m9381EF4B98D3122F6A0009B4DDB5A442DE974E61 (void);
// 0x000002AB System.Void Unity.Barracuda.InnerLoop::LogicalXorInnerLoop(System.Int64)
extern void InnerLoop_LogicalXorInnerLoop_m9C5CE255FAF69DC9EAB8BECF1C983659340DF19F (void);
// 0x000002AC System.Void Unity.Barracuda.InnerLoop::AddInnerLoopNoBroadcast(System.Int64)
extern void InnerLoop_AddInnerLoopNoBroadcast_m77A1E67E3A35CAAF81B1D3EAE6C193FEFED42780 (void);
// 0x000002AD System.Void Unity.Barracuda.InnerLoop::SubInnerLoopNoBroadcast(System.Int64)
extern void InnerLoop_SubInnerLoopNoBroadcast_m5DBE9FF71C71A0D6A0156D81DEC93F65B4BFAA57 (void);
// 0x000002AE System.Void Unity.Barracuda.InnerLoop::MulInnerLoopNoBroadcast(System.Int64)
extern void InnerLoop_MulInnerLoopNoBroadcast_m60EEA3F7FE00D19314D182C2940A6E1393346ADF (void);
// 0x000002AF System.Void Unity.Barracuda.InnerLoop::DivInnerLoopNoBroadcast(System.Int64)
extern void InnerLoop_DivInnerLoopNoBroadcast_m1E5A803A3932AC8A9B31DB6BFAB5FFD87FD86D64 (void);
// 0x000002B0 System.Void Unity.Barracuda.InnerLoop::MinInnerLoopNoBroadcast(System.Int64)
extern void InnerLoop_MinInnerLoopNoBroadcast_m21C0A308BB600E4F26448D78EDE009C72103980A (void);
// 0x000002B1 System.Void Unity.Barracuda.InnerLoop::MaxInnerLoopNoBroadcast(System.Int64)
extern void InnerLoop_MaxInnerLoopNoBroadcast_mE3063A8360BA92ABFBF4B1E32B62CC2E8663403F (void);
// 0x000002B2 System.Void Unity.Barracuda.InnerLoop::GreaterInnerLoopNoBroadcast(System.Int64)
extern void InnerLoop_GreaterInnerLoopNoBroadcast_mA93745B07D3148A4788B78BEA548C8A611D00D6F (void);
// 0x000002B3 System.Void Unity.Barracuda.InnerLoop::GreaterEqualInnerLoopNoBroadcast(System.Int64)
extern void InnerLoop_GreaterEqualInnerLoopNoBroadcast_m3DB7AD0D04279DA7CEA5840779C5C4320E3D832F (void);
// 0x000002B4 System.Void Unity.Barracuda.InnerLoop::LessInnerLoopNoBroadcast(System.Int64)
extern void InnerLoop_LessInnerLoopNoBroadcast_m4ED37B7AF3BDEA945F8D7D0AE6D2B466EBDF3B25 (void);
// 0x000002B5 System.Void Unity.Barracuda.InnerLoop::LessEqualInnerLoopNoBroadcast(System.Int64)
extern void InnerLoop_LessEqualInnerLoopNoBroadcast_m23BE76E171F0CFA7CBF2282C1B43A3E149050476 (void);
// 0x000002B6 System.Void Unity.Barracuda.InnerLoop::EqualInnerLoopNoBroadcast(System.Int64)
extern void InnerLoop_EqualInnerLoopNoBroadcast_m0432EE33A0CF7ACD2893486EEC80F430302862AB (void);
// 0x000002B7 System.Void Unity.Barracuda.InnerLoop::LogicalOrInnerLoopNoBroadcast(System.Int64)
extern void InnerLoop_LogicalOrInnerLoopNoBroadcast_mB5AF989DC1D49FE3820FADF27D8F0F9E648A2371 (void);
// 0x000002B8 System.Void Unity.Barracuda.InnerLoop::LogicalAndInnerLoopNoBroadcast(System.Int64)
extern void InnerLoop_LogicalAndInnerLoopNoBroadcast_m655FBFBF9AF0DCF9EFCF68960491F4C8AB33C690 (void);
// 0x000002B9 System.Void Unity.Barracuda.InnerLoop::LogicalXorInnerLoopNoBroadcast(System.Int64)
extern void InnerLoop_LogicalXorInnerLoopNoBroadcast_m10BA57E05BC8222DBBD4092F423643B21FCF29CA (void);
// 0x000002BA System.Void Unity.Barracuda.InnerLoop::LogicalNotInnerLoop(System.Int64)
extern void InnerLoop_LogicalNotInnerLoop_mEE46675172507DAC63089E5612C57C5A336725C7 (void);
// 0x000002BB System.Void Unity.Barracuda.InnerLoop::ClampHWToTensorShape(Unity.Barracuda.TensorShape,System.Int32&,System.Int32&)
extern void InnerLoop_ClampHWToTensorShape_mB986266215052B0B045D0D1D4B9F04304BBB3D2A (void);
// 0x000002BC System.Void Unity.Barracuda.InnerLoop::Border2DInnerLoop(System.Int64)
extern void InnerLoop_Border2DInnerLoop_mE944DE5A1E5CF7978D208194D9FD7B9173C517A0 (void);
// 0x000002BD System.Void Unity.Barracuda.InnerLoop::Pad2DEdgeInnerLoop(System.Int64)
extern void InnerLoop_Pad2DEdgeInnerLoop_m00FB78B4598E355379B508B4183C1EA0DDA2D292 (void);
// 0x000002BE System.Void Unity.Barracuda.InnerLoop::Pad2DReflectInnerLoop(System.Int64)
extern void InnerLoop_Pad2DReflectInnerLoop_mC42A5E2CC4499AFA10A33201D7FF381A64D987A6 (void);
// 0x000002BF System.Void Unity.Barracuda.InnerLoop::Pad2DSymmetricInnerLoop(System.Int64)
extern void InnerLoop_Pad2DSymmetricInnerLoop_mAE775C4156BD6103FB1248FE0FE3843C034BE130 (void);
// 0x000002C0 System.Void Unity.Barracuda.InnerLoop::ScaleBiasInnerLoop(System.Int64)
extern void InnerLoop_ScaleBiasInnerLoop_m8CEC56810B07E101F54462BB4192A3AAA79A660F (void);
// 0x000002C1 System.Single Unity.Barracuda.InnerLoop::Add(System.Single,System.Single)
extern void InnerLoop_Add_m6CE5A35EFBFAF0B0787BCB3E90D235958673712D (void);
// 0x000002C2 System.Single Unity.Barracuda.InnerLoop::Sub(System.Single,System.Single)
extern void InnerLoop_Sub_mD32CBAAE90EAF3FDDAC623EF045E65803537BF2A (void);
// 0x000002C3 System.Single Unity.Barracuda.InnerLoop::Mul(System.Single,System.Single)
extern void InnerLoop_Mul_m627C80BA5B8A2E68C4BCFC1FF0D0981988DB9E62 (void);
// 0x000002C4 System.Single Unity.Barracuda.InnerLoop::Div(System.Single,System.Single)
extern void InnerLoop_Div_m58B275BFBE93264F62639A321447875A1A5666E3 (void);
// 0x000002C5 System.Single Unity.Barracuda.InnerLoop::Min(System.Single,System.Single)
extern void InnerLoop_Min_mDE58800F4D137041F0ABFFE7FEC4BE67BC6D3803 (void);
// 0x000002C6 System.Single Unity.Barracuda.InnerLoop::Max(System.Single,System.Single)
extern void InnerLoop_Max_m4B3ED6B7CB26CB9AE84431BEA9ACEF30353F5A74 (void);
// 0x000002C7 System.Single Unity.Barracuda.InnerLoop::Greater(System.Single,System.Single)
extern void InnerLoop_Greater_m773474E33A1DA96988A44426762F4787B4D5AFEF (void);
// 0x000002C8 System.Single Unity.Barracuda.InnerLoop::GreaterEqual(System.Single,System.Single)
extern void InnerLoop_GreaterEqual_m8425BDF77E962AD3BED9D0D50423F4D0150141F8 (void);
// 0x000002C9 System.Single Unity.Barracuda.InnerLoop::Less(System.Single,System.Single)
extern void InnerLoop_Less_m825C4D7027A719E0D967F8244F7DFEE0DC415ED8 (void);
// 0x000002CA System.Single Unity.Barracuda.InnerLoop::LessEqual(System.Single,System.Single)
extern void InnerLoop_LessEqual_mEC07F6D8E485F19A7BCF9D6FB7AB353F46F691E9 (void);
// 0x000002CB System.Single Unity.Barracuda.InnerLoop::Equal(System.Single,System.Single)
extern void InnerLoop_Equal_m27774D798A0917B7E5FDD4520AD81B6DB8622D7C (void);
// 0x000002CC System.Single Unity.Barracuda.InnerLoop::LogicalOr(System.Single,System.Single)
extern void InnerLoop_LogicalOr_mEE8EF0F19D86A0245051CCC58E3F2E84E1244E64 (void);
// 0x000002CD System.Single Unity.Barracuda.InnerLoop::LogicalAnd(System.Single,System.Single)
extern void InnerLoop_LogicalAnd_m508D50D748B25125B3000DE8492EF294E5E8D0BF (void);
// 0x000002CE System.Single Unity.Barracuda.InnerLoop::LogicalXor(System.Single,System.Single)
extern void InnerLoop_LogicalXor_m8E5ADC2EB9D7BBF45D4B5F7D35C054D4F75B400B (void);
// 0x000002CF System.Single Unity.Barracuda.InnerLoop::LogicalNot(System.Single)
extern void InnerLoop_LogicalNot_m6FB54F2F6BF3DB2789E4BE949EE39F87502F58CF (void);
// 0x000002D0 System.Void Unity.Barracuda.CompareOps::.ctor(Unity.Barracuda.IOps,Unity.Barracuda.IOps,Unity.Barracuda.CompareOpsUtils_LogLevel,System.Single)
extern void CompareOps__ctor_mF10617D0089E412C5BDD5AF3E5ABB12CC280ABD0 (void);
// 0x000002D1 System.Void Unity.Barracuda.CompareOps::PrepareModel(Unity.Barracuda.Model,System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.TensorShape>)
extern void CompareOps_PrepareModel_mE0E65E9FA6BBCDF99C482B6673922507F880FCCF (void);
// 0x000002D2 System.Void Unity.Barracuda.CompareOps::PreExecuteLayer(Unity.Barracuda.Layer,Unity.Barracuda.Tensor[])
extern void CompareOps_PreExecuteLayer_m3103D06DB2F104E5D7B0FD10AC248C2546E93E36 (void);
// 0x000002D3 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.MatMul(Unity.Barracuda.Tensor,System.Boolean,Unity.Barracuda.Tensor,System.Boolean)
extern void CompareOps_Unity_Barracuda_IOps_MatMul_m68F44A5384BBE6870953AF57E7F292CC092DE464 (void);
// 0x000002D4 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Dense(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Layer_FusedActivation)
extern void CompareOps_Unity_Barracuda_IOps_Dense_m08C19D5F9AE9251038F3941AB6A057DD726BC865 (void);
// 0x000002D5 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Conv2D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer_FusedActivation)
extern void CompareOps_Unity_Barracuda_IOps_Conv2D_m7DCAD4AEAAC70DF9E0040758BD5E55C28EF92287 (void);
// 0x000002D6 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.DepthwiseConv2D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer_FusedActivation)
extern void CompareOps_Unity_Barracuda_IOps_DepthwiseConv2D_mDE75A626B0B79800D3EBA4B9F5C6B413C9676F5B (void);
// 0x000002D7 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Conv2DTrans(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[],Unity.Barracuda.Layer_FusedActivation)
extern void CompareOps_Unity_Barracuda_IOps_Conv2DTrans_mE836BEE8497025F433289850AAE65A4EAC8433E1 (void);
// 0x000002D8 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Upsample2D(Unity.Barracuda.Tensor,System.Int32[],System.Boolean)
extern void CompareOps_Unity_Barracuda_IOps_Upsample2D_m67B1FDC472E8A4444946B5909FBF4D638A7D8741 (void);
// 0x000002D9 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Resample2D(Unity.Barracuda.Tensor,System.Int32[],System.Boolean)
extern void CompareOps_Unity_Barracuda_IOps_Resample2D_m3581220FE6F11BE8368407147C78273C6AA5D04C (void);
// 0x000002DA Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.DepthToSpace(Unity.Barracuda.Tensor,System.Int32[],Unity.Barracuda.Layer_DepthToSpaceMode)
extern void CompareOps_Unity_Barracuda_IOps_DepthToSpace_m7D20485EB05B02E36555E828661B59B883B85537 (void);
// 0x000002DB Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.SpaceToDepth(Unity.Barracuda.Tensor,System.Int32[])
extern void CompareOps_Unity_Barracuda_IOps_SpaceToDepth_m94D426BC5F02CED0FF565C4BECA3964EF7BE6929 (void);
// 0x000002DC Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.MaxPool2D(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void CompareOps_Unity_Barracuda_IOps_MaxPool2D_mE5F4D6FE5F735F3D06E2C6180854C839B6B1230B (void);
// 0x000002DD Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.AvgPool2D(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void CompareOps_Unity_Barracuda_IOps_AvgPool2D_mBAEB450112EAC9EF1EC5755EDB6BDD0A6EC2B042 (void);
// 0x000002DE Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.GlobalMaxPool2D(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_GlobalMaxPool2D_m589C342424A7B06972ACA901268D4DD4640AA52E (void);
// 0x000002DF Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.GlobalAvgPool2D(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_GlobalAvgPool2D_m93F4547EBB671B9F1D7B3A8EB6BC5B24C12D2558 (void);
// 0x000002E0 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.GlobalAvgVariancePool2D(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_GlobalAvgVariancePool2D_m459073A09343BFDB89E5AFA28723CF06B4F55982 (void);
// 0x000002E1 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Border2D(Unity.Barracuda.Tensor,System.Int32[],System.Single)
extern void CompareOps_Unity_Barracuda_IOps_Border2D_m4805F511748275A4A720043756C72F9AFE713BDF (void);
// 0x000002E2 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Pad2DReflect(Unity.Barracuda.Tensor,System.Int32[])
extern void CompareOps_Unity_Barracuda_IOps_Pad2DReflect_m6F7F7AFC107781BB148FA9C72B543914941B7C5A (void);
// 0x000002E3 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Pad2DSymmetric(Unity.Barracuda.Tensor,System.Int32[])
extern void CompareOps_Unity_Barracuda_IOps_Pad2DSymmetric_m381FBEB7393ADDAA2FE08F1EFE0C686BB388EF0C (void);
// 0x000002E4 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Pad2DEdge(Unity.Barracuda.Tensor,System.Int32[])
extern void CompareOps_Unity_Barracuda_IOps_Pad2DEdge_m0E4BDF9E40E69D66577224E372B34B5685109367 (void);
// 0x000002E5 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.ScaleBias(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_ScaleBias_m5C7918C2C91B7D6D9A9EC67E2D5E68376DF30CE2 (void);
// 0x000002E6 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Normalization(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32,System.Int32,System.Single,Unity.Barracuda.Layer_FusedActivation)
extern void CompareOps_Unity_Barracuda_IOps_Normalization_m2A8D998E0D6AF789DEAD7A816E05B265B1E6E1F8 (void);
// 0x000002E7 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.LRN(Unity.Barracuda.Tensor,System.Single,System.Single,System.Single,System.Int32)
extern void CompareOps_Unity_Barracuda_IOps_LRN_m76302081147EC2B1BBFE154B3460953BAA54F46E (void);
// 0x000002E8 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Dropout(Unity.Barracuda.Tensor,System.Single)
extern void CompareOps_Unity_Barracuda_IOps_Dropout_m32128A452965B3B243F81070139502F1B0AC34FE (void);
// 0x000002E9 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.RandomNormal(Unity.Barracuda.TensorShape,System.Single,System.Single,System.Int32)
extern void CompareOps_Unity_Barracuda_IOps_RandomNormal_mFA771DF48372DE838C1A8F6CB1F8E755B152C13C (void);
// 0x000002EA Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.RandomUniform(Unity.Barracuda.TensorShape,System.Single,System.Single,System.Int32)
extern void CompareOps_Unity_Barracuda_IOps_RandomUniform_m07A8CBDDBC6E4FFDE2FBC2ED645B329291D4682B (void);
// 0x000002EB Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Multinomial(Unity.Barracuda.Tensor,System.Int32,System.Int32)
extern void CompareOps_Unity_Barracuda_IOps_Multinomial_m8B3310FB4FA55C481F5CDF3541B5C24A92F2E050 (void);
// 0x000002EC Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.OneHot(Unity.Barracuda.Tensor,System.Int32,System.Single,System.Single)
extern void CompareOps_Unity_Barracuda_IOps_OneHot_m4BEA1F3E8044974D2AE379EA442C5E1B5AA9B1C7 (void);
// 0x000002ED Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Relu(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Relu_m4A6FB05C4BCA6A6BE8EA52DE83E6C9B24CA169C0 (void);
// 0x000002EE Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Softmax(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Softmax_mDBF30ACFB18BAB93993B1C73B50E9722A0772D4C (void);
// 0x000002EF Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.LogSoftmax(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_LogSoftmax_mE89CBB03412F2451B32149A7C11F1C667C27FD19 (void);
// 0x000002F0 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Tanh(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Tanh_m3275D1B0BC1D6B1DB880BF1C850A32772B6F94C3 (void);
// 0x000002F1 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Sigmoid(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Sigmoid_mFDA61EA9956C2835977726FCE929E0DF7D1614D1 (void);
// 0x000002F2 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Elu(Unity.Barracuda.Tensor,System.Single)
extern void CompareOps_Unity_Barracuda_IOps_Elu_m55777969C0280AE369D7C1E64CA66907830C8C29 (void);
// 0x000002F3 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Relu6(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Relu6_m74A10007DEF16C78246776E9DE2EF1CA3122A970 (void);
// 0x000002F4 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.LeakyRelu(Unity.Barracuda.Tensor,System.Single)
extern void CompareOps_Unity_Barracuda_IOps_LeakyRelu_m73AB8008A1E71C594A2C1AFA74E0A988B8AC3B20 (void);
// 0x000002F5 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Selu(Unity.Barracuda.Tensor,System.Single,System.Single)
extern void CompareOps_Unity_Barracuda_IOps_Selu_mFAC0CEEF98D465837F771CDD24B3BAA9FB0953BE (void);
// 0x000002F6 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.PRelu(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_PRelu_m0E63F096B3B41B39C463A0D71030B232C8B9A88B (void);
// 0x000002F7 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Swish(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Swish_mD9FD1F083BE7B020242AB3E9FE6FC2CF927DC648 (void);
// 0x000002F8 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Abs(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Abs_m1F13ACE56A4C7E73D63A54DEF8A42016D7820478 (void);
// 0x000002F9 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Neg(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Neg_mA40FFB39943B09B6713E4E1EF921E5EDBD8B5429 (void);
// 0x000002FA Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Ceil(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Ceil_m75046621BD59C57C05148831CFA1E71E2DE8605A (void);
// 0x000002FB Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Clip(Unity.Barracuda.Tensor,System.Single,System.Single)
extern void CompareOps_Unity_Barracuda_IOps_Clip_m17C5C0A8B3B254E0AF2DA6A48706A6C2CB21A80D (void);
// 0x000002FC Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Floor(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Floor_m9530B7E1A2AC8629DAA39911C41926A00AE432B3 (void);
// 0x000002FD Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Reciprocal(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Reciprocal_mE75B1182D359292C95A95CE6E33C658F477D0927 (void);
// 0x000002FE Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Pow(Unity.Barracuda.Tensor,System.Single)
extern void CompareOps_Unity_Barracuda_IOps_Pow_m2B6B368E04A25ABF31662B6DA2A5E17E5C8F1D6E (void);
// 0x000002FF Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Exp(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Exp_m9D27B05566ADBEE06905BA86E647C349A728939C (void);
// 0x00000300 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Log(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Log_mD24A84BBA075856AE56369239ABF4931DAABFA43 (void);
// 0x00000301 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Sqrt(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Sqrt_m242C469D62CEFAB7171908999499ED88EC26E209 (void);
// 0x00000302 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Add(Unity.Barracuda.Tensor[])
extern void CompareOps_Unity_Barracuda_IOps_Add_m1FA781DE74205C426C9FDFE4DD7299BF0CC72807 (void);
// 0x00000303 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Sub(Unity.Barracuda.Tensor[])
extern void CompareOps_Unity_Barracuda_IOps_Sub_mB7D37D9C0C542010409C47D6D6650428FEB694AF (void);
// 0x00000304 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Mul(Unity.Barracuda.Tensor[])
extern void CompareOps_Unity_Barracuda_IOps_Mul_m28FB7C47E26EB6D3885B0CBC789BE81B3BF09AD1 (void);
// 0x00000305 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Div(Unity.Barracuda.Tensor[])
extern void CompareOps_Unity_Barracuda_IOps_Div_mEB85105D426B5C27A8E82136A6C7A2998FD700A7 (void);
// 0x00000306 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Pow(Unity.Barracuda.Tensor[])
extern void CompareOps_Unity_Barracuda_IOps_Pow_m3225837C52C672E18CCD0ECEF8D0CFA0DECE8557 (void);
// 0x00000307 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Min(Unity.Barracuda.Tensor[])
extern void CompareOps_Unity_Barracuda_IOps_Min_m65D83B977E12701660CDC3F891462CB2CF8E4C5E (void);
// 0x00000308 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Max(Unity.Barracuda.Tensor[])
extern void CompareOps_Unity_Barracuda_IOps_Max_mCDAA6D52167D23A9F5AD6B56667A932BD88EC647 (void);
// 0x00000309 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Mean(Unity.Barracuda.Tensor[])
extern void CompareOps_Unity_Barracuda_IOps_Mean_m97451FCCA9EAB9CE7745E9F7FFB50D27824882A9 (void);
// 0x0000030A Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.ReduceMax(Unity.Barracuda.Tensor,System.Int32)
extern void CompareOps_Unity_Barracuda_IOps_ReduceMax_m85768299E9EA9B72D610950C70B84F5102680BA9 (void);
// 0x0000030B Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.ReduceMean(Unity.Barracuda.Tensor,System.Int32)
extern void CompareOps_Unity_Barracuda_IOps_ReduceMean_mA8E7AFBF048B7FF22E4C661C6ED25060E5E7DBBF (void);
// 0x0000030C Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.ReduceMin(Unity.Barracuda.Tensor,System.Int32)
extern void CompareOps_Unity_Barracuda_IOps_ReduceMin_m966C8492CF79C4BB85F688D2EC733682E9F3565D (void);
// 0x0000030D Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.ReduceProd(Unity.Barracuda.Tensor,System.Int32)
extern void CompareOps_Unity_Barracuda_IOps_ReduceProd_mC37B01B8CC0EAB32292C606C917B5E23DEC18C05 (void);
// 0x0000030E Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.ReduceSum(Unity.Barracuda.Tensor,System.Int32)
extern void CompareOps_Unity_Barracuda_IOps_ReduceSum_m7B23F0F1B6461BEB54B6A8B7F6DAAAC771CFB30A (void);
// 0x0000030F Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Greater(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Greater_m02B76F1B27F5B82CB8709A21D6B6D0E0F0482898 (void);
// 0x00000310 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.GreaterEqual(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_GreaterEqual_m6A5C5F1572B30ECF77607DC9F6DA4922B27205C1 (void);
// 0x00000311 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Less(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Less_mC2B8F09EA311C27FD96B694B97A3060B6C850F61 (void);
// 0x00000312 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.LessEqual(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_LessEqual_m6685241DD92CFECD2963E880BF0ABB8658674CAA (void);
// 0x00000313 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Equal(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Equal_m76ADF3006091B380F7561432BCA9E8473F10C0BC (void);
// 0x00000314 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.LogicalOr(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_LogicalOr_mC58BB8256FED6F1C2ADF8700EC5CE723FA5C3234 (void);
// 0x00000315 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.LogicalAnd(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_LogicalAnd_m992BA743AE9E28057B4949A422E0FDF85A4148F6 (void);
// 0x00000316 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.LogicalXor(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_LogicalXor_mEBD1D0F7695CA1D718A5C11A59E8608855EAD9FA (void);
// 0x00000317 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.LogicalNot(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_LogicalNot_mA029BC00B852B3F7644D3F4E81D6CC7FEC7614CB (void);
// 0x00000318 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Flatten(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Flatten_m148CB5A20C659C44173B6BF29324DED213D8FD9F (void);
// 0x00000319 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Reshape(Unity.Barracuda.Tensor,Unity.Barracuda.TensorShape)
extern void CompareOps_Unity_Barracuda_IOps_Reshape_mC097F0DE8C3183E6DCA7A3FC8414AEA30F08325B (void);
// 0x0000031A Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Expand(Unity.Barracuda.Tensor,Unity.Barracuda.TensorShape)
extern void CompareOps_Unity_Barracuda_IOps_Expand_mB51F531DDF6CF6EA8FA70AC3650AFFA5776AE3A1 (void);
// 0x0000031B Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Transpose(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Transpose_mB6EAE408FA2E0F03B61354EFD60441933DD9ADBF (void);
// 0x0000031C Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Gather(Unity.Barracuda.Tensor[],System.Int32)
extern void CompareOps_Unity_Barracuda_IOps_Gather_m34C29B02FD437CA549C659C0A1821AF56B96A63B (void);
// 0x0000031D Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Concat(Unity.Barracuda.Tensor[],System.Int32)
extern void CompareOps_Unity_Barracuda_IOps_Concat_m07237E535C07AF0E9F59B8D7464F6F52C7939945 (void);
// 0x0000031E Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.StridedSlice(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void CompareOps_Unity_Barracuda_IOps_StridedSlice_m20D5270BF23448CE2E685185AAE3825D05D9A96D (void);
// 0x0000031F Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Tile(Unity.Barracuda.Tensor,System.Int32[])
extern void CompareOps_Unity_Barracuda_IOps_Tile_m5477262A1026EA57F3FD6889B7AAECBC15833CA0 (void);
// 0x00000320 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Copy(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Copy_m09785E6A1B97BF1F303B6E9ECA32E23E1FA0B9E1 (void);
// 0x00000321 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Prepare(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Prepare_m3DBD6FE62BF91321134ABBED93F0D1981AC32A05 (void);
// 0x00000322 System.Void Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.ResetAllocator(System.Boolean)
extern void CompareOps_Unity_Barracuda_IOps_ResetAllocator_m6D4D7F3780D8A455CB2B5213B64CB1B0B7A3AE89 (void);
// 0x00000323 System.Void Unity.Barracuda.CompareOps::CheckSame(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Layer_Type,Unity.Barracuda.Tensor[])
extern void CompareOps_CheckSame_mFE19292E773DBAC256F0CB78124B0CF3BFF3689D (void);
// 0x00000324 System.Void Unity.Barracuda.CompareOps::CheckSame(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.String,Unity.Barracuda.Tensor[])
extern void CompareOps_CheckSame_m79C34BBECF56995EEF60B0CA65270B3302EE1F19 (void);
// 0x00000325 System.Void Unity.Barracuda.CompareOpsUtils::CheckSame(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Layer_Type,Unity.Barracuda.CompareOpsUtils_LogLevel,System.Single,Unity.Barracuda.Tensor[])
extern void CompareOpsUtils_CheckSame_m6A982E9AD32F4E7DFE619E70BF00100D3550E4F8 (void);
// 0x00000326 System.Void Unity.Barracuda.CompareOpsUtils::CheckSame(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.String,Unity.Barracuda.CompareOpsUtils_LogLevel,System.Single,Unity.Barracuda.Tensor[])
extern void CompareOpsUtils_CheckSame_m1F769D021C170E9984A5AB463076DA1827E397E0 (void);
// 0x00000327 System.Void Unity.Barracuda.CompareOpsUtils::CheckApproximately(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32,System.Single,Unity.Barracuda.Layer_Type,Unity.Barracuda.CompareOpsUtils_LogLevel)
extern void CompareOpsUtils_CheckApproximately_m6FFA9C5C1803F562CE3E5968536EF269DE5009FA (void);
// 0x00000328 System.Void Unity.Barracuda.CompareOpsUtils::CheckApproximately(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32,System.Single,System.String,Unity.Barracuda.CompareOpsUtils_LogLevel)
extern void CompareOpsUtils_CheckApproximately_mAFDE7A4BD3F3F161DA15AC17D669853F362B0E94 (void);
// 0x00000329 System.Void Unity.Barracuda.CompareOpsUtils::.ctor()
extern void CompareOpsUtils__ctor_mE9749E8495C403B2396E2147EE25F5F9184CDB17 (void);
// 0x0000032A System.Void Unity.Barracuda.ComputeInfo::.cctor()
extern void ComputeInfo__cctor_m94E2934EF07E37C2EF20706B601887D9AEC2C0B8 (void);
// 0x0000032B System.Void Unity.Barracuda.ComputeInfo::.ctor()
extern void ComputeInfo__ctor_m2A7E9E569A01AA289888FF1C98848F6161B8D65B (void);
// 0x0000032C System.Void Unity.Barracuda.ComputeShaderSingleton::.ctor()
extern void ComputeShaderSingleton__ctor_m07D417B40D54701EDBCB6102C3D91036D7DB3F55 (void);
// 0x0000032D Unity.Barracuda.ComputeShaderSingleton Unity.Barracuda.ComputeShaderSingleton::get_Instance()
extern void ComputeShaderSingleton_get_Instance_m7C86E3474506EA4F77C61E9D450AFE5C2AD282F6 (void);
// 0x0000032E UnityEngine.ComputeShader Unity.Barracuda.ComputeShaderSingleton::LoadIf(System.Boolean,System.String)
extern void ComputeShaderSingleton_LoadIf_m44C1A1E3E3540D62C5D2B0AC4118AA8D19D8C4CD (void);
// 0x0000032F System.Void Unity.Barracuda.ComputeShaderSingleton::LoadIf(System.Boolean,System.String,System.Collections.Generic.List`1<UnityEngine.ComputeShader>)
extern void ComputeShaderSingleton_LoadIf_mE007C23118BF8E1305F2D75CC8160C0BA39DD959 (void);
// 0x00000330 System.Boolean Unity.Barracuda.ComputeShaderSingleton::get_supported()
extern void ComputeShaderSingleton_get_supported_m38DD5FD18CB37B87A1D44D5E39BE519DA8E65C13 (void);
// 0x00000331 System.Void Unity.Barracuda.ComputeShaderSingleton::.cctor()
extern void ComputeShaderSingleton__cctor_mC5EE3111E820B32F908EC7A3E21F91293E92F776 (void);
// 0x00000332 System.Void Unity.Barracuda.GenericWorker::.ctor(Unity.Barracuda.Model,Unity.Barracuda.IOps,Unity.Barracuda.IVars,System.Boolean)
extern void GenericWorker__ctor_mA61AA5C78E34546D44BA40E71238ED04FFE9149F (void);
// 0x00000333 System.Void Unity.Barracuda.GenericWorker::Finalize()
extern void GenericWorker_Finalize_mC2C7AF277C8D6E2862AED29CDA707237F5CF9003 (void);
// 0x00000334 System.Void Unity.Barracuda.GenericWorker::ResetAllocatorIfRequested()
extern void GenericWorker_ResetAllocatorIfRequested_m672767EB92B4E925E8FEDA1A61EB4657F12119A0 (void);
// 0x00000335 System.Void Unity.Barracuda.GenericWorker::Dispose()
extern void GenericWorker_Dispose_m0012E0F90F7943D8B48CCBE440C3EF0F0ABA6887 (void);
// 0x00000336 System.Void Unity.Barracuda.GenericWorker::PrepareForInput(System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.TensorShape>)
extern void GenericWorker_PrepareForInput_mFF97EA7831B4442C5AF12EC8172915BDB8D561A4 (void);
// 0x00000337 System.Void Unity.Barracuda.GenericWorker::SetInput(System.String,Unity.Barracuda.Tensor)
extern void GenericWorker_SetInput_m0ECD3877EE3E576C147BDE1FC09D354F6E3D4148 (void);
// 0x00000338 System.Void Unity.Barracuda.GenericWorker::SetInput(Unity.Barracuda.Tensor)
extern void GenericWorker_SetInput_m0F009C8D6399199283370E9EAEF8069CCF1E2CB4 (void);
// 0x00000339 Unity.Barracuda.IWorker Unity.Barracuda.GenericWorker::Execute(System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.Tensor>)
extern void GenericWorker_Execute_m70808DE2B4D49EAFF6D3F26FD155CBBBCF86DD46 (void);
// 0x0000033A Unity.Barracuda.IWorker Unity.Barracuda.GenericWorker::Execute(Unity.Barracuda.Tensor)
extern void GenericWorker_Execute_m83570CD8870A9B8A1338B41511EF70C475B4103B (void);
// 0x0000033B Unity.Barracuda.IWorker Unity.Barracuda.GenericWorker::Execute()
extern void GenericWorker_Execute_m0234B735C8B89D86EFA2FE0378595AFAA9C15F35 (void);
// 0x0000033C System.Collections.IEnumerator Unity.Barracuda.GenericWorker::StartManualSchedule(System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.Tensor>)
extern void GenericWorker_StartManualSchedule_mE4D226041AFAEC4CF73C1D415754973BE0872272 (void);
// 0x0000033D System.Void Unity.Barracuda.GenericWorker::FlushSchedule(System.Boolean)
extern void GenericWorker_FlushSchedule_m6D000F9328A8417DD50169BC650FB115B6D1E77E (void);
// 0x0000033E System.Collections.IEnumerator Unity.Barracuda.GenericWorker::StartManualSchedule(Unity.Barracuda.Tensor)
extern void GenericWorker_StartManualSchedule_m33B9557D045CECCFF2176046921F8052B0052FFA (void);
// 0x0000033F System.Single Unity.Barracuda.GenericWorker::get_scheduleProgress()
extern void GenericWorker_get_scheduleProgress_m52465FD5AF1BE85D2BA102F908206B56DB3C8E41 (void);
// 0x00000340 Unity.Barracuda.Layer_FusedActivation Unity.Barracuda.GenericWorker::GetAndVerifyFusedActivation(Unity.Barracuda.Layer)
extern void GenericWorker_GetAndVerifyFusedActivation_mB30FD926881EB401DC4C983C601DB148DBE0512E (void);
// 0x00000341 System.Collections.IEnumerator Unity.Barracuda.GenericWorker::StartManualSchedule()
extern void GenericWorker_StartManualSchedule_m64CD73BD09915B2A9CB546BA09E3AD28CC74AEEA (void);
// 0x00000342 Unity.Barracuda.Tensor Unity.Barracuda.GenericWorker::PeekOutput()
extern void GenericWorker_PeekOutput_mBC5159E45AA8BD8C46CD0C185AEAE3AFE883E9E3 (void);
// 0x00000343 Unity.Barracuda.Tensor Unity.Barracuda.GenericWorker::PeekOutput(System.String)
extern void GenericWorker_PeekOutput_mC1C9D68B18BA6A28CA148A2633A0FC17E6475965 (void);
// 0x00000344 Unity.Barracuda.Tensor[] Unity.Barracuda.GenericWorker::PeekConstants(System.String)
extern void GenericWorker_PeekConstants_mF67A9BB775ADD2D7109F260B68738E8BC7130B49 (void);
// 0x00000345 System.String Unity.Barracuda.GenericWorker::Summary()
extern void GenericWorker_Summary_mC9D66934193647FB1660032D240810F1372907DC (void);
// 0x00000346 System.Void Unity.Barracuda.GenericVars::.ctor()
extern void GenericVars__ctor_m359BBEF245EE8DC058F6CF2F6A15C4B8B0FCFAE4 (void);
// 0x00000347 System.Void Unity.Barracuda.GenericVars::Finalize()
extern void GenericVars_Finalize_mA4865EBF81A697001F9636BF1C156952B62E0A47 (void);
// 0x00000348 System.Void Unity.Barracuda.GenericVars::Dispose()
extern void GenericVars_Dispose_mE7050043DE27B9D47060A327A11F339D67C595DA (void);
// 0x00000349 Unity.Barracuda.ITensorAllocator Unity.Barracuda.GenericVars::GetAllocator()
extern void GenericVars_GetAllocator_m0E51B888B68ECE6F35630D1E8EA55865ED89EE63 (void);
// 0x0000034A System.Boolean Unity.Barracuda.GenericVars::IsTensorOwnedByInternalAllocator(Unity.Barracuda.Tensor)
extern void GenericVars_IsTensorOwnedByInternalAllocator_mCDB2FB1E2D87FFD0297FDB2A86CF15DBBB2B1344 (void);
// 0x0000034B System.Boolean Unity.Barracuda.GenericVars::ValidateGlobalInputs(Unity.Barracuda.Model,System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.TensorShape>)
extern void GenericVars_ValidateGlobalInputs_mEADF37A0DD9E04064DE686752C19F90B90FEC74A (void);
// 0x0000034C Unity.Barracuda.Tensor[] Unity.Barracuda.GenericVars::PrepareLayerInputTensors(Unity.Barracuda.Model,Unity.Barracuda.Layer,Unity.Barracuda.IOps)
extern void GenericVars_PrepareLayerInputTensors_m3A0ECE08557DC09B8F6EE00624CD745929980CA6 (void);
// 0x0000034D System.Void Unity.Barracuda.GenericVars::SetInput(System.String,Unity.Barracuda.Tensor)
extern void GenericVars_SetInput_m122195CA13EC3892E455807B356BE0E791E69779 (void);
// 0x0000034E System.Void Unity.Barracuda.GenericVars::PrepareStorage(Unity.Barracuda.Model,Unity.Barracuda.IOps,System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.TensorShape>)
extern void GenericVars_PrepareStorage_m0F1725C429DA6084A94DB6D69251BECDB95D65A5 (void);
// 0x0000034F Unity.Barracuda.Tensor[] Unity.Barracuda.GenericVars::GatherInputs(Unity.Barracuda.Layer)
extern void GenericVars_GatherInputs_mAEEB32416086F3C3473DDED621DC070A5D6A5CE1 (void);
// 0x00000350 System.Void Unity.Barracuda.GenericVars::PrepareStorage(Unity.Barracuda.Layer)
extern void GenericVars_PrepareStorage_m88DE3DA0764AA9703F647452CFE32707E4B975E7 (void);
// 0x00000351 System.Void Unity.Barracuda.GenericVars::Store(Unity.Barracuda.Layer,Unity.Barracuda.Tensor)
extern void GenericVars_Store_mA5B3AC94D3A7D77C0827D1289F09B69013049E41 (void);
// 0x00000352 Unity.Barracuda.Tensor Unity.Barracuda.GenericVars::PeekOutput(System.String)
extern void GenericVars_PeekOutput_m32B08629D49696F79F608D77AD7B73E6EBD9890F (void);
// 0x00000353 Unity.Barracuda.Tensor[] Unity.Barracuda.GenericVars::PeekConstants(System.String)
extern void GenericVars_PeekConstants_mEB394CAD8AAE4B5D76DE897B8D4202D5602F6B6A (void);
// 0x00000354 System.Boolean Unity.Barracuda.GenericVarsWithReuse::get_layerRequiresStorage()
extern void GenericVarsWithReuse_get_layerRequiresStorage_m8CB7867BAD67928AD2EB78BEF5D4B8678F0318B3 (void);
// 0x00000355 Unity.Barracuda.Tensor Unity.Barracuda.GenericVarsWithReuse::get_temporary()
extern void GenericVarsWithReuse_get_temporary_m5F3908491AA1794209E98B252EBA1F303E1130D7 (void);
// 0x00000356 System.Void Unity.Barracuda.GenericVarsWithReuse::ReleaseTemporary()
extern void GenericVarsWithReuse_ReleaseTemporary_m4BE582B8B7831CE984A66696919DA8B5C18A9DC3 (void);
// 0x00000357 System.Void Unity.Barracuda.GenericVarsWithReuse::PrepareStorage(Unity.Barracuda.Model,Unity.Barracuda.IOps,System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.TensorShape>)
extern void GenericVarsWithReuse_PrepareStorage_mD3225A00D691825B9582EAD8095E2B66CCBD8E7D (void);
// 0x00000358 System.Void Unity.Barracuda.GenericVarsWithReuse::PrepareStorage(Unity.Barracuda.Layer)
extern void GenericVarsWithReuse_PrepareStorage_mED97C5FF62931FE218760EDF25982B3F67E01D19 (void);
// 0x00000359 System.Void Unity.Barracuda.GenericVarsWithReuse::Store(Unity.Barracuda.Layer,Unity.Barracuda.Tensor)
extern void GenericVarsWithReuse_Store_m151184B8E2837E31C03B670E26F7D86E5600C374 (void);
// 0x0000035A Unity.Barracuda.Tensor Unity.Barracuda.GenericVarsWithReuse::PeekOutput(System.String)
extern void GenericVarsWithReuse_PeekOutput_m8381549A997B0295CFC5E79DF50D2716FD72C560 (void);
// 0x0000035B System.Void Unity.Barracuda.GenericVarsWithReuse::.ctor()
extern void GenericVarsWithReuse__ctor_mDE564D7B04BDEE3E9F409DD140481C90131398F6 (void);
// 0x0000035C System.Void Unity.Barracuda.GenericVarsWithPreallocation::PrepareStorage(Unity.Barracuda.Model,Unity.Barracuda.IOps,System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.TensorShape>)
extern void GenericVarsWithPreallocation_PrepareStorage_m4EA12544BCE827064FB7FF374CEDB7B562D7EE9F (void);
// 0x0000035D Unity.Barracuda.ITensorAllocator Unity.Barracuda.GenericVarsWithPreallocation::GetAllocator()
extern void GenericVarsWithPreallocation_GetAllocator_m0727DE0BD21408427491E4EB1598FA06F50F0262 (void);
// 0x0000035E System.Boolean Unity.Barracuda.GenericVarsWithPreallocation::IsTensorOwnedByInternalAllocator(Unity.Barracuda.Tensor)
extern void GenericVarsWithPreallocation_IsTensorOwnedByInternalAllocator_mE37DB6740C46E044C8F260DF7BE98065C66EDC74 (void);
// 0x0000035F Unity.Barracuda.Tensor Unity.Barracuda.GenericVarsWithPreallocation::Alloc(Unity.Barracuda.TensorShape)
extern void GenericVarsWithPreallocation_Alloc_m2DA2269D59121A4FABB68DED42ECFE6F5B7BE934 (void);
// 0x00000360 Unity.Barracuda.Tensor Unity.Barracuda.GenericVarsWithPreallocation::Alloc(Unity.Barracuda.TensorShape,Unity.Barracuda.ITensorData)
extern void GenericVarsWithPreallocation_Alloc_mFA7672B65CD493AC6D12CFCA2BE168F9DA76C87B (void);
// 0x00000361 System.Void Unity.Barracuda.GenericVarsWithPreallocation::MoveToDevice(Unity.Barracuda.Tensor,Unity.Barracuda.ITensorData,Unity.Barracuda.ITensorData,System.Boolean)
extern void GenericVarsWithPreallocation_MoveToDevice_m736B58D9A8F58F8974DEDDE0825F77E3E22961BA (void);
// 0x00000362 System.Void Unity.Barracuda.GenericVarsWithPreallocation::Release(Unity.Barracuda.Tensor,System.Boolean)
extern void GenericVarsWithPreallocation_Release_m2BBEA86BCCF68918CB0C5154EE3CCC7D2D34EF3D (void);
// 0x00000363 System.Void Unity.Barracuda.GenericVarsWithPreallocation::WaiveOwnership(Unity.Barracuda.Tensor)
extern void GenericVarsWithPreallocation_WaiveOwnership_m859808E1A32808B1D47BB9DF5A2EFCEFA905BA13 (void);
// 0x00000364 System.Void Unity.Barracuda.GenericVarsWithPreallocation::Reset(System.Boolean)
extern void GenericVarsWithPreallocation_Reset_m891F0531A72EA8B5ECCDC594CF41516D57F331AB (void);
// 0x00000365 System.Int64 Unity.Barracuda.GenericVarsWithPreallocation::get_busyBytes()
extern void GenericVarsWithPreallocation_get_busyBytes_m4274AF083E69DE442084BD0F397A93AF04D2D898 (void);
// 0x00000366 System.Int64 Unity.Barracuda.GenericVarsWithPreallocation::get_freeBytes()
extern void GenericVarsWithPreallocation_get_freeBytes_m2B0FBE05370072561F71328AC71D8B3E952349EB (void);
// 0x00000367 System.Int64 Unity.Barracuda.GenericVarsWithPreallocation::get_totalBytes()
extern void GenericVarsWithPreallocation_get_totalBytes_m7386DBC7F780DD714E8E1E9C0855974DF4A62809 (void);
// 0x00000368 System.String Unity.Barracuda.GenericVarsWithPreallocation::ToString()
extern void GenericVarsWithPreallocation_ToString_mE9F559205693584E5CE9B9DA3218B4C0244CFB19 (void);
// 0x00000369 System.Void Unity.Barracuda.GenericVarsWithPreallocation::.ctor()
extern void GenericVarsWithPreallocation__ctor_mF5E7C203E1353206502BC76C96D45ECA14092B71 (void);
// 0x0000036A System.Void Unity.Barracuda.DefaultTensorAllocator::.ctor()
extern void DefaultTensorAllocator__ctor_m02BB93916A2F215C7D4B9B5D719C27BAC9DA0407 (void);
// 0x0000036B System.Void Unity.Barracuda.DefaultVars::.ctor()
extern void DefaultVars__ctor_m0946FAC7C2518D0AFD57B4A291E6FB0CAFFA79F7 (void);
// 0x0000036C System.Boolean Unity.Barracuda.CSharpBLAS::IsNative()
extern void CSharpBLAS_IsNative_mD936616694C05F485448817DEDC7EE473182E33B (void);
// 0x0000036D System.Boolean Unity.Barracuda.CSharpBLAS::IsCurrentPlatformSupported()
extern void CSharpBLAS_IsCurrentPlatformSupported_mAD942F5299F6C4B2322D69FAAD75C71EA5A4CE4E (void);
// 0x0000036E System.Void Unity.Barracuda.CSharpBLAS::SGEMM(System.Single*,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Int32,System.Boolean,System.Boolean)
extern void CSharpBLAS_SGEMM_m160DCB41EC366C9A8AAF388D80A2B45054B9421C (void);
// 0x0000036F Unity.Jobs.JobHandle Unity.Barracuda.CSharpBLAS::ScheduleSGEMM(Unity.Jobs.JobHandle,System.Single*,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Int32,System.Boolean,System.Boolean)
extern void CSharpBLAS_ScheduleSGEMM_mBB647E816096ADB22CB6E0D7209C549A76D28948 (void);
// 0x00000370 System.Void Unity.Barracuda.CSharpBLAS::.ctor()
extern void CSharpBLAS__ctor_m86D98BD73574625E21FB27A0C4B0604DC6C8709A (void);
// 0x00000371 System.Void Unity.Barracuda.MatrixUtils::CopyBlockWithPadding(System.Single*,System.Int32,System.Int32,System.Int32,System.Int32,System.Single[],System.Int32,System.Boolean)
extern void MatrixUtils_CopyBlockWithPadding_m571D7CA6044FDDF57EB327E41DC591D3FD2717E5 (void);
// 0x00000372 System.Void Unity.Barracuda.MatrixUtils::ClearFloatArray(System.Single*,System.Single,System.Int32)
extern void MatrixUtils_ClearFloatArray_m4AD0E453EF0991C609CF45F01E801537AB829B6E (void);
// 0x00000373 System.Void Unity.Barracuda.MatrixUtils::CopyFloatArray(System.Single*,System.Single*,System.Int32)
extern void MatrixUtils_CopyFloatArray_mCAADFCEDE7EDCD43C6F2251077A3872DD30237D8 (void);
// 0x00000374 System.Void Unity.Barracuda.MatrixUtils::CopyBlockWithPadding(System.Single*,System.Int32,System.Int32,System.Int32,System.Int32,System.Single*,System.Int32,System.Boolean)
extern void MatrixUtils_CopyBlockWithPadding_mC7AAADA9729C21C8AEB58E89B702A612F7FC144D (void);
// 0x00000375 System.Void Unity.Barracuda.MatrixUtils::CopyBlockWithPadding(System.Single[],System.Single*,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern void MatrixUtils_CopyBlockWithPadding_m393C81C0135E913F99C34B3D01868D3A47F95C67 (void);
// 0x00000376 System.Void Unity.Barracuda.MatrixUtils::CopyBlockWithPadding(System.Single*,System.Single*,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern void MatrixUtils_CopyBlockWithPadding_m0E3DFD626D920AAB0DE14AD9DF78B0338DF39CBC (void);
// 0x00000377 System.Void Unity.Barracuda.MatrixUtils::MultiplyBlockUnroll8xhPadded(System.Single*,System.Single*,System.Single*,System.Int32)
extern void MatrixUtils_MultiplyBlockUnroll8xhPadded_m25CB75341F75FAC6943C8F4610E6A2EB12FE26FB (void);
// 0x00000378 System.Void Unity.Barracuda.MatrixUtils::MultiplyBlockUnroll8xhParallelWithPadding(System.Single*,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Int32,System.Boolean,System.Boolean)
extern void MatrixUtils_MultiplyBlockUnroll8xhParallelWithPadding_m537A0B0024935707AC7073B3A97E427A5F835DD2 (void);
// 0x00000379 System.Void Unity.Barracuda.MatrixUtils::.ctor()
extern void MatrixUtils__ctor_m10D2065DA7E23D8BF71C1A636B783DE6AEE53E84 (void);
// 0x0000037A System.String Unity.Barracuda.ModelAnalyzer::GetDefaultInputName(Unity.Barracuda.Model)
extern void ModelAnalyzer_GetDefaultInputName_mFE8E46CB022C9FB9C4ED28B7195ED80CC0E5D3FD (void);
// 0x0000037B System.String Unity.Barracuda.ModelAnalyzer::GetDefaultOutputName(Unity.Barracuda.Model)
extern void ModelAnalyzer_GetDefaultOutputName_m1638CE1FEE4D473C01F734AA8103B6EEEDA37199 (void);
// 0x0000037C System.Nullable`1<Unity.Barracuda.TensorShape>[] Unity.Barracuda.ModelAnalyzer::ListTemporaryTensorShapes(Unity.Barracuda.Model,System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.TensorShape>)
extern void ModelAnalyzer_ListTemporaryTensorShapes_mF5D661D9139DDDB7BF4D343728325C03E6ABF3F3 (void);
// 0x0000037D System.Nullable`1<Unity.Barracuda.TensorShape>[] Unity.Barracuda.ModelAnalyzer::ListTemporaryTensorShapes(Unity.Barracuda.Model,System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.TensorShape>,System.Collections.Generic.IDictionary`2<System.String,System.Nullable`1<Unity.Barracuda.TensorShape>>&)
extern void ModelAnalyzer_ListTemporaryTensorShapes_m4BAA8B94D344F016B86A80DC8D38A1F5600D19A9 (void);
// 0x0000037E System.Boolean Unity.Barracuda.ModelAnalyzer::TryGetOutputTensorShape(Unity.Barracuda.Model,System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.TensorShape>,System.String,Unity.Barracuda.TensorShape&)
extern void ModelAnalyzer_TryGetOutputTensorShape_m8BDBABB0BA3143236C9A9C9B1BC18074F6D19397 (void);
// 0x0000037F System.Boolean Unity.Barracuda.ModelAnalyzer::TryGetOutputTensorShape(Unity.Barracuda.Model,System.String,Unity.Barracuda.TensorShape&)
extern void ModelAnalyzer_TryGetOutputTensorShape_mBB67AFB73BD815EC3837050DB2FF378CA6B15247 (void);
// 0x00000380 System.Collections.Generic.HashSet`1<Unity.Barracuda.Layer> Unity.Barracuda.ModelAnalyzer::FindLayersThatRequireStorage(Unity.Barracuda.Model)
extern void ModelAnalyzer_FindLayersThatRequireStorage_mE5D15FCEC8610CDA46B474CC6A09126B6C675500 (void);
// 0x00000381 System.Collections.Generic.HashSet`1<Unity.Barracuda.Layer> Unity.Barracuda.ModelAnalyzer::FindUpstreamLayers(Unity.Barracuda.Model,System.String[])
extern void ModelAnalyzer_FindUpstreamLayers_mB12100AA1E98B0BDE06F572D3676C73B17728AE5 (void);
// 0x00000382 Unity.Barracuda.TensorShape Unity.Barracuda.ModelAnalyzer::FindLargestNecessaryTensorShape(Unity.Barracuda.Model,System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.TensorShape>)
extern void ModelAnalyzer_FindLargestNecessaryTensorShape_m54384215DA2835280E08F9118245CCEC3D8D12E9 (void);
// 0x00000383 Unity.Barracuda.TensorShape Unity.Barracuda.ModelAnalyzer::FindLargestArgumentTensorShape(Unity.Barracuda.Model)
extern void ModelAnalyzer_FindLargestArgumentTensorShape_m58A13F9D3C190C363301C153E857C3441B9C49BF (void);
// 0x00000384 System.String[] Unity.Barracuda.ModelAnalyzer::FindUnusedLayers(Unity.Barracuda.Model)
extern void ModelAnalyzer_FindUnusedLayers_m357AF932EE5FC83F8FA3BFCCFBBA61357C4CC357 (void);
// 0x00000385 System.String[] Unity.Barracuda.ModelAnalyzer::FindBrokenLinks(Unity.Barracuda.Model,System.Collections.Generic.HashSet`1<System.String>)
extern void ModelAnalyzer_FindBrokenLinks_m722A85BA1F1C34ED18F2AA17F70CCEC78AC4DDC0 (void);
// 0x00000386 System.String[] Unity.Barracuda.ModelAnalyzer::FindBrokenLinks(Unity.Barracuda.Model,System.String[])
extern void ModelAnalyzer_FindBrokenLinks_m8752905799BBA32E404EA4E392F91F34A954F9F3 (void);
// 0x00000387 System.String[] Unity.Barracuda.ModelAnalyzer::FindBrokenLinks(Unity.Barracuda.Model)
extern void ModelAnalyzer_FindBrokenLinks_m3E14E14E662B8242E5C175633763012E6B224EB8 (void);
// 0x00000388 System.String[] Unity.Barracuda.ModelAnalyzer::FindUnconnectedInputs(Unity.Barracuda.Model)
extern void ModelAnalyzer_FindUnconnectedInputs_m4FA70EF34CC380A1DF10818B426BD2D4BC0101B7 (void);
// 0x00000389 System.String[] Unity.Barracuda.ModelAnalyzer::FindUnconnectedOutputs(Unity.Barracuda.Model)
extern void ModelAnalyzer_FindUnconnectedOutputs_m6B8907096ADAEF450D4C3E0330B09E82F7EFBA7A (void);
// 0x0000038A System.Void Unity.Barracuda.ModelAnalyzer::.ctor()
extern void ModelAnalyzer__ctor_m88FE2357A55BDD665398550040EE3D4F80FDBA1F (void);
// 0x0000038B Unity.Barracuda.Model Unity.Barracuda.ModelOptimizer::Optimize(Unity.Barracuda.Model,System.Boolean,System.Collections.Generic.HashSet`1<System.String>)
extern void ModelOptimizer_Optimize_mF791D15501091568FB389A0A8D94FC9953A06C78 (void);
// 0x0000038C System.Boolean Unity.Barracuda.ModelOptimizer::IsLayerSupportingActivationFusing(Unity.Barracuda.Layer_Type)
extern void ModelOptimizer_IsLayerSupportingActivationFusing_m77F5078AB7BF2020E89C54D218FD437A2E17D978 (void);
// 0x0000038D System.Boolean Unity.Barracuda.ModelOptimizer::IsActivationFusable(Unity.Barracuda.Layer_Activation)
extern void ModelOptimizer_IsActivationFusable_mDF6BB9778FCD33C76630690DB720050AB73A5C2B (void);
// 0x0000038E System.Void Unity.Barracuda.ModelOptimizer::FuseActivation(Unity.Barracuda.Model,Unity.Barracuda.Layer,Unity.Barracuda.Layer)
extern void ModelOptimizer_FuseActivation_m80B948FE0F9027EA40AC09036E642E9414A9FB68 (void);
// 0x0000038F System.Void Unity.Barracuda.ModelOptimizer::FuseActivations(Unity.Barracuda.Model)
extern void ModelOptimizer_FuseActivations_mE9AF59F0E1F77FE0FBC58A50C64D35D1884FCF8D (void);
// 0x00000390 Unity.Barracuda.Model Unity.Barracuda.ModelOptimizer::RemoveNoop(Unity.Barracuda.Model)
extern void ModelOptimizer_RemoveNoop_mEDD1143D57B872CFC969581DBA7EE4400D7CED54 (void);
// 0x00000391 System.Void Unity.Barracuda.ModelOptimizer::.ctor()
extern void ModelOptimizer__ctor_m5049C263A64C1404BB4DE92189876019FF9163EF (void);
// 0x00000392 System.Void Unity.Barracuda.StatsOps::.ctor(Unity.Barracuda.IOps)
extern void StatsOps__ctor_m11128EA88F9E1F33A044669BDC982B3793B90ED2 (void);
// 0x00000393 System.Void Unity.Barracuda.StatsOps::PrepareModel(Unity.Barracuda.Model,System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.TensorShape>)
extern void StatsOps_PrepareModel_m9CE208C40BD221E8988FA9F72A3635A089CDCF31 (void);
// 0x00000394 System.Void Unity.Barracuda.StatsOps::PreExecuteLayer(Unity.Barracuda.Layer,Unity.Barracuda.Tensor[])
extern void StatsOps_PreExecuteLayer_mED284B9D6B5F72D487063A1D1BA3C613A169DBF2 (void);
// 0x00000395 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.MatMul(Unity.Barracuda.Tensor,System.Boolean,Unity.Barracuda.Tensor,System.Boolean)
extern void StatsOps_Unity_Barracuda_IOps_MatMul_m149966A0CFF60A17A050DB8E954910ED091E6666 (void);
// 0x00000396 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Dense(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Layer_FusedActivation)
extern void StatsOps_Unity_Barracuda_IOps_Dense_m76426964D111B2F2D754BC75604141EA3CA743D8 (void);
// 0x00000397 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Conv2D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer_FusedActivation)
extern void StatsOps_Unity_Barracuda_IOps_Conv2D_m29352D0BE7505AF9A867C94E2A0497A2A5046303 (void);
// 0x00000398 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.DepthwiseConv2D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer_FusedActivation)
extern void StatsOps_Unity_Barracuda_IOps_DepthwiseConv2D_m9B9A89C0C8EF15BF713E6A5C01542F3680260A27 (void);
// 0x00000399 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Conv2DTrans(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[],Unity.Barracuda.Layer_FusedActivation)
extern void StatsOps_Unity_Barracuda_IOps_Conv2DTrans_m6B32E5944D336F64090B74EF1639C07142C7102A (void);
// 0x0000039A Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Upsample2D(Unity.Barracuda.Tensor,System.Int32[],System.Boolean)
extern void StatsOps_Unity_Barracuda_IOps_Upsample2D_m9BD4D55E72333690001D0C43B4E5C17CDA46AE31 (void);
// 0x0000039B Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Resample2D(Unity.Barracuda.Tensor,System.Int32[],System.Boolean)
extern void StatsOps_Unity_Barracuda_IOps_Resample2D_mDC5E5FB061684FA581B3141F7372B103E6E1CCC4 (void);
// 0x0000039C Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.DepthToSpace(Unity.Barracuda.Tensor,System.Int32[],Unity.Barracuda.Layer_DepthToSpaceMode)
extern void StatsOps_Unity_Barracuda_IOps_DepthToSpace_mF6F54C6C1C2C882ACEF46A9292C21CD3CF31EE7D (void);
// 0x0000039D Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.SpaceToDepth(Unity.Barracuda.Tensor,System.Int32[])
extern void StatsOps_Unity_Barracuda_IOps_SpaceToDepth_m86C747AA52B12B502D5EAA97950360F075F38C3B (void);
// 0x0000039E Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.MaxPool2D(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void StatsOps_Unity_Barracuda_IOps_MaxPool2D_m3B51F3B2DEF12DF067D0A1821CE096F6FDCEB5D5 (void);
// 0x0000039F Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.AvgPool2D(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void StatsOps_Unity_Barracuda_IOps_AvgPool2D_m603786B2CC76D935C27E72C3FDE4492913ADC1B7 (void);
// 0x000003A0 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.GlobalMaxPool2D(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_GlobalMaxPool2D_m70C7E3E08BB23597791495996DD7D2592F44B8E1 (void);
// 0x000003A1 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.GlobalAvgPool2D(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_GlobalAvgPool2D_m6E1B4C05A3A2819EA8E0E06D512F1A2A1E239E39 (void);
// 0x000003A2 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.GlobalAvgVariancePool2D(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_GlobalAvgVariancePool2D_m6C17592226018CF04C2683A2AE787EC193068D05 (void);
// 0x000003A3 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Border2D(Unity.Barracuda.Tensor,System.Int32[],System.Single)
extern void StatsOps_Unity_Barracuda_IOps_Border2D_m8DC26927DC9814E9FCED55A9A8D96E4475D61715 (void);
// 0x000003A4 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Pad2DReflect(Unity.Barracuda.Tensor,System.Int32[])
extern void StatsOps_Unity_Barracuda_IOps_Pad2DReflect_mBDFBD9B1F4F1B3F756F25BC416F8BDEA84264A4A (void);
// 0x000003A5 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Pad2DSymmetric(Unity.Barracuda.Tensor,System.Int32[])
extern void StatsOps_Unity_Barracuda_IOps_Pad2DSymmetric_m1C020F71B23440D142D02811BC351257CFABB426 (void);
// 0x000003A6 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Pad2DEdge(Unity.Barracuda.Tensor,System.Int32[])
extern void StatsOps_Unity_Barracuda_IOps_Pad2DEdge_m90EE950681E42A054F2896A8A0AE829E59833F1E (void);
// 0x000003A7 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.ScaleBias(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_ScaleBias_m5C96E9FC2A834745A49E847F580FEE00D2DEC023 (void);
// 0x000003A8 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Normalization(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32,System.Int32,System.Single,Unity.Barracuda.Layer_FusedActivation)
extern void StatsOps_Unity_Barracuda_IOps_Normalization_mF7888182342A4364D32C68BC240A765E05DCB409 (void);
// 0x000003A9 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.LRN(Unity.Barracuda.Tensor,System.Single,System.Single,System.Single,System.Int32)
extern void StatsOps_Unity_Barracuda_IOps_LRN_m4D489B3C9DD95C810F1950D140D9CF35D1836511 (void);
// 0x000003AA Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Dropout(Unity.Barracuda.Tensor,System.Single)
extern void StatsOps_Unity_Barracuda_IOps_Dropout_mC5463983C4E9C691DA8800863590EC750D69A695 (void);
// 0x000003AB Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.RandomNormal(Unity.Barracuda.TensorShape,System.Single,System.Single,System.Int32)
extern void StatsOps_Unity_Barracuda_IOps_RandomNormal_m7DFB0D89B07A19F5308889F1CBC51A2D3226A262 (void);
// 0x000003AC Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.RandomUniform(Unity.Barracuda.TensorShape,System.Single,System.Single,System.Int32)
extern void StatsOps_Unity_Barracuda_IOps_RandomUniform_mE1E32CFF0DA41D1368144D6705FAC530F9051DDF (void);
// 0x000003AD Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Multinomial(Unity.Barracuda.Tensor,System.Int32,System.Int32)
extern void StatsOps_Unity_Barracuda_IOps_Multinomial_m6CA270F6ACD879AD5F6D5C1FE400BA676274165F (void);
// 0x000003AE Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.OneHot(Unity.Barracuda.Tensor,System.Int32,System.Single,System.Single)
extern void StatsOps_Unity_Barracuda_IOps_OneHot_m680CBBB3DBDF78C698B0F0BC8C7624F715611373 (void);
// 0x000003AF Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Relu(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Relu_m6E3C8E5C650A2E76086406E651F61F7F74DA74E5 (void);
// 0x000003B0 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Softmax(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Softmax_m5FE15974D76BF2B3E4E8A99AF6DCBC96165370DA (void);
// 0x000003B1 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.LogSoftmax(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_LogSoftmax_m01A5CE3453D6D4D740E521CAC20FC1B97DA8FCEC (void);
// 0x000003B2 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Tanh(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Tanh_mE2806923A39B6C058F38A56539509E459765E70B (void);
// 0x000003B3 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Sigmoid(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Sigmoid_mF06924CFE2F956BB606DAF12F025C9327507E449 (void);
// 0x000003B4 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Relu6(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Relu6_mEE3AB2BBC65BDBC48BCD1162FFB03278F8672647 (void);
// 0x000003B5 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Elu(Unity.Barracuda.Tensor,System.Single)
extern void StatsOps_Unity_Barracuda_IOps_Elu_m2DAF0E07A8D533430CF169E0A456E815B394CCC2 (void);
// 0x000003B6 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.LeakyRelu(Unity.Barracuda.Tensor,System.Single)
extern void StatsOps_Unity_Barracuda_IOps_LeakyRelu_m3DCC7E21626518DC4D28203F0A53EF7E4BCFCF11 (void);
// 0x000003B7 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Selu(Unity.Barracuda.Tensor,System.Single,System.Single)
extern void StatsOps_Unity_Barracuda_IOps_Selu_mFCA233E6AB524BE84689933CF4607F5E17A22D8B (void);
// 0x000003B8 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.PRelu(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_PRelu_mD927DED752D5BAE9B299FD7CF168EE3AEA4849EC (void);
// 0x000003B9 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Swish(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Swish_mA2313A49E8780EBEB803E0200E92BEAF9DA5F530 (void);
// 0x000003BA Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Abs(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Abs_m3E68AF18D8328366C177AB33BD79BF37E1205108 (void);
// 0x000003BB Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Neg(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Neg_m474DA50401D54D50B2F5D380007B43025BCDBBFC (void);
// 0x000003BC Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Ceil(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Ceil_m9AAF300C7D4C069E223353F2DFEA0FCE3E752001 (void);
// 0x000003BD Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Clip(Unity.Barracuda.Tensor,System.Single,System.Single)
extern void StatsOps_Unity_Barracuda_IOps_Clip_m491E62AEA60B1480FB740F1A23AF1F1B7E4B2353 (void);
// 0x000003BE Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Floor(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Floor_m1891311F2BE02DD1B40BBFF50BB98EC4BF711A38 (void);
// 0x000003BF Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Reciprocal(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Reciprocal_m7684263844076BBFFA568987016FA17FCA25DEB5 (void);
// 0x000003C0 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Pow(Unity.Barracuda.Tensor,System.Single)
extern void StatsOps_Unity_Barracuda_IOps_Pow_m51CE0E35B6D9E16256004D0F45F260ACCFF3BE5A (void);
// 0x000003C1 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Exp(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Exp_m574B645C38F15B3FC8EAA81D823C9C7378E8B204 (void);
// 0x000003C2 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Log(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Log_mF05E93CEA4F259A0D631E77DD73B4FDE53FD9CAA (void);
// 0x000003C3 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Sqrt(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Sqrt_mE535631123DF74B6D824EDF015760FFAB34419F8 (void);
// 0x000003C4 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Add(Unity.Barracuda.Tensor[])
extern void StatsOps_Unity_Barracuda_IOps_Add_m5D8A69C6EA201B4EC8E5EB8F5840D36505A33EFA (void);
// 0x000003C5 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Sub(Unity.Barracuda.Tensor[])
extern void StatsOps_Unity_Barracuda_IOps_Sub_m2C01470A6719FC0A485CDCFA2379872255ABA5D9 (void);
// 0x000003C6 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Mul(Unity.Barracuda.Tensor[])
extern void StatsOps_Unity_Barracuda_IOps_Mul_mC8A5657B98B854B54374BD84D86DA04C47407F98 (void);
// 0x000003C7 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Div(Unity.Barracuda.Tensor[])
extern void StatsOps_Unity_Barracuda_IOps_Div_m8FCC5405EC4B3A5486093A03A492BB3D72315869 (void);
// 0x000003C8 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Pow(Unity.Barracuda.Tensor[])
extern void StatsOps_Unity_Barracuda_IOps_Pow_m84B89B1DE6A8EA3457538BDE81E6EC80F3DF433A (void);
// 0x000003C9 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Min(Unity.Barracuda.Tensor[])
extern void StatsOps_Unity_Barracuda_IOps_Min_m8E8679726E62A1419BA2100996E94CE81509C6E6 (void);
// 0x000003CA Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Max(Unity.Barracuda.Tensor[])
extern void StatsOps_Unity_Barracuda_IOps_Max_m8EA3A524E83AA38C16F7AFC2EDF83B5C9604193B (void);
// 0x000003CB Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Mean(Unity.Barracuda.Tensor[])
extern void StatsOps_Unity_Barracuda_IOps_Mean_m6F45DCC72556C2A1397B9CF1B7C461A2E7C6EF2C (void);
// 0x000003CC Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.ReduceMax(Unity.Barracuda.Tensor,System.Int32)
extern void StatsOps_Unity_Barracuda_IOps_ReduceMax_mA2EA57046736AF053A24281CD222A854A986D4E4 (void);
// 0x000003CD Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.ReduceMean(Unity.Barracuda.Tensor,System.Int32)
extern void StatsOps_Unity_Barracuda_IOps_ReduceMean_mDD57CC86AE0B4FA6C8A18D559EDAB7F18F96ABB1 (void);
// 0x000003CE Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.ReduceMin(Unity.Barracuda.Tensor,System.Int32)
extern void StatsOps_Unity_Barracuda_IOps_ReduceMin_mC107E5577EEE1659993A48CFA4891AF9E7EB1081 (void);
// 0x000003CF Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.ReduceProd(Unity.Barracuda.Tensor,System.Int32)
extern void StatsOps_Unity_Barracuda_IOps_ReduceProd_mC18617F07309077A8FA8AAEE403B0AD6084373D3 (void);
// 0x000003D0 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.ReduceSum(Unity.Barracuda.Tensor,System.Int32)
extern void StatsOps_Unity_Barracuda_IOps_ReduceSum_mCDE1A5FB7ADDC6830BD41A6443E418A6CCC8DE4F (void);
// 0x000003D1 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Greater(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Greater_mED16EBD991ED0E0D399C881F614DB551757B4F75 (void);
// 0x000003D2 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.GreaterEqual(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_GreaterEqual_m6D5FAE35F19B4148883A8CF13C84FBC48319613D (void);
// 0x000003D3 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Less(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Less_m634CA0FF6BA29D6E1907D457EF0E123C2A6C541E (void);
// 0x000003D4 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.LessEqual(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_LessEqual_m9131A4598E95FB8E274CA63F35C8E83867725212 (void);
// 0x000003D5 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Equal(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Equal_m6B8C6D59189F3299460870ECBBF35AB45F88DA79 (void);
// 0x000003D6 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.LogicalOr(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_LogicalOr_m0262B8AC01535FFE4040C77793AA6D49A31D9961 (void);
// 0x000003D7 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.LogicalAnd(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_LogicalAnd_m1C8FAECF81268EDD6FAFBAF68885B5AA2DC2C3DD (void);
// 0x000003D8 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.LogicalXor(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_LogicalXor_m3CDBE47421A54C0E1015903948DCF4D98F94320E (void);
// 0x000003D9 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.LogicalNot(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_LogicalNot_m8655FD7F5AD9353138EC18DCB44A78CB3210ECAB (void);
// 0x000003DA Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Flatten(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Flatten_mC253899ABCABA0A50BFE3B7FAC6AA8F1523346DD (void);
// 0x000003DB Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Reshape(Unity.Barracuda.Tensor,Unity.Barracuda.TensorShape)
extern void StatsOps_Unity_Barracuda_IOps_Reshape_mAEF701AF80D0EAEFB7DA3BE9B3F7AAAE1BBF8F6B (void);
// 0x000003DC Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Expand(Unity.Barracuda.Tensor,Unity.Barracuda.TensorShape)
extern void StatsOps_Unity_Barracuda_IOps_Expand_m8623A97C88463712030455A424D0542CA00699F5 (void);
// 0x000003DD Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Transpose(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Transpose_m27286718B8441E54E6E05D92619E36C7A6A4AC2B (void);
// 0x000003DE Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Gather(Unity.Barracuda.Tensor[],System.Int32)
extern void StatsOps_Unity_Barracuda_IOps_Gather_m6478DBA6328BBEC5CE19096F9A6388E9E9888B5A (void);
// 0x000003DF Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Concat(Unity.Barracuda.Tensor[],System.Int32)
extern void StatsOps_Unity_Barracuda_IOps_Concat_mD130F424990B553030329C5E63A770DF2E8F5582 (void);
// 0x000003E0 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.StridedSlice(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void StatsOps_Unity_Barracuda_IOps_StridedSlice_mFA155EE168F80BC414721DDC3635608D0B5BD0AF (void);
// 0x000003E1 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Tile(Unity.Barracuda.Tensor,System.Int32[])
extern void StatsOps_Unity_Barracuda_IOps_Tile_m3C00A261AFC458584BA0E2A02114008B7FBE67F6 (void);
// 0x000003E2 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Copy(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Copy_m5850F4EFEB2000972C099BB813BCE9C91491AB62 (void);
// 0x000003E3 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Prepare(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Prepare_mBA4A001EA8E29CF7D7B9C079ACB46970815855E1 (void);
// 0x000003E4 System.Void Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.ResetAllocator(System.Boolean)
extern void StatsOps_Unity_Barracuda_IOps_ResetAllocator_m8ED0DBFB646CA6B5F07562B4538B7FC91B7B39C5 (void);
// 0x000003E5 System.String Unity.Barracuda.StatsOps::ToString()
extern void StatsOps_ToString_m03ECB637985FB687D2B4020C77F256B0747DCA7F (void);
// 0x000003E6 System.Void Unity.Barracuda.StatsOps::Elementwise(Unity.Barracuda.Tensor,System.Int64)
extern void StatsOps_Elementwise_m14250D94D0C0703748DBB0A0885F1A6DCA3AC721 (void);
// 0x000003E7 System.Void Unity.Barracuda.StatsOps::ElementwiseBroadcast(Unity.Barracuda.Tensor[],Unity.Barracuda.Tensor,System.Int64)
extern void StatsOps_ElementwiseBroadcast_mE175BD9C5B583DDEF66AE9A6A8CDD22A32C9769D (void);
// 0x000003E8 System.Void Unity.Barracuda.StatsOps::Reduce(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int64)
extern void StatsOps_Reduce_mC82086F6903F5FE652F1A033D312D3F15D7F7776 (void);
// 0x000003E9 System.Void Unity.Barracuda.TensorOperatorNewAllocator::.ctor()
extern void TensorOperatorNewAllocator__ctor_m1B27EDD5592463FE46175A5D9618621D75F67DF6 (void);
// 0x000003EA System.Void Unity.Barracuda.TensorOperatorNewAllocator::Finalize()
extern void TensorOperatorNewAllocator_Finalize_mCED4E4E92FB88B78AB3068E45694078DCA0E7C7F (void);
// 0x000003EB Unity.Barracuda.Tensor Unity.Barracuda.TensorOperatorNewAllocator::Alloc(Unity.Barracuda.TensorShape)
extern void TensorOperatorNewAllocator_Alloc_mF6D6AB72551F4F07AD443672BFAC138F73925F22 (void);
// 0x000003EC Unity.Barracuda.Tensor Unity.Barracuda.TensorOperatorNewAllocator::Alloc(Unity.Barracuda.TensorShape,Unity.Barracuda.ITensorData)
extern void TensorOperatorNewAllocator_Alloc_m4C67AF28633F913B4EFBF5B7332BEF2DF390BB8E (void);
// 0x000003ED System.Void Unity.Barracuda.TensorOperatorNewAllocator::Release(Unity.Barracuda.Tensor,System.Boolean)
extern void TensorOperatorNewAllocator_Release_m0967ADB7817527006C211643347E8443E7BC3D0A (void);
// 0x000003EE System.Void Unity.Barracuda.TensorOperatorNewAllocator::MoveToDevice(Unity.Barracuda.Tensor,Unity.Barracuda.ITensorData,Unity.Barracuda.ITensorData,System.Boolean)
extern void TensorOperatorNewAllocator_MoveToDevice_mFA42BC72F730F1D2CFD31B822054446D7E3479A6 (void);
// 0x000003EF System.Void Unity.Barracuda.TensorOperatorNewAllocator::Reset(System.Boolean)
extern void TensorOperatorNewAllocator_Reset_m983116FFB138AF5EADC25414AD2ED0B29EB53C7E (void);
// 0x000003F0 System.Void Unity.Barracuda.TensorOperatorNewAllocator::WaiveOwnership(Unity.Barracuda.Tensor)
extern void TensorOperatorNewAllocator_WaiveOwnership_m3AFC873AB560C7C2F76623B56691BDFCFD4E13D5 (void);
// 0x000003F1 System.Void Unity.Barracuda.TensorOperatorNewAllocator::Dispose()
extern void TensorOperatorNewAllocator_Dispose_m3CF2652A86AA7712CF7C71AB12ECAA0CE4AD42A9 (void);
// 0x000003F2 System.Int64 Unity.Barracuda.TensorOperatorNewAllocator::get_busyBytes()
extern void TensorOperatorNewAllocator_get_busyBytes_mDB60805065344FDB89C68C222FA1683FBB883856 (void);
// 0x000003F3 System.Int64 Unity.Barracuda.TensorOperatorNewAllocator::get_freeBytes()
extern void TensorOperatorNewAllocator_get_freeBytes_m7ECD7A690216BE3D429B36413ABCB8BCE838F82E (void);
// 0x000003F4 System.Int64 Unity.Barracuda.TensorOperatorNewAllocator::get_totalBytes()
extern void TensorOperatorNewAllocator_get_totalBytes_m8516F22439EBDC3F0A6DCACD58B51977514A0C67 (void);
// 0x000003F5 System.String Unity.Barracuda.TensorOperatorNewAllocator::ToString()
extern void TensorOperatorNewAllocator_ToString_m0A15C6058616B14EBFFAB2388843E54A35E95728 (void);
// 0x000003F6 System.Void Unity.Barracuda.TensorCachingByShapeAllocator::.ctor()
extern void TensorCachingByShapeAllocator__ctor_mFD70839B277C39A5F009586D306438AD236BF1A3 (void);
// 0x000003F7 System.Void Unity.Barracuda.TensorCachingByShapeAllocator::Finalize()
extern void TensorCachingByShapeAllocator_Finalize_mE9D202CA743D6E32D378E375AB94BB233C5B327C (void);
// 0x000003F8 System.Void Unity.Barracuda.TensorCachingByShapeAllocator::AddRef(Unity.Barracuda.ITensorData)
extern void TensorCachingByShapeAllocator_AddRef_m977A2A75E2D66BDD5560EF639148737A2096D6B7 (void);
// 0x000003F9 System.Void Unity.Barracuda.TensorCachingByShapeAllocator::DecRef(Unity.Barracuda.ITensorData,System.Action`1<Unity.Barracuda.ITensorData>)
extern void TensorCachingByShapeAllocator_DecRef_m13BBD1F3EF8FF7FD775574A4104D6F8F5A3A9C7A (void);
// 0x000003FA System.Void Unity.Barracuda.TensorCachingByShapeAllocator::AdoptFreeBuffer(Unity.Barracuda.TensorShape,Unity.Barracuda.ITensorData)
extern void TensorCachingByShapeAllocator_AdoptFreeBuffer_m6AAB2E6A27FDA13DA2C66721C47D5B943744D25A (void);
// 0x000003FB Unity.Barracuda.Tensor Unity.Barracuda.TensorCachingByShapeAllocator::Alloc(Unity.Barracuda.TensorShape)
extern void TensorCachingByShapeAllocator_Alloc_m3B3BDD02CB74644BBAA28D696F880EFE4D698C92 (void);
// 0x000003FC Unity.Barracuda.Tensor Unity.Barracuda.TensorCachingByShapeAllocator::Alloc(Unity.Barracuda.TensorShape,Unity.Barracuda.ITensorData)
extern void TensorCachingByShapeAllocator_Alloc_mE2A3F4BF7EDFBD97F740571B5B961F0E3E411B7A (void);
// 0x000003FD System.Void Unity.Barracuda.TensorCachingByShapeAllocator::Release(Unity.Barracuda.Tensor,System.Boolean)
extern void TensorCachingByShapeAllocator_Release_mAD835AC755BFA82F40320434A5D88ECD2E94643B (void);
// 0x000003FE System.Void Unity.Barracuda.TensorCachingByShapeAllocator::MoveToDevice(Unity.Barracuda.Tensor,Unity.Barracuda.ITensorData,Unity.Barracuda.ITensorData,System.Boolean)
extern void TensorCachingByShapeAllocator_MoveToDevice_m99768180EE544FF9DA19810AD0DBF6838342C16B (void);
// 0x000003FF System.Void Unity.Barracuda.TensorCachingByShapeAllocator::Cast(Unity.Barracuda.Tensor,Unity.Barracuda.ITensorData,Unity.Barracuda.ITensorData)
extern void TensorCachingByShapeAllocator_Cast_mD7C2FD149280BEF74AB5071BE7B19F193A21F179 (void);
// 0x00000400 System.Void Unity.Barracuda.TensorCachingByShapeAllocator::Reset(System.Boolean)
extern void TensorCachingByShapeAllocator_Reset_mEEBEC3BCDB8D3B64143CDC69940FAC6F68B45554 (void);
// 0x00000401 System.Void Unity.Barracuda.TensorCachingByShapeAllocator::WaiveOwnership(Unity.Barracuda.Tensor)
extern void TensorCachingByShapeAllocator_WaiveOwnership_m06363819AB922A18B7AAB91AB2A35AD3572F50EA (void);
// 0x00000402 System.Void Unity.Barracuda.TensorCachingByShapeAllocator::Dispose()
extern void TensorCachingByShapeAllocator_Dispose_m75F35E5467F44B274725FEC294828C810243A4C8 (void);
// 0x00000403 System.Int64 Unity.Barracuda.TensorCachingByShapeAllocator::get_busyBytes()
extern void TensorCachingByShapeAllocator_get_busyBytes_m572207AB267F382C7A0C30A2AB2DA5931F201AE0 (void);
// 0x00000404 System.Int64 Unity.Barracuda.TensorCachingByShapeAllocator::get_freeBytes()
extern void TensorCachingByShapeAllocator_get_freeBytes_mB24A8A976B6AFDF8AF143FA2EEA199C18AC4CC68 (void);
// 0x00000405 System.Int64 Unity.Barracuda.TensorCachingByShapeAllocator::get_totalBytes()
extern void TensorCachingByShapeAllocator_get_totalBytes_mD2526843EE1111D4E7F4F046B5225DA0A42B78CF (void);
// 0x00000406 System.String Unity.Barracuda.TensorCachingByShapeAllocator::ToString()
extern void TensorCachingByShapeAllocator_ToString_mB3DE53A609C1690765BEB02B6112D04B028F4591 (void);
// 0x00000407 System.Void Unity.Barracuda.TensorCachingAllocator::.ctor()
extern void TensorCachingAllocator__ctor_m8024661B747C6305D0B65C523A9B13A191BDF85D (void);
// 0x00000408 System.Void Unity.Barracuda.TensorCachingAllocator::Finalize()
extern void TensorCachingAllocator_Finalize_m040AEB9D32AD6B7492C04037CD840F6B2757B968 (void);
// 0x00000409 System.Int32 Unity.Barracuda.TensorCachingAllocator::GetAllocationMaxCount(Unity.Barracuda.Tensor)
extern void TensorCachingAllocator_GetAllocationMaxCount_mD246D59F3C9B25199FD2EC717D94FD9FC3327D64 (void);
// 0x0000040A System.Void Unity.Barracuda.TensorCachingAllocator::AddRef(Unity.Barracuda.ITensorData)
extern void TensorCachingAllocator_AddRef_mCA5021C5FA3BA6C60A9D4D5F176CA2129F8E459E (void);
// 0x0000040B System.Void Unity.Barracuda.TensorCachingAllocator::DecRef(Unity.Barracuda.ITensorData,System.Action`1<Unity.Barracuda.ITensorData>)
extern void TensorCachingAllocator_DecRef_mD05245B93653E5F2B169634D2550868F39EC729A (void);
// 0x0000040C System.Void Unity.Barracuda.TensorCachingAllocator::AdoptFreeBuffer(Unity.Barracuda.ITensorData)
extern void TensorCachingAllocator_AdoptFreeBuffer_mA610F30E8FD8ED27A52EF85727EA690CB2D43ECF (void);
// 0x0000040D System.Void Unity.Barracuda.TensorCachingAllocator::DisposeAllocatedBuffer(Unity.Barracuda.ITensorData)
extern void TensorCachingAllocator_DisposeAllocatedBuffer_m9869BBE9A5366D12CA8DE11E5AD87589BA13A759 (void);
// 0x0000040E Unity.Barracuda.Tensor Unity.Barracuda.TensorCachingAllocator::Alloc(Unity.Barracuda.TensorShape)
extern void TensorCachingAllocator_Alloc_mDA47CBE7F8193AD096E86D8FD2A9E13F96B96908 (void);
// 0x0000040F Unity.Barracuda.Tensor Unity.Barracuda.TensorCachingAllocator::Alloc(Unity.Barracuda.TensorShape,Unity.Barracuda.ITensorData)
extern void TensorCachingAllocator_Alloc_mBDA900CFE596D67BB2B5290FA4B1553D38419345 (void);
// 0x00000410 System.Void Unity.Barracuda.TensorCachingAllocator::Release(Unity.Barracuda.Tensor,System.Boolean)
extern void TensorCachingAllocator_Release_m8603826E9519C51A60DC4773A6AD14FF275E1B48 (void);
// 0x00000411 System.Void Unity.Barracuda.TensorCachingAllocator::MoveToDevice(Unity.Barracuda.Tensor,Unity.Barracuda.ITensorData,Unity.Barracuda.ITensorData,System.Boolean)
extern void TensorCachingAllocator_MoveToDevice_m2A876C44BBB533472329CD8B6A3B111C2FB0ACE0 (void);
// 0x00000412 System.Void Unity.Barracuda.TensorCachingAllocator::Cast(Unity.Barracuda.Tensor,Unity.Barracuda.ITensorData,Unity.Barracuda.ITensorData)
extern void TensorCachingAllocator_Cast_m86FB4BF51D80E026CE20FE284DA06B5462F68D41 (void);
// 0x00000413 System.Void Unity.Barracuda.TensorCachingAllocator::Reset(System.Boolean)
extern void TensorCachingAllocator_Reset_mF2F5AE0E47DD77196AD85506346F220ED3E4975D (void);
// 0x00000414 System.Void Unity.Barracuda.TensorCachingAllocator::WaiveOwnership(Unity.Barracuda.Tensor)
extern void TensorCachingAllocator_WaiveOwnership_m00BCB974D35238D09A191CB0F5C69AB59F047F83 (void);
// 0x00000415 System.Void Unity.Barracuda.TensorCachingAllocator::Dispose()
extern void TensorCachingAllocator_Dispose_mA1733E8C06735F28DF15B0D309C9F483D6845768 (void);
// 0x00000416 System.Int64 Unity.Barracuda.TensorCachingAllocator::get_busyBytes()
extern void TensorCachingAllocator_get_busyBytes_mB52FDE433BEB1430A222F31820AB3D0243E6F5BD (void);
// 0x00000417 System.Int64 Unity.Barracuda.TensorCachingAllocator::get_freeBytes()
extern void TensorCachingAllocator_get_freeBytes_m69C3E7F8322D50E89E4423182AD95DC725347E5A (void);
// 0x00000418 System.Int64 Unity.Barracuda.TensorCachingAllocator::get_totalBytes()
extern void TensorCachingAllocator_get_totalBytes_m677EE2111D40A65475349634F192F97B16C29F21 (void);
// 0x00000419 System.String Unity.Barracuda.TensorCachingAllocator::ToString()
extern void TensorCachingAllocator_ToString_mF965FD8D478CB05D70BE2EB31BB8AD103CA69E68 (void);
// 0x0000041A System.Void Unity.Barracuda.VerboseOps::.ctor(Unity.Barracuda.IOps)
extern void VerboseOps__ctor_m2670D4AB27F2F7872B0B4E0761DBB0F855F22B3E (void);
// 0x0000041B System.Void Unity.Barracuda.VerboseOps::PrepareModel(Unity.Barracuda.Model,System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.TensorShape>)
extern void VerboseOps_PrepareModel_mC1B85D5E764A5BBEE7AAFFF293C610DBB1CFDEC2 (void);
// 0x0000041C System.Void Unity.Barracuda.VerboseOps::PreExecuteLayer(Unity.Barracuda.Layer,Unity.Barracuda.Tensor[])
extern void VerboseOps_PreExecuteLayer_m49DA87F0A93BA3A263E9F6A89986FD9BB4201574 (void);
// 0x0000041D Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.MatMul(Unity.Barracuda.Tensor,System.Boolean,Unity.Barracuda.Tensor,System.Boolean)
extern void VerboseOps_Unity_Barracuda_IOps_MatMul_m7A89F3270825CE8E45A8BA4A5CC9957F0A9FE9FA (void);
// 0x0000041E Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Dense(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Layer_FusedActivation)
extern void VerboseOps_Unity_Barracuda_IOps_Dense_m78BC00235177E15A8DC296B0E8001269252513E8 (void);
// 0x0000041F Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Conv2D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer_FusedActivation)
extern void VerboseOps_Unity_Barracuda_IOps_Conv2D_m3EB29F2D68ABDB51A8322C4EAF07E7EE01F64B82 (void);
// 0x00000420 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.DepthwiseConv2D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer_FusedActivation)
extern void VerboseOps_Unity_Barracuda_IOps_DepthwiseConv2D_m399EF38C7A6E268215F1962030DC0AE95C5AAB7E (void);
// 0x00000421 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Conv2DTrans(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[],Unity.Barracuda.Layer_FusedActivation)
extern void VerboseOps_Unity_Barracuda_IOps_Conv2DTrans_m041DA5CDF28F6A01046BB3B56ACEFF4764928055 (void);
// 0x00000422 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Upsample2D(Unity.Barracuda.Tensor,System.Int32[],System.Boolean)
extern void VerboseOps_Unity_Barracuda_IOps_Upsample2D_m3AF50C5106C7DE9100883501F2689F4EE75211F5 (void);
// 0x00000423 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Resample2D(Unity.Barracuda.Tensor,System.Int32[],System.Boolean)
extern void VerboseOps_Unity_Barracuda_IOps_Resample2D_m336E0192938A0C3904F8B5319ADF30C81E070B29 (void);
// 0x00000424 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.DepthToSpace(Unity.Barracuda.Tensor,System.Int32[],Unity.Barracuda.Layer_DepthToSpaceMode)
extern void VerboseOps_Unity_Barracuda_IOps_DepthToSpace_m644529E384F324BC945397F1CF8D9D8FA153084A (void);
// 0x00000425 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.SpaceToDepth(Unity.Barracuda.Tensor,System.Int32[])
extern void VerboseOps_Unity_Barracuda_IOps_SpaceToDepth_m12669A03933CA34D6E1E12A9166CFDDFD895925A (void);
// 0x00000426 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.MaxPool2D(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void VerboseOps_Unity_Barracuda_IOps_MaxPool2D_mE6C753CBA372A260F835ACC8009029E8BEFC8144 (void);
// 0x00000427 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.AvgPool2D(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void VerboseOps_Unity_Barracuda_IOps_AvgPool2D_m070F9E89552C2B0F25D1D7FED170A1C76A0990E6 (void);
// 0x00000428 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.GlobalMaxPool2D(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_GlobalMaxPool2D_m24908796315CFD40B9FAB9597EC13E5514A9F123 (void);
// 0x00000429 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.GlobalAvgPool2D(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_GlobalAvgPool2D_mA70342D79A2CCCD7E6695C055318E7D89D95D751 (void);
// 0x0000042A Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.GlobalAvgVariancePool2D(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_GlobalAvgVariancePool2D_m6A3E7C6061EFF6F4432B4CF4F313BD580148E708 (void);
// 0x0000042B Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Border2D(Unity.Barracuda.Tensor,System.Int32[],System.Single)
extern void VerboseOps_Unity_Barracuda_IOps_Border2D_m1FB9E255B1F33D0816E5E97C4EAFF8CFFA72ED21 (void);
// 0x0000042C Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Pad2DReflect(Unity.Barracuda.Tensor,System.Int32[])
extern void VerboseOps_Unity_Barracuda_IOps_Pad2DReflect_mC68329424DE87D76C44B24A04232D2242841A6A6 (void);
// 0x0000042D Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Pad2DSymmetric(Unity.Barracuda.Tensor,System.Int32[])
extern void VerboseOps_Unity_Barracuda_IOps_Pad2DSymmetric_mE6BE2E27C73D6290A9B8A8D61E138C9D3DA042E6 (void);
// 0x0000042E Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Pad2DEdge(Unity.Barracuda.Tensor,System.Int32[])
extern void VerboseOps_Unity_Barracuda_IOps_Pad2DEdge_m64EE9A5BCF9321EBF393ECDD7ACCBAD52492AB8F (void);
// 0x0000042F Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.ScaleBias(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_ScaleBias_m31DBF13443142504E551A0A76B2452D41B96C48F (void);
// 0x00000430 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Normalization(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32,System.Int32,System.Single,Unity.Barracuda.Layer_FusedActivation)
extern void VerboseOps_Unity_Barracuda_IOps_Normalization_mD0AE784779D0130EEAC001E813586081374BEC7D (void);
// 0x00000431 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.LRN(Unity.Barracuda.Tensor,System.Single,System.Single,System.Single,System.Int32)
extern void VerboseOps_Unity_Barracuda_IOps_LRN_m12843CF6A692B9696A481CEA7DF2E21D8021DB90 (void);
// 0x00000432 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Dropout(Unity.Barracuda.Tensor,System.Single)
extern void VerboseOps_Unity_Barracuda_IOps_Dropout_mB1B7AC81B11D7B2EFDEB24D029A1B03A08B06F4D (void);
// 0x00000433 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.RandomNormal(Unity.Barracuda.TensorShape,System.Single,System.Single,System.Int32)
extern void VerboseOps_Unity_Barracuda_IOps_RandomNormal_m0B5DDE58818AF20768B39AEC0C134414F5649037 (void);
// 0x00000434 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.RandomUniform(Unity.Barracuda.TensorShape,System.Single,System.Single,System.Int32)
extern void VerboseOps_Unity_Barracuda_IOps_RandomUniform_m40CB33FAF87E4CF711603468E54CC45A1C133EE2 (void);
// 0x00000435 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Multinomial(Unity.Barracuda.Tensor,System.Int32,System.Int32)
extern void VerboseOps_Unity_Barracuda_IOps_Multinomial_m07487F7E7FFF57C9AEC83819325D44C12BA64649 (void);
// 0x00000436 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.OneHot(Unity.Barracuda.Tensor,System.Int32,System.Single,System.Single)
extern void VerboseOps_Unity_Barracuda_IOps_OneHot_m625B1B55BCAF3466D14B1C0DF617EE1C0ADA0921 (void);
// 0x00000437 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Relu(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Relu_m21A01DE1B18B891831328821D24ECB7D0DE8278E (void);
// 0x00000438 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Softmax(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Softmax_m6D25599A95CBC7F7A455DC631289B9210E1494E5 (void);
// 0x00000439 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.LogSoftmax(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_LogSoftmax_m77F5C059CD8D70047E0EB8BA9395B4021228B381 (void);
// 0x0000043A Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Tanh(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Tanh_mB23921925030565CCA9A568363C39A81BABA1820 (void);
// 0x0000043B Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Sigmoid(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Sigmoid_m3E78CE5688864E61CADD249AD97E7886E4951E29 (void);
// 0x0000043C Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Relu6(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Relu6_m5FFFF118C497832F78B52D95438065A20581F2EF (void);
// 0x0000043D Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Elu(Unity.Barracuda.Tensor,System.Single)
extern void VerboseOps_Unity_Barracuda_IOps_Elu_mB016AAB714EE07E8C81E260C174A458D3E5253E9 (void);
// 0x0000043E Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.LeakyRelu(Unity.Barracuda.Tensor,System.Single)
extern void VerboseOps_Unity_Barracuda_IOps_LeakyRelu_mA569F4E8CBA2D9C2E324607B25696FF95E598746 (void);
// 0x0000043F Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Selu(Unity.Barracuda.Tensor,System.Single,System.Single)
extern void VerboseOps_Unity_Barracuda_IOps_Selu_mF4C4C4592F9F3B33D14FB41E002C8092916F8E49 (void);
// 0x00000440 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.PRelu(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_PRelu_m1C65655653C9BF252E356AF534BD4845D3EF64A1 (void);
// 0x00000441 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Swish(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Swish_m8B03599100F0D720CA63E4150633033532217183 (void);
// 0x00000442 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Abs(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Abs_mFE9A9F9D7501CBB2F3B6A7B40CAFA734AE0269EB (void);
// 0x00000443 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Neg(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Neg_m97BCE5E41B2CF243C83C483C27450B0EEFE7B255 (void);
// 0x00000444 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Ceil(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Ceil_m78321D16E44F3CC79190B4EF6EDD3856308C35FC (void);
// 0x00000445 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Clip(Unity.Barracuda.Tensor,System.Single,System.Single)
extern void VerboseOps_Unity_Barracuda_IOps_Clip_m968A6EF3FECCCF7EE643AD3B9A1806A52D4ADA77 (void);
// 0x00000446 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Floor(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Floor_m02E633B156143C502C0AD95A1645CCB23F13153B (void);
// 0x00000447 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Reciprocal(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Reciprocal_mB0A527BD27EF1C91F037274E067AE214074B5CCE (void);
// 0x00000448 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Pow(Unity.Barracuda.Tensor,System.Single)
extern void VerboseOps_Unity_Barracuda_IOps_Pow_m2AE3C9470DCEC592CB4550235FCB15FAAC6DEE09 (void);
// 0x00000449 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Exp(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Exp_m0505D19C9602DDB91E826570D15E364F35AA78AE (void);
// 0x0000044A Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Log(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Log_m42D57310BCF5F7B47ADC49A8F01E1A28E265E58D (void);
// 0x0000044B Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Sqrt(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Sqrt_m9044C0AD69C791E62D8FE3DFC4CE31A21D648A43 (void);
// 0x0000044C Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Add(Unity.Barracuda.Tensor[])
extern void VerboseOps_Unity_Barracuda_IOps_Add_m29905A0F7E9E705D77611E1482052FDB930D15EB (void);
// 0x0000044D Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Sub(Unity.Barracuda.Tensor[])
extern void VerboseOps_Unity_Barracuda_IOps_Sub_m527CC6E40A2FB2C5E97FD724C29546CB3B313EBE (void);
// 0x0000044E Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Mul(Unity.Barracuda.Tensor[])
extern void VerboseOps_Unity_Barracuda_IOps_Mul_mD49C76528AA2C540502D8EC1E3AE40644E9A02F4 (void);
// 0x0000044F Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Div(Unity.Barracuda.Tensor[])
extern void VerboseOps_Unity_Barracuda_IOps_Div_mD355E53249D083575CF01BE4AAAD9FCF8831F278 (void);
// 0x00000450 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Pow(Unity.Barracuda.Tensor[])
extern void VerboseOps_Unity_Barracuda_IOps_Pow_mAA05ACCC1E71D28701F7B3DF21D8B5D74C0F2F10 (void);
// 0x00000451 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Min(Unity.Barracuda.Tensor[])
extern void VerboseOps_Unity_Barracuda_IOps_Min_mCDC13254E80EE2CAA6B44EC3CD1082791F56DAE6 (void);
// 0x00000452 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Max(Unity.Barracuda.Tensor[])
extern void VerboseOps_Unity_Barracuda_IOps_Max_mD00DCEEF8CA2DD20A3543133C3CD134FBD094F94 (void);
// 0x00000453 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Mean(Unity.Barracuda.Tensor[])
extern void VerboseOps_Unity_Barracuda_IOps_Mean_mA372ABADAC113E8F4CF7CD01EFB7B99907FD353C (void);
// 0x00000454 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.ReduceMax(Unity.Barracuda.Tensor,System.Int32)
extern void VerboseOps_Unity_Barracuda_IOps_ReduceMax_mB66A4C094D8C573BD79EA74A6B8AAC03AEC620FB (void);
// 0x00000455 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.ReduceMean(Unity.Barracuda.Tensor,System.Int32)
extern void VerboseOps_Unity_Barracuda_IOps_ReduceMean_m93DBFA131EA66DE927927CAA6B1E5DFA4F92CE70 (void);
// 0x00000456 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.ReduceMin(Unity.Barracuda.Tensor,System.Int32)
extern void VerboseOps_Unity_Barracuda_IOps_ReduceMin_m229B08671A40C916A6657073B9B7406130C7C36F (void);
// 0x00000457 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.ReduceProd(Unity.Barracuda.Tensor,System.Int32)
extern void VerboseOps_Unity_Barracuda_IOps_ReduceProd_mF990157B5EE16C9ECEFC4703EB0ACA9716E8AAC4 (void);
// 0x00000458 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.ReduceSum(Unity.Barracuda.Tensor,System.Int32)
extern void VerboseOps_Unity_Barracuda_IOps_ReduceSum_mD400A3E75254CB83302451555639D9D30B954BA5 (void);
// 0x00000459 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Greater(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Greater_m1665D1DC73215289055436BFA6C779949D536200 (void);
// 0x0000045A Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.GreaterEqual(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_GreaterEqual_m39E7DF88C3B8FB080035C45DC63B322F713580AE (void);
// 0x0000045B Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Less(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Less_m2F0AB390F31B8EF6230B5537AB1F7B670DE3D376 (void);
// 0x0000045C Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.LessEqual(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_LessEqual_m0CAAD321A9E8CA079E350C2C14A989398DEE81A1 (void);
// 0x0000045D Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Equal(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Equal_m812D73F469BE04A1F9A1158961CF8FD37B12645A (void);
// 0x0000045E Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.LogicalOr(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_LogicalOr_mBF82787771AE8777EA83B01733B39653DF661DE5 (void);
// 0x0000045F Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.LogicalAnd(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_LogicalAnd_m7C6070D7382C82A2A917BAD68521E92070D41CDC (void);
// 0x00000460 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.LogicalXor(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_LogicalXor_m411FF0FEBCE625558AF6CD0CCECFD5FEF858E05D (void);
// 0x00000461 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.LogicalNot(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_LogicalNot_mC6F6585113BCBCB7CF87F94A74050AABE7FF7E4D (void);
// 0x00000462 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Flatten(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Flatten_mDCD336CDECB1CE103BC77C357D7E5C285096C64A (void);
// 0x00000463 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Reshape(Unity.Barracuda.Tensor,Unity.Barracuda.TensorShape)
extern void VerboseOps_Unity_Barracuda_IOps_Reshape_m1C88373D00FD769A3352CDFCEFD9CEE1000CE399 (void);
// 0x00000464 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Expand(Unity.Barracuda.Tensor,Unity.Barracuda.TensorShape)
extern void VerboseOps_Unity_Barracuda_IOps_Expand_m1F1202EC26D6CC8371B459890D361E91672500BA (void);
// 0x00000465 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Transpose(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Transpose_mE9799C421E88A6D392FCA69AEFC61683C0A5BAEA (void);
// 0x00000466 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Gather(Unity.Barracuda.Tensor[],System.Int32)
extern void VerboseOps_Unity_Barracuda_IOps_Gather_mE2E65FEFA022E80298CB571E2B1BC3CBEDAF7963 (void);
// 0x00000467 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Concat(Unity.Barracuda.Tensor[],System.Int32)
extern void VerboseOps_Unity_Barracuda_IOps_Concat_mC36E9B81EBB934CC22A03CB0B5B456B56F9BBDEC (void);
// 0x00000468 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.StridedSlice(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void VerboseOps_Unity_Barracuda_IOps_StridedSlice_m580BF1E77BBC24CA261237AC8AAFEC5132665C61 (void);
// 0x00000469 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Tile(Unity.Barracuda.Tensor,System.Int32[])
extern void VerboseOps_Unity_Barracuda_IOps_Tile_mAFFD4C7F6654AB124867648DE2447C5F0A5BAD4B (void);
// 0x0000046A Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Copy(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Copy_m588767D25EFAE40F21A75765BDC6BC5D465F8FF1 (void);
// 0x0000046B Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Prepare(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Prepare_m03500CDF6D4ABC8651DC6D2B3F80630B15D26985 (void);
// 0x0000046C System.Void Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.ResetAllocator(System.Boolean)
extern void VerboseOps_Unity_Barracuda_IOps_ResetAllocator_mF8E2E7E0D0EAAFF4DFDE5768B5845185972EAA70 (void);
// 0x0000046D System.Void Unity.Barracuda.DeprecatedTensorExtensions::PinToDeviceAndUploadToIt(Unity.Barracuda.Tensor,Unity.Barracuda.ITensorData,System.Boolean)
extern void DeprecatedTensorExtensions_PinToDeviceAndUploadToIt_mF55AD0337BBCB366A7D9EEF08E6BEFCC066BC929 (void);
// 0x0000046E System.Void Unity.Barracuda.DeprecatedTensorExtensions::PinToDeviceAndDownloadFromIt(Unity.Barracuda.Tensor,Unity.Barracuda.ITensorData)
extern void DeprecatedTensorExtensions_PinToDeviceAndDownloadFromIt_m5F87759D29776966AAD11576A3C6B86A9DF3D160 (void);
// 0x0000046F Unity.Barracuda.ITensorData Unity.Barracuda.DeprecatedTensorExtensions::Unpin(Unity.Barracuda.Tensor,System.Boolean)
extern void DeprecatedTensorExtensions_Unpin_m1D0B1D98FFDE1FE3BE6AFE72529C5CBA8E1EAF59 (void);
// 0x00000470 System.Void Unity.Barracuda.DeprecatedTensorExtensions::CastOnDevice(Unity.Barracuda.Tensor,Unity.Barracuda.ITensorData)
extern void DeprecatedTensorExtensions_CastOnDevice_m170EE51F8C2079DB1756F714415241D1E5197F10 (void);
// 0x00000471 System.Int32 Unity.Barracuda.DeprecatedTensorDataExtensions::GetMaxCount(Unity.Barracuda.ITensorData)
extern void DeprecatedTensorDataExtensions_GetMaxCount_m1966682CF84DBF0415A68C6A7255F1D1616A516B (void);
// 0x00000472 System.Void Unity.Barracuda.DeprecatedWorkerExtensions::AddInput(Unity.Barracuda.IWorker,Unity.Barracuda.Tensor)
extern void DeprecatedWorkerExtensions_AddInput_mC46AC4D5439B00B5970742CC912B3C2E6CF3FB37 (void);
// 0x00000473 System.Void Unity.Barracuda.DeprecatedWorkerExtensions::AddInput(Unity.Barracuda.IWorker,System.String,Unity.Barracuda.Tensor)
extern void DeprecatedWorkerExtensions_AddInput_m1B38290A8DDF7F82B3F6A8FB75A8EB68BFA334B7 (void);
// 0x00000474 Unity.Barracuda.Tensor Unity.Barracuda.DeprecatedWorkerExtensions::Peek(Unity.Barracuda.IWorker)
extern void DeprecatedWorkerExtensions_Peek_mDDF958AC326CEC256894B3BDE04D16C41AEE2700 (void);
// 0x00000475 Unity.Barracuda.Tensor Unity.Barracuda.DeprecatedWorkerExtensions::Peek(Unity.Barracuda.IWorker,System.String)
extern void DeprecatedWorkerExtensions_Peek_m01248A0B72DED9E1C6E0D5DDC718C76C7014C150 (void);
// 0x00000476 System.Collections.IEnumerator Unity.Barracuda.DeprecatedWorkerExtensions::ExecuteAsync(Unity.Barracuda.IWorker)
extern void DeprecatedWorkerExtensions_ExecuteAsync_m0719C64D9FB8DD93887E2885844286B504AF4F08 (void);
// 0x00000477 System.Collections.IEnumerator Unity.Barracuda.DeprecatedWorkerExtensions::ExecuteAsync(Unity.Barracuda.IWorker,Unity.Barracuda.Tensor)
extern void DeprecatedWorkerExtensions_ExecuteAsync_mA5B0816C9E9FBB49DE293678FD8BF0AB5B894C34 (void);
// 0x00000478 System.Collections.IEnumerator Unity.Barracuda.DeprecatedWorkerExtensions::ExecuteAsync(Unity.Barracuda.IWorker,System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.Tensor>)
extern void DeprecatedWorkerExtensions_ExecuteAsync_m2867BB24FA67F8EA1CE115E67CBF3DFEE32668DD (void);
// 0x00000479 System.Void Unity.Barracuda.DeprecatedWorkerExtensions::WaitForCompletion(Unity.Barracuda.IWorker)
extern void DeprecatedWorkerExtensions_WaitForCompletion_mF1A91212428EA60825D6AFBA07AEF17F798E541D (void);
// 0x0000047A System.Single Unity.Barracuda.DeprecatedWorkerExtensions::GetAsyncProgress(Unity.Barracuda.IWorker)
extern void DeprecatedWorkerExtensions_GetAsyncProgress_mA1188A83E04723AB65CC95ADEAA6B4F2C2D930CF (void);
// 0x0000047B Unity.Barracuda.Tensor Unity.Barracuda.DeprecatedWorkerExtensions::ExecuteAndWaitForCompletion(Unity.Barracuda.IWorker,Unity.Barracuda.Tensor)
extern void DeprecatedWorkerExtensions_ExecuteAndWaitForCompletion_mA433D87323B43A84DE42B66C54D074A141F58D76 (void);
// 0x0000047C Unity.Barracuda.Tensor Unity.Barracuda.DeprecatedWorkerExtensions::ExecuteAndWaitForCompletion(Unity.Barracuda.IWorker,System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.Tensor>)
extern void DeprecatedWorkerExtensions_ExecuteAndWaitForCompletion_m8CB819E908C70310D54F1989909523180BA6D06E (void);
// 0x0000047D Unity.Barracuda.Tensor Unity.Barracuda.DeprecatedWorkerExtensions::FetchAndTakeOwnership(Unity.Barracuda.IWorker)
extern void DeprecatedWorkerExtensions_FetchAndTakeOwnership_m588E1ABFE92AFA909AF440E329171F49CB6E13AB (void);
// 0x0000047E Unity.Barracuda.Tensor Unity.Barracuda.DeprecatedWorkerExtensions::FetchAndTakeOwnership(Unity.Barracuda.IWorker,System.String)
extern void DeprecatedWorkerExtensions_FetchAndTakeOwnership_m1A654B3B40DAF05A812BEF10E529E09FB135031D (void);
// 0x0000047F Unity.Barracuda.Tensor Unity.Barracuda.DeprecatedWorkerExtensions::Fetch(Unity.Barracuda.IWorker)
extern void DeprecatedWorkerExtensions_Fetch_mCCE672631D4E62901B77B005E0AF733F0697C1FE (void);
// 0x00000480 Unity.Barracuda.Tensor Unity.Barracuda.DeprecatedWorkerExtensions::Fetch(Unity.Barracuda.IWorker,System.String)
extern void DeprecatedWorkerExtensions_Fetch_mCDB2DF7913EA99EF49C0AF88D3CF3760428DD8A1 (void);
// 0x00000481 System.Boolean Unity.Barracuda.BarracudaWorkerFactory::IsType(Unity.Barracuda.WorkerFactory_Type,Unity.Barracuda.BarracudaWorkerFactory_Flags)
extern void BarracudaWorkerFactory_IsType_mC6675C4A6C5473F085A86B3ADD0DE3AA0DB16CEE (void);
// 0x00000482 System.Void Unity.Barracuda.BarracudaWorkerFactory::.ctor()
extern void BarracudaWorkerFactory__ctor_m83387F76C19A4385B3A4CD264BE6D412E0C9C277 (void);
// 0x00000483 System.Void Unity.Barracuda.BarracudaTextureUtils::TensorToRenderTexture(Unity.Barracuda.Tensor,UnityEngine.RenderTexture,System.Int32,System.Int32,System.Single,System.Single)
extern void BarracudaTextureUtils_TensorToRenderTexture_m6585BBA0A40D5DAEC469A92ED7D03AA81E8B40BE (void);
// 0x00000484 UnityEngine.RenderTexture Unity.Barracuda.BarracudaTextureUtils::TensorToRenderTexture(Unity.Barracuda.Tensor,System.Int32,System.Int32,System.Single,System.Single)
extern void BarracudaTextureUtils_TensorToRenderTexture_mBCFF25633EE63C16B5D47CEB7BE4EB7EA9494CB6 (void);
// 0x00000485 System.Void Unity.Barracuda.BarracudaTextureUtils::.ctor()
extern void BarracudaTextureUtils__ctor_m6FC37178C36F7DA858973C68CD4EE26766279258 (void);
// 0x00000486 System.Void Unity.Barracuda.IWorker::PrepareForInput(System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.TensorShape>)
// 0x00000487 System.Void Unity.Barracuda.IWorker::SetInput(Unity.Barracuda.Tensor)
// 0x00000488 System.Void Unity.Barracuda.IWorker::SetInput(System.String,Unity.Barracuda.Tensor)
// 0x00000489 Unity.Barracuda.IWorker Unity.Barracuda.IWorker::Execute()
// 0x0000048A Unity.Barracuda.IWorker Unity.Barracuda.IWorker::Execute(Unity.Barracuda.Tensor)
// 0x0000048B Unity.Barracuda.IWorker Unity.Barracuda.IWorker::Execute(System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.Tensor>)
// 0x0000048C System.Collections.IEnumerator Unity.Barracuda.IWorker::StartManualSchedule()
// 0x0000048D System.Collections.IEnumerator Unity.Barracuda.IWorker::StartManualSchedule(Unity.Barracuda.Tensor)
// 0x0000048E System.Collections.IEnumerator Unity.Barracuda.IWorker::StartManualSchedule(System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.Tensor>)
// 0x0000048F System.Void Unity.Barracuda.IWorker::FlushSchedule(System.Boolean)
// 0x00000490 System.Single Unity.Barracuda.IWorker::get_scheduleProgress()
// 0x00000491 Unity.Barracuda.Tensor Unity.Barracuda.IWorker::PeekOutput()
// 0x00000492 Unity.Barracuda.Tensor Unity.Barracuda.IWorker::PeekOutput(System.String)
// 0x00000493 Unity.Barracuda.Tensor[] Unity.Barracuda.IWorker::PeekConstants(System.String)
// 0x00000494 System.String Unity.Barracuda.IWorker::Summary()
// 0x00000495 Unity.Barracuda.Tensor Unity.Barracuda.WorkerExtensions::CopyOutput(Unity.Barracuda.IWorker)
extern void WorkerExtensions_CopyOutput_mB8A566F60F3F334C9752F334554C6A1017CD25F5 (void);
// 0x00000496 Unity.Barracuda.Tensor Unity.Barracuda.WorkerExtensions::CopyOutput(Unity.Barracuda.IWorker,System.String)
extern void WorkerExtensions_CopyOutput_m30DC88BF257396FAA1C595854AEBBD298A551626 (void);
// 0x00000497 System.Void Unity.Barracuda.ITensorData::Reserve(System.Int32)
// 0x00000498 System.Void Unity.Barracuda.ITensorData::Upload(System.Single[],Unity.Barracuda.TensorShape,System.Int32)
// 0x00000499 System.Boolean Unity.Barracuda.ITensorData::ScheduleAsyncDownload(System.Int32)
// 0x0000049A System.Single[] Unity.Barracuda.ITensorData::Download(Unity.Barracuda.TensorShape)
// 0x0000049B System.Single[] Unity.Barracuda.ITensorData::SharedAccess(System.Int32&)
// 0x0000049C System.Int32 Unity.Barracuda.ITensorData::get_maxCapacity()
// 0x0000049D Unity.Jobs.JobHandle Unity.Barracuda.IDependableTensorData::get_fence()
// 0x0000049E System.Int32 Unity.Barracuda.RecurrentState::InferBatchSize(System.Int32,System.Int32,System.String)
extern void RecurrentState_InferBatchSize_mD0C8CDF60F09421B04C5CFB5B7EC254D6DD142E5 (void);
// 0x0000049F System.Void Unity.Barracuda.RecurrentState::.ctor(Unity.Barracuda.Model,System.Int32,System.Collections.Generic.Dictionary`2<System.String,Unity.Barracuda.Tensor>)
extern void RecurrentState__ctor_mC57D0F3841A448F18060B39A2C7742B5ABF479CE (void);
// 0x000004A0 System.Void Unity.Barracuda.RecurrentState::Finalize()
extern void RecurrentState_Finalize_mA0F36A51A63A2E40687AD6414FB0CBE68552FDF2 (void);
// 0x000004A1 System.Void Unity.Barracuda.RecurrentState::Dispose()
extern void RecurrentState_Dispose_mE7585AB7189449B613CB333121FFD836A5931E64 (void);
// 0x000004A2 System.Int32 Unity.Barracuda.RecurrentState::GetBatchSize()
extern void RecurrentState_GetBatchSize_m7D1F5CB73184CB5D0F0E870616FE199836700765 (void);
// 0x000004A3 System.Void Unity.Barracuda.RecurrentState::BeforeExecution(Unity.Barracuda.IWorker)
extern void RecurrentState_BeforeExecution_m04ADFD7B864120B2DA09F8B634D772C9ECF41724 (void);
// 0x000004A4 System.Void Unity.Barracuda.RecurrentState::AfterExecution(Unity.Barracuda.IWorker)
extern void RecurrentState_AfterExecution_mE7D4EE4929F801F1A7C770FC35AEF55396A3765E (void);
// 0x000004A5 Unity.Barracuda.IWorker Unity.Barracuda.WorkerFactory::CreateWorker(Unity.Barracuda.WorkerFactory_Type,Unity.Barracuda.Model,System.String[],System.String[],System.Boolean,Unity.Barracuda.WorkerFactory_Type,Unity.Barracuda.CompareOpsUtils_LogLevel)
extern void WorkerFactory_CreateWorker_m1CCB263E79A5A508C10E94BDAEAB5F75C38C8C99 (void);
// 0x000004A6 Unity.Barracuda.IWorker Unity.Barracuda.WorkerFactory::CreateWorker(Unity.Barracuda.WorkerFactory_Type,Unity.Barracuda.Model,System.String[],System.String[],Unity.Barracuda.WorkerFactory_WorkerConfiguration)
extern void WorkerFactory_CreateWorker_mF911C768864D34E5F89B7B5A0B0814AA6EDAC978 (void);
// 0x000004A7 Unity.Barracuda.IWorker Unity.Barracuda.WorkerFactory::CreateWorker(Unity.Barracuda.Model,System.String[],System.String[],Unity.Barracuda.WorkerFactory_Device,System.Boolean)
extern void WorkerFactory_CreateWorker_m75F17D507AEE7D693A094B4667CDBD8582FAA011 (void);
// 0x000004A8 Unity.Barracuda.IWorker Unity.Barracuda.WorkerFactory::CreateWorker(Unity.Barracuda.WorkerFactory_Type,Unity.Barracuda.Model,System.Boolean)
extern void WorkerFactory_CreateWorker_mF83C9DEA6284364E9DBB0BF13E8B898C8CD04DF6 (void);
// 0x000004A9 Unity.Barracuda.IWorker Unity.Barracuda.WorkerFactory::CreateWorker(Unity.Barracuda.WorkerFactory_Type,Unity.Barracuda.Model,System.String[],System.Boolean)
extern void WorkerFactory_CreateWorker_mB8AC25DD65EB32B7E2B5A8E576D6FDAF7E20C7C4 (void);
// 0x000004AA Unity.Barracuda.IWorker Unity.Barracuda.WorkerFactory::CreateWorker(Unity.Barracuda.WorkerFactory_Type,Unity.Barracuda.Model,System.String[],System.String[],System.Boolean)
extern void WorkerFactory_CreateWorker_mBFB091E02E5A2A989D692F3E287CAA7FFF14B293 (void);
// 0x000004AB Unity.Barracuda.IWorker Unity.Barracuda.WorkerFactory::CreateWorker(Unity.Barracuda.WorkerFactory_Type,Unity.Barracuda.Model,System.Boolean,Unity.Barracuda.WorkerFactory_Type,Unity.Barracuda.CompareOpsUtils_LogLevel)
extern void WorkerFactory_CreateWorker_m8BDD146243B89037E8AE7010D09D2A4E08FDF0FF (void);
// 0x000004AC Unity.Barracuda.IWorker Unity.Barracuda.WorkerFactory::CreateWorker(Unity.Barracuda.WorkerFactory_Type,Unity.Barracuda.Model,Unity.Barracuda.WorkerFactory_WorkerConfiguration)
extern void WorkerFactory_CreateWorker_mAE742B72619535E96404DAAB3437F855CE0BA6FF (void);
// 0x000004AD Unity.Barracuda.IWorker Unity.Barracuda.WorkerFactory::CreateWorker(Unity.Barracuda.Model,System.Boolean)
extern void WorkerFactory_CreateWorker_mEF6CEF64E5732E9EA400E7AA36818DC9B7C38B9F (void);
// 0x000004AE Unity.Barracuda.IWorker Unity.Barracuda.WorkerFactory::CreateWorker(Unity.Barracuda.Model,Unity.Barracuda.WorkerFactory_Device,System.Boolean)
extern void WorkerFactory_CreateWorker_mACD3BFB985D98EF816E15DC3498D3596FF8D2E40 (void);
// 0x000004AF Unity.Barracuda.IWorker Unity.Barracuda.WorkerFactory::CreateWorker(Unity.Barracuda.Model,System.String[],Unity.Barracuda.WorkerFactory_Device,System.Boolean)
extern void WorkerFactory_CreateWorker_m52CA6326D58304069A92F2E577523F699C431209 (void);
// 0x000004B0 Unity.Barracuda.IWorker Unity.Barracuda.WorkerFactory::CreateReferenceCPUWorker(Unity.Barracuda.Model,System.Boolean)
extern void WorkerFactory_CreateReferenceCPUWorker_mCC0EFAF8FC1997E87B62D241375A6C8239841462 (void);
// 0x000004B1 Unity.Barracuda.IWorker Unity.Barracuda.WorkerFactory::CreateReferenceComputeWorker(Unity.Barracuda.Model,System.Boolean)
extern void WorkerFactory_CreateReferenceComputeWorker_m30873C1A0A1CF9EFD76A236228BDC13BDAB7E0AE (void);
// 0x000004B2 Unity.Barracuda.IWorker Unity.Barracuda.WorkerFactory::CreateComputeWorker(Unity.Barracuda.Model,System.Boolean)
extern void WorkerFactory_CreateComputeWorker_m6DD71BDBC9443007C596D3798EC6FFCAEE88056D (void);
// 0x000004B3 System.Boolean Unity.Barracuda.WorkerFactory::IsType(Unity.Barracuda.WorkerFactory_Type,Unity.Barracuda.WorkerFactory_Device)
extern void WorkerFactory_IsType_mD24DDA68E52E252C756BD086446FF7653683E010 (void);
// 0x000004B4 Unity.Barracuda.WorkerFactory_Type Unity.Barracuda.WorkerFactory::GetBestTypeForDevice(Unity.Barracuda.WorkerFactory_Device)
extern void WorkerFactory_GetBestTypeForDevice_mF7271EDB2EBF45A6EDE7E9855B4FA26A838E5B04 (void);
// 0x000004B5 Unity.Barracuda.WorkerFactory_Type Unity.Barracuda.WorkerFactory::ValidateType(Unity.Barracuda.WorkerFactory_Type)
extern void WorkerFactory_ValidateType_m72021C7029E9FC26063FB82795EA677B5F4CC69C (void);
// 0x000004B6 System.Void Unity.Barracuda.WorkerFactory::.ctor()
extern void WorkerFactory__ctor_mBAA741A2B4F59995B291B24DBBACE1550CA38A90 (void);
// 0x000004B7 System.Boolean Unity.Barracuda.WaitForCompletion::get_keepWaiting()
extern void WaitForCompletion_get_keepWaiting_m47E56787D677F9686F5CA4DAF7C1B5969F30A917 (void);
// 0x000004B8 System.Void Unity.Barracuda.WaitForCompletion::.ctor(Unity.Barracuda.Tensor)
extern void WaitForCompletion__ctor_m9C0040F681E6480E57C086B51A4AF5D619B2FD44 (void);
// 0x000004B9 Unity.Barracuda.IWorker Unity.Barracuda.ModelExtensions::CreateWorker(Unity.Barracuda.Model,Unity.Barracuda.WorkerFactory_Device,System.Boolean)
extern void ModelExtensions_CreateWorker_m5419525AB16370BA02A6CFE7379BC26B02C8BC6A (void);
// 0x000004BA Unity.Barracuda.IWorker Unity.Barracuda.ModelExtensions::CreateWorker(Unity.Barracuda.Model,System.String[],System.String[],Unity.Barracuda.WorkerFactory_Device,System.Boolean)
extern void ModelExtensions_CreateWorker_m3D4587AB7B9F2395E5880E3DA378EC1615721084 (void);
// 0x000004BB Unity.Barracuda.IWorker Unity.Barracuda.NNModelExtensions::CreateWorker(Unity.Barracuda.NNModel,Unity.Barracuda.WorkerFactory_Device,System.Boolean)
extern void NNModelExtensions_CreateWorker_mD023324851ED4B695BBEB698AA91775807EF09A9 (void);
// 0x000004BC Unity.Barracuda.IWorker Unity.Barracuda.NNModelExtensions::CreateWorker(Unity.Barracuda.NNModel,System.String[],System.String[],Unity.Barracuda.WorkerFactory_Device,System.Boolean)
extern void NNModelExtensions_CreateWorker_m9268667E7670CD11C703A302A7BFFD3B2EFFAABE (void);
// 0x000004BD System.Void Unity.Barracuda.D::LogWarning(System.Object)
extern void D_LogWarning_m56D60027B24AB88A33A77143D00D238576CCEC3D (void);
// 0x000004BE System.Void Unity.Barracuda.D::LogWarning(System.Object,UnityEngine.Object)
extern void D_LogWarning_m439B0EDE21F37A4BCD6BF84E4F665EB16EF3D009 (void);
// 0x000004BF System.Void Unity.Barracuda.D::LogError(System.Object)
extern void D_LogError_mC33CAB8D2CC984E834BF95F1A8A6FDD3F4763EB2 (void);
// 0x000004C0 System.Void Unity.Barracuda.D::LogError(System.Object,UnityEngine.Object)
extern void D_LogError_m17FC481CF8E2E1926469F1FC038544BA1A2D4090 (void);
// 0x000004C1 System.Void Unity.Barracuda.D::Log(System.Object)
extern void D_Log_m693C3FC3A3B6D906FCC855F9055D21CE42AB3E6C (void);
// 0x000004C2 System.Void Unity.Barracuda.D::Log(System.Object,UnityEngine.Object)
extern void D_Log_m3986C6136106FBCE882D82981F04BC17746FEA12 (void);
// 0x000004C3 System.Void Unity.Barracuda.D::.ctor()
extern void D__ctor_mE81A2265961A8E14145096310A466895D4B3BFEC (void);
// 0x000004C4 System.Void Unity.Barracuda.D::.cctor()
extern void D__cctor_m5925A91B859C6C31105143CE1E6720E33EFFE0ED (void);
// 0x000004C5 System.Void Unity.Barracuda.Debug::.ctor()
extern void Debug__ctor_m8B495455BBD8775E5755C483FC39A9E336813743 (void);
// 0x000004C6 System.Void Unity.Barracuda.NNModel::.ctor()
extern void NNModel__ctor_m2028EFFF4642EA8E86E1FFC61E555F77EA2160CE (void);
// 0x000004C7 System.Void Unity.Barracuda.NNModelData::.ctor()
extern void NNModelData__ctor_m1151DE5B545429CAD547BA5CC0397A4DFD77FE5B (void);
// 0x000004C8 System.Boolean Unity.Barracuda.StringStringPair::Equals(Unity.Barracuda.StringStringPair)
extern void StringStringPair_Equals_m7D012DC50D9474D5BD80E079A4466ED876ADF5E8_AdjustorThunk (void);
// 0x000004C9 System.Boolean Unity.Barracuda.StringStringPair::Equals(System.Object)
extern void StringStringPair_Equals_mF3FFEE92C231910A795A1961DDDD06D50A209DCF_AdjustorThunk (void);
// 0x000004CA System.Int32 Unity.Barracuda.StringStringPair::GetHashCode()
extern void StringStringPair_GetHashCode_m2253F757CE9072E6D5B787F9EE94134B571D35D1_AdjustorThunk (void);
// 0x000004CB System.Int32 Unity.Barracuda.StringStringLongTriplet::GetHashCode()
extern void StringStringLongTriplet_GetHashCode_m0DAD6512DF920A708A0BF6E68C8BE09CCF1939EE_AdjustorThunk (void);
// 0x000004CC System.Boolean Unity.Barracuda.StringStringLongTriplet::Equals(Unity.Barracuda.StringStringLongTriplet)
extern void StringStringLongTriplet_Equals_m8BCD5BF702D5A133753D068658447A160E864ECE_AdjustorThunk (void);
// 0x000004CD System.Boolean Unity.Barracuda.StringStringLongTriplet::Equals(System.Object)
extern void StringStringLongTriplet_Equals_m6844DD6550E7413E85F73100B5FBF39731C81C46_AdjustorThunk (void);
// 0x000004CE System.String Unity.Barracuda.StringCache::Lookup(System.String,System.String)
extern void StringCache_Lookup_m238C10DB2D1A56F2E53D9ADB3FAC3DDD7E72542D (void);
// 0x000004CF System.String Unity.Barracuda.StringCache::Lookup(System.String,System.String,System.Int64)
extern void StringCache_Lookup_m9BCC2DD34D4BF67CDA8C6C94E8E439A8D1F61950 (void);
// 0x000004D0 System.Void Unity.Barracuda.StringCache::Clear()
extern void StringCache_Clear_mD6AC51027976151CDDF2086B7CE967EEDB7CFFC1 (void);
// 0x000004D1 System.Void Unity.Barracuda.StringCache::.ctor()
extern void StringCache__ctor_mB736B4E038E47626263896A007D480B871969C12 (void);
// 0x000004D2 System.Void Unity.Barracuda.TestSet::.ctor(Unity.Barracuda.RawTestSet)
extern void TestSet__ctor_m71CF71FFEC980C89A8AC6D83144CF5CF3F639E10 (void);
// 0x000004D3 System.Void Unity.Barracuda.TestSet::.ctor(Unity.Barracuda.JSONTestSet)
extern void TestSet__ctor_mC16DF260773D40C208F2261C807F75C6B05877A3 (void);
// 0x000004D4 System.Void Unity.Barracuda.TestSet::.ctor()
extern void TestSet__ctor_m543D88CA6DBEDF13EDBB1120FC96422B6174597F (void);
// 0x000004D5 System.Boolean Unity.Barracuda.TestSet::SupportsNames()
extern void TestSet_SupportsNames_m757AE4CDFD818A8051C1569A2D9726D3C0D372C6 (void);
// 0x000004D6 System.Int32 Unity.Barracuda.TestSet::GetOutputCount()
extern void TestSet_GetOutputCount_mC04D9CD2E215617ED1D49E91344895585361EF30 (void);
// 0x000004D7 System.Single[] Unity.Barracuda.TestSet::GetOutputData(System.Int32)
extern void TestSet_GetOutputData_mAEE0FB06850CB8E3C68579C45AB80B4FF68394A3 (void);
// 0x000004D8 System.String Unity.Barracuda.TestSet::GetOutputName(System.Int32)
extern void TestSet_GetOutputName_m5880A3A73AB4ABC801EEAD39B785E42A271DE321 (void);
// 0x000004D9 System.Int32 Unity.Barracuda.TestSet::GetInputCount()
extern void TestSet_GetInputCount_m03EC2C249D3062306F199FD65D071400DEB5D895 (void);
// 0x000004DA System.String Unity.Barracuda.TestSet::GetInputName(System.Int32)
extern void TestSet_GetInputName_m192C42B0DF7E697883E8F4867B7D2AE023679087 (void);
// 0x000004DB System.Single[] Unity.Barracuda.TestSet::GetInputData(System.Int32)
extern void TestSet_GetInputData_mBD1A3E4E4377E0725489B22D7921F0BA49F220DC (void);
// 0x000004DC System.Int32[] Unity.Barracuda.TestSet::GetInputShape(System.Int32)
extern void TestSet_GetInputShape_m47B13A4DA8F1987768EC1238D94BAF11A1CDA571 (void);
// 0x000004DD System.Int32[] Unity.Barracuda.TestSet::GetOutputShape(System.Int32)
extern void TestSet_GetOutputShape_m3BDF8616AF9DF58A595A1D078C24AC4F9F4270FC (void);
// 0x000004DE System.Collections.Generic.Dictionary`2<System.String,Unity.Barracuda.Tensor> Unity.Barracuda.TestSet::GetInputsAsTensorDictionary(System.Collections.Generic.Dictionary`2<System.String,Unity.Barracuda.Tensor>,System.Int32,System.Int32)
extern void TestSet_GetInputsAsTensorDictionary_m36DAAE89E408198CD021D8483EDE506682926E29 (void);
// 0x000004DF System.Collections.Generic.Dictionary`2<System.String,Unity.Barracuda.Tensor> Unity.Barracuda.TestSet::GetOutputsAsTensorDictionary(System.Collections.Generic.Dictionary`2<System.String,Unity.Barracuda.Tensor>,System.Int32,System.Int32)
extern void TestSet_GetOutputsAsTensorDictionary_m68EB153C9D640DCD831165ECA1A176F0EAAD7515 (void);
// 0x000004E0 Unity.Barracuda.Tensor Unity.Barracuda.TestSet::GetInputAsTensor(System.Int32,System.Int32,System.Int32)
extern void TestSet_GetInputAsTensor_mB57080D10DFADF6688929888C9501BFB2A7C070E (void);
// 0x000004E1 Unity.Barracuda.Tensor Unity.Barracuda.TestSet::GetOutputAsTensor(System.Int32,System.Int32,System.Int32)
extern void TestSet_GetOutputAsTensor_m13A2320ADB04C28E46E2ECA13F747F1E231B85E0 (void);
// 0x000004E2 System.Void Unity.Barracuda.RawTestSet::.ctor()
extern void RawTestSet__ctor_m5AEE7FAB05DE51464F35265EE85B4379AE5B296E (void);
// 0x000004E3 System.Void Unity.Barracuda.JSONTestSet::.ctor()
extern void JSONTestSet__ctor_m6C431AADADD57CE2C00B15A7AC4514B3EE341C15 (void);
// 0x000004E4 System.Void Unity.Barracuda.JSONTensorShape::.ctor()
extern void JSONTensorShape__ctor_m945E852B3801000FA7F77FA2CB3F8A795C0C7448 (void);
// 0x000004E5 System.Void Unity.Barracuda.JSONTensor::.ctor()
extern void JSONTensor__ctor_mD294CB63AA714E86E8CEB3F15D0DFCFDBC47C432 (void);
// 0x000004E6 Unity.Barracuda.TestSet Unity.Barracuda.TestSetLoader::Load(System.String)
extern void TestSetLoader_Load_mD98CF3853DCB35AF13BB2C498F7685A8CCA19DFA (void);
// 0x000004E7 Unity.Barracuda.TestSet Unity.Barracuda.TestSetLoader::LoadJSON(System.String)
extern void TestSetLoader_LoadJSON_m04E369BD9B8EBF812D915676388138BACAEC276A (void);
// 0x000004E8 Unity.Barracuda.TestSet Unity.Barracuda.TestSetLoader::LoadRaw(System.String)
extern void TestSetLoader_LoadRaw_m18414B84B82AC5F2EA5EDA893E8A5FEA0344B6E2 (void);
// 0x000004E9 UnityEngine.Texture Unity.Barracuda.TestSetLoader::LoadImage(System.String)
extern void TestSetLoader_LoadImage_m7A03F32F2E4A719AE23EB7A5ABDAB0661976738B (void);
// 0x000004EA System.Single[] Unity.Barracuda.TestSetLoader::LoadFloatArray(System.IO.BinaryReader)
extern void TestSetLoader_LoadFloatArray_m3E86DCFF8735EF81150A28672CF3E3DE8F5B93F6 (void);
// 0x000004EB System.IO.BinaryReader Unity.Barracuda.TestSetLoader::Open(System.String)
extern void TestSetLoader_Open_mE785C76CDE8B5240B45729C20AAD370C4F5C1289 (void);
// 0x000004EC System.Void Unity.Barracuda.TestSetLoader::.ctor()
extern void TestSetLoader__ctor_m28A932BDA9E3C117D5B8FCB5B5B171BDF96322FA (void);
// 0x000004ED System.Void Unity.Barracuda.Layer::.ctor(System.String)
extern void Layer__ctor_m0113B1EF77D9F6F56CA31666809F5A21010B46BC (void);
// 0x000004EE System.Void Unity.Barracuda.Layer::.ctor(System.String,Unity.Barracuda.Layer_Type,Unity.Barracuda.Layer_Activation)
extern void Layer__ctor_mE9AD6E4FBBE90CDC1A842E8BD17E60E665E0D2C8 (void);
// 0x000004EF System.Void Unity.Barracuda.Layer::.ctor(System.String,Unity.Barracuda.Layer_Activation)
extern void Layer__ctor_mAE102D0049A8C1C45F21A0D6C0DBD48E9277D16A (void);
// 0x000004F0 System.String Unity.Barracuda.Layer::ToString()
extern void Layer_ToString_mCA808A7B1C379C7F48D42005A82EE23BA73C1B8E (void);
// 0x000004F1 System.Collections.Generic.List`1<Unity.Barracuda.Model_ImporterWarning> Unity.Barracuda.Model::get_Warnings()
extern void Model_get_Warnings_m8D1A5B18F207686B74DB2DC5D4AF04A68259851E (void);
// 0x000004F2 Unity.Barracuda.Model Unity.Barracuda.Model::ShallowCopy()
extern void Model_ShallowCopy_m94698A04C5D0E3E54FF37E351306E6AA2EEF7B29 (void);
// 0x000004F3 System.String Unity.Barracuda.Model::ToString()
extern void Model_ToString_m882688E531F8E1E4C3C43EC6C33700B239484ABD (void);
// 0x000004F4 System.Void Unity.Barracuda.Model::.ctor()
extern void Model__ctor_m568A74FF783B366528B569149E19F22A3070DFEB (void);
// 0x000004F5 Unity.Barracuda.Tensor Unity.Barracuda.ModelMetadataExtensions::GetTensorByName(Unity.Barracuda.Model,System.String)
extern void ModelMetadataExtensions_GetTensorByName_m573DE9BA45DC6B9A10A58A47B8EB04C0F7E4181F (void);
// 0x000004F6 System.Nullable`1<Unity.Barracuda.TensorShape> Unity.Barracuda.ModelMetadataExtensions::GetShapeByName(Unity.Barracuda.Model,System.String)
extern void ModelMetadataExtensions_GetShapeByName_mDC4B400A6E210E71459451E110A53D2709716292 (void);
// 0x000004F7 Unity.Barracuda.Model Unity.Barracuda.ModelBuilder::get_model()
extern void ModelBuilder_get_model_m2EC44622D90519F901EBF52230A60608E0192424 (void);
// 0x000004F8 System.Void Unity.Barracuda.ModelBuilder::.ctor(Unity.Barracuda.Model)
extern void ModelBuilder__ctor_m0419DC0550766B26DF7D5B66ABAE252384B9AD6D (void);
// 0x000004F9 Unity.Barracuda.Model_Input Unity.Barracuda.ModelBuilder::Input(System.String,System.Int32[])
extern void ModelBuilder_Input_mAC404919844166213C636A14AD237A9EB70427AE (void);
// 0x000004FA Unity.Barracuda.Model_Input Unity.Barracuda.ModelBuilder::Input(System.String,Unity.Barracuda.TensorShape)
extern void ModelBuilder_Input_m2ECE20E332036C4D5FAAD6C53B1CF05C259D7647 (void);
// 0x000004FB Unity.Barracuda.Model_Input Unity.Barracuda.ModelBuilder::Input(System.String,System.Int32,System.Int32)
extern void ModelBuilder_Input_mCCAB6DCA685384E4980429B61A89E6A2F5D987AE (void);
// 0x000004FC Unity.Barracuda.Model_Input Unity.Barracuda.ModelBuilder::Input(System.String,System.Int32,System.Int32,System.Int32,System.Int32)
extern void ModelBuilder_Input_mA333BE257B22454794AC7CCB87E8CE866D68B46D (void);
// 0x000004FD System.String Unity.Barracuda.ModelBuilder::Output(System.Object)
extern void ModelBuilder_Output_m385A4E78839175058DB2A3A67EA867A3272EDD39 (void);
// 0x000004FE Unity.Barracuda.Model_Memory Unity.Barracuda.ModelBuilder::Memory(System.Object,System.Object,Unity.Barracuda.TensorShape)
extern void ModelBuilder_Memory_m76CBA7D4BD1CD59649CEBC3178AC4051A09DB813 (void);
// 0x000004FF System.String Unity.Barracuda.ModelBuilder::ResolveInput(System.Object)
extern void ModelBuilder_ResolveInput_m663256D944518DC5F04DD888757B0E57EC884B2E (void);
// 0x00000500 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Const(System.String,Unity.Barracuda.Tensor,System.Int32)
extern void ModelBuilder_Const_mD2BE02BE238EB6A3361719B67A7C07FDCB07EE08 (void);
// 0x00000501 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::ScaleBias(System.String,System.Object,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ModelBuilder_ScaleBias_mEB0D1A3122C0C214CB8A999B16503CFB517D659A (void);
// 0x00000502 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::LRN(System.String,System.Object,System.Single,System.Single,System.Single,System.Int32)
extern void ModelBuilder_LRN_m1B583D6B8ACB27E5553C18AA778C0E2DF6612BCF (void);
// 0x00000503 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Normalization(System.String,System.Object,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Single)
extern void ModelBuilder_Normalization_m1E25391C4F307C3009EC0B5E46F43E1B7A678CB4 (void);
// 0x00000504 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Dense(System.String,System.Object,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ModelBuilder_Dense_m8520C8EEEE62932644804706FC73A335345DEBB5 (void);
// 0x00000505 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Conv(System.String,Unity.Barracuda.Layer_Type,System.Object,System.Int32[],System.Int32[],System.Int32[],Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ModelBuilder_Conv_mEAF08959DEB3F9BD0EA45F090393AA517FC65235 (void);
// 0x00000506 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Conv2D(System.String,System.Object,System.Int32[],System.Int32[],Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ModelBuilder_Conv2D_m80135444AC52D1CADF78E15072971940F574E70C (void);
// 0x00000507 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::DepthwiseConv2D(System.String,System.Object,System.Int32[],System.Int32[],Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ModelBuilder_DepthwiseConv2D_m7F7E348E1FBF402177E492C0510DC718162C326B (void);
// 0x00000508 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Conv2DTrans(System.String,System.Object,System.Int32[],System.Int32[],System.Int32[],Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ModelBuilder_Conv2DTrans_m234ED626112398E565B120B6CB568DBE86B83569 (void);
// 0x00000509 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Pool(Unity.Barracuda.Layer_Type,System.String,System.Object,System.Int32[],System.Int32[],System.Int32[])
extern void ModelBuilder_Pool_m9CF31B2F6D0526DC1130CD436E61DCB098CCF406 (void);
// 0x0000050A Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::AvgPool2D(System.String,System.Object,System.Int32[],System.Int32[],System.Int32[])
extern void ModelBuilder_AvgPool2D_m9E81A66FBBA2C38B8E5D2D17C47E9835A3DE7066 (void);
// 0x0000050B Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::MaxPool2D(System.String,System.Object,System.Int32[],System.Int32[],System.Int32[])
extern void ModelBuilder_MaxPool2D_m4C783DA659A9DF75B408516A70A523EBB17AA5B0 (void);
// 0x0000050C Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::GlobalAvgPool2D(System.String,System.Object)
extern void ModelBuilder_GlobalAvgPool2D_mF6933A81F3D8D38BE1C846F10E37357C445AAD17 (void);
// 0x0000050D Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::GlobalMaxPool2D(System.String,System.Object)
extern void ModelBuilder_GlobalMaxPool2D_m093CE1CBCDFA4A92453B8789500F5459FAA87EF1 (void);
// 0x0000050E Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Upsample2D(System.String,System.Object,System.Int32[],System.Boolean)
extern void ModelBuilder_Upsample2D_m4E970748516DFB4C9FDD5C5A226333ED1589851C (void);
// 0x0000050F Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Upsample2D(System.String,System.Object,System.Object,System.Boolean)
extern void ModelBuilder_Upsample2D_m8E9EC95A91C9558E1A9E5B02F0D3C75926E62253 (void);
// 0x00000510 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Resample2D(System.String,System.Object,System.Int32[],System.Boolean)
extern void ModelBuilder_Resample2D_m14A72326103EC89A6823BA38968C65FE8E372CBA (void);
// 0x00000511 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::DepthToSpace(System.String,System.Object,System.Int32,System.String)
extern void ModelBuilder_DepthToSpace_m2260873CC481500A731A754D0B00C538426EE16A (void);
// 0x00000512 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::SpaceToDepth(System.String,System.Object,System.Int32)
extern void ModelBuilder_SpaceToDepth_m1AB61D72E9C8F141FDF05FA4DC22D31F6D0DE479 (void);
// 0x00000513 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Reshape(System.String,System.Object,System.Int32[])
extern void ModelBuilder_Reshape_mFA4F81B0D0F75884EF7245723871B4974B4FCA61 (void);
// 0x00000514 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Reshape(System.String,System.Object,Unity.Barracuda.TensorShape)
extern void ModelBuilder_Reshape_m5A6E53DEE4BA34054D72FBE9CDB808593FA7D70B (void);
// 0x00000515 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Reshape(System.String,System.Object,System.Object)
extern void ModelBuilder_Reshape_m1ED2D394475D370E1D82975A0B27C27CE44F8E87 (void);
// 0x00000516 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Expand(System.String,System.Object,System.Int32[])
extern void ModelBuilder_Expand_m2172CEFB25C5B45A8E06F7E1EC2670E429A2D173 (void);
// 0x00000517 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Flatten(System.String,System.Object)
extern void ModelBuilder_Flatten_m33B41BDD6545E9A73DA472B9988FD5813D079FA3 (void);
// 0x00000518 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Concat(System.String,System.Object[],System.Int32)
extern void ModelBuilder_Concat_m93E9D8FBB9101FF143C41D191242100AE3C3596A (void);
// 0x00000519 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::StridedSlice(System.String,System.Object,System.Int32[],System.Int32[],System.Int32[])
extern void ModelBuilder_StridedSlice_m199025259DC16F2B06E6E89878BCAE9867C4A270 (void);
// 0x0000051A Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::OneHot(System.String,System.Object,System.Int32,System.Int32,System.Int32)
extern void ModelBuilder_OneHot_m14F8C5157083AE855B7CA6BA7A2D03F25E4E2C03 (void);
// 0x0000051B Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Activation(Unity.Barracuda.Layer_Activation,System.String,System.Object)
extern void ModelBuilder_Activation_mCE56F9ECEF9AD8C5D98B1E1883A60525B980F8DD (void);
// 0x0000051C Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Identity(System.String,System.Object)
extern void ModelBuilder_Identity_m888EE257C8D81EBBBDF0D75C9DAC55FD88B07DD7 (void);
// 0x0000051D Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Relu(System.String,System.Object)
extern void ModelBuilder_Relu_m2EDCFCEDEE61B3A7F1A3CA16D348998A191288D8 (void);
// 0x0000051E Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Softmax(System.String,System.Object)
extern void ModelBuilder_Softmax_m076F3CCB8DC0B551C1D2F855616B2C8AE318F3C8 (void);
// 0x0000051F Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::LogSoftmax(System.String,System.Object)
extern void ModelBuilder_LogSoftmax_m6A0A0A0E7D97BCDC7BD75D10AA63A5149E0A0752 (void);
// 0x00000520 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Sqrt(System.String,System.Object)
extern void ModelBuilder_Sqrt_mE1E8D59681639D18DDE6869B6233602553F3133B (void);
// 0x00000521 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Tanh(System.String,System.Object)
extern void ModelBuilder_Tanh_m9043B0C082E96EA5784276885AC09335CE4C8E85 (void);
// 0x00000522 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Sigmoid(System.String,System.Object)
extern void ModelBuilder_Sigmoid_mFE1D7E573F027A0D42E13A7935014E1DD5D56756 (void);
// 0x00000523 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Elu(System.String,System.Object,System.Single)
extern void ModelBuilder_Elu_m1036DFD33F816C7601D1181BE99484A97C9B2850 (void);
// 0x00000524 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Relu6(System.String,System.Object)
extern void ModelBuilder_Relu6_mB46D89A24EA06AADB461947E28FC5696D52962C3 (void);
// 0x00000525 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::LeakyRelu(System.String,System.Object,System.Single)
extern void ModelBuilder_LeakyRelu_m65123086ECC85F430646F3890E6566FED6F043CB (void);
// 0x00000526 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Selu(System.String,System.Object,System.Single,System.Single)
extern void ModelBuilder_Selu_m4F4F7331F99FDFB33C1FD587964AEE0513409E81 (void);
// 0x00000527 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::PRelu(System.String,System.Object,System.Object)
extern void ModelBuilder_PRelu_m8EC6521E8B25E07280F85F24CB21C3FE7DB1E741 (void);
// 0x00000528 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Swish(System.String,System.Object)
extern void ModelBuilder_Swish_m0E8DEB8109442C24B65A1A50D9E2C8D8213B4179 (void);
// 0x00000529 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Clip(System.String,System.Object,System.Single,System.Single)
extern void ModelBuilder_Clip_m7659EF6E0D899BB1AA816DF5208BCEC0FF91BA2F (void);
// 0x0000052A Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Exp(System.String,System.Object)
extern void ModelBuilder_Exp_m16F29AEF5C816F6F0C403F6B5513D5D2998A02EC (void);
// 0x0000052B Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Log(System.String,System.Object)
extern void ModelBuilder_Log_mF207E4ED144B4B95373CB910CEDA4D6048B1E582 (void);
// 0x0000052C Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Neg(System.String,System.Object)
extern void ModelBuilder_Neg_mF1721A430ACC32A3FF72D5991E580B59FFE4CBD9 (void);
// 0x0000052D Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Reciprocal(System.String,System.Object)
extern void ModelBuilder_Reciprocal_m6DCE8C21AE33302EBA1427505E5568D971E8317F (void);
// 0x0000052E Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Abs(System.String,System.Object)
extern void ModelBuilder_Abs_m9AD3BA646CA31298839E252F148E844E864886BE (void);
// 0x0000052F Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Ceil(System.String,System.Object)
extern void ModelBuilder_Ceil_mF89167CAAD2523B86B82047CC38079BDA9A9CAFF (void);
// 0x00000530 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Floor(System.String,System.Object)
extern void ModelBuilder_Floor_mD8E9C5B49790C74931A24CA110551496584459E3 (void);
// 0x00000531 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Round(System.String,System.Object)
extern void ModelBuilder_Round_mB5B20118CBF9038F5C248DB3BA890B38631812B0 (void);
// 0x00000532 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Broadcast(Unity.Barracuda.Layer_Type,System.String,System.Object[])
extern void ModelBuilder_Broadcast_mE5E8D8F335A3ACC22CA3C1E6053A8C5BBDB6F1C0 (void);
// 0x00000533 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Add(System.String,System.Object[])
extern void ModelBuilder_Add_mD062A14CBA5A6AD1C05B090B150C3F7D05B7AF13 (void);
// 0x00000534 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Sub(System.String,System.Object[])
extern void ModelBuilder_Sub_m3B1CA4A1B8A19BDFDAB098CCC98104F87306BF0C (void);
// 0x00000535 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Mul(System.String,System.Object[])
extern void ModelBuilder_Mul_mD919B0BD204D3D94C94471696066973A66291722 (void);
// 0x00000536 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Div(System.String,System.Object[])
extern void ModelBuilder_Div_m510635BBF640ABF2019814159115B763FCF7F60D (void);
// 0x00000537 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Pow(System.String,System.Object[])
extern void ModelBuilder_Pow_mFB02C03C48CBE00C6424320D73267A7915F81E8F (void);
// 0x00000538 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Min(System.String,System.Object[])
extern void ModelBuilder_Min_mA7A9043F9758064A419B3A3F4032B4F54DF73956 (void);
// 0x00000539 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Max(System.String,System.Object[])
extern void ModelBuilder_Max_m4A44FF85A8D77663762648BA3263269A04416C3A (void);
// 0x0000053A Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Mean(System.String,System.Object[])
extern void ModelBuilder_Mean_m89C07FDEC4C22CB631AE701E452A45018BD87BAB (void);
// 0x0000053B Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Greater(System.String,System.Object,System.Object)
extern void ModelBuilder_Greater_mE14E0AAC222F4F212E6C30897D977DFBB3A4E65F (void);
// 0x0000053C Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::GreaterEqual(System.String,System.Object,System.Object)
extern void ModelBuilder_GreaterEqual_m7424B03560A8DEC4270BD6F335CCC9E15BA33FAD (void);
// 0x0000053D Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Less(System.String,System.Object,System.Object)
extern void ModelBuilder_Less_m6E2EF46610B483ABADEEFCAA617EEFD076D75506 (void);
// 0x0000053E Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::LessEqual(System.String,System.Object,System.Object)
extern void ModelBuilder_LessEqual_m6093A63B1B0E29A523D724D54EB44FB47B39C045 (void);
// 0x0000053F Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Equal(System.String,System.Object,System.Object)
extern void ModelBuilder_Equal_m90DA43175A84ACBC3BB5D407FED7BBAB909EEA9D (void);
// 0x00000540 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::LogicalAnd(System.String,System.Object,System.Object)
extern void ModelBuilder_LogicalAnd_m891343C695F482E04C6173E0F354006F7BFEBE21 (void);
// 0x00000541 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::LogicalOr(System.String,System.Object,System.Object)
extern void ModelBuilder_LogicalOr_m85B41937C2C3F7ED57191F765263DEF8EB95A0C8 (void);
// 0x00000542 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::LogicalXor(System.String,System.Object,System.Object)
extern void ModelBuilder_LogicalXor_m1F29E168F998690D6FE6D0E62A55DFFC395EC97A (void);
// 0x00000543 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::LogicalNot(System.String,System.Object)
extern void ModelBuilder_LogicalNot_m2847D81F190E26561E4DCB4619055C04CA42AE24 (void);
// 0x00000544 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Pad(Unity.Barracuda.Layer_Type,System.String,System.Object,System.Int32[],System.Single)
extern void ModelBuilder_Pad_mF05082ED3993BAC19446B8A0E482B485D0186F91 (void);
// 0x00000545 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Border2D(System.String,System.Object,System.Int32[],System.Single)
extern void ModelBuilder_Border2D_m20C9CB1A82B07A0534D8D995465F50BE31E220CF (void);
// 0x00000546 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Pad2DEdge(System.String,System.Object,System.Int32[])
extern void ModelBuilder_Pad2DEdge_m49B21509624F180887F8BF659A65FEAE99B0B52C (void);
// 0x00000547 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Pad2DReflect(System.String,System.Object,System.Int32[])
extern void ModelBuilder_Pad2DReflect_mA22FF2C1F8BC424D7BAA9168498093261AA5D6DF (void);
// 0x00000548 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Pad2Symmetric(System.String,System.Object,System.Int32[])
extern void ModelBuilder_Pad2Symmetric_mE6F19427BEBCD323A49617F0C8B440ECFBE1D62C (void);
// 0x00000549 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::RandomNormal(System.String,System.Object,System.Single,System.Single,System.Single)
extern void ModelBuilder_RandomNormal_mCBCCA4A6B784CACAD44EF6BB597CAB23AFB064FF (void);
// 0x0000054A Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::RandomNormal(System.String,Unity.Barracuda.TensorShape,System.Single,System.Single,System.Single)
extern void ModelBuilder_RandomNormal_m4CB46E27D5B8820CECC8B0500800B2D767911567 (void);
// 0x0000054B Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::RandomUniform(System.String,System.Object,System.Single,System.Single,System.Single)
extern void ModelBuilder_RandomUniform_m143739905393D3EFE812496BE2BBBABE8B362E56 (void);
// 0x0000054C Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::RandomUniform(System.String,Unity.Barracuda.TensorShape,System.Single,System.Single,System.Single)
extern void ModelBuilder_RandomUniform_m1E3BA2DD86E3B58B49A175516FCE523210336993 (void);
// 0x0000054D Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Multinomial(System.String,System.Object,System.Int32,System.Single)
extern void ModelBuilder_Multinomial_m6637E3702FC9DB64D3688BDA319916879026E6ED (void);
// 0x0000054E Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Reduce(Unity.Barracuda.Layer_Type,System.String,System.Object,System.Int32)
extern void ModelBuilder_Reduce_m33AC8BE567E702176750909B3DF72F75BFA418AC (void);
// 0x0000054F Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Gather(System.String,System.Object,System.Object,System.Int32)
extern void ModelBuilder_Gather_m068BD1DBF4B9C8D3F2EA6B7F3EDC8873BE0FE613 (void);
// 0x00000550 System.String Unity.Barracuda.ModelBuilder::<Concat>b__35_0(System.Object)
extern void ModelBuilder_U3CConcatU3Eb__35_0_m314187E5887EB280573AFF38C0CDFD6E3D607B86 (void);
// 0x00000551 System.String Unity.Barracuda.ModelBuilder::<PRelu>b__50_0(System.Object)
extern void ModelBuilder_U3CPReluU3Eb__50_0_m2B777C7F75BC631C9E286AC90932DD1157DD2AB8 (void);
// 0x00000552 System.String Unity.Barracuda.ModelBuilder::<Broadcast>b__61_0(System.Object)
extern void ModelBuilder_U3CBroadcastU3Eb__61_0_mFE8693E24211D45DE902741B6225283A3D8578D7 (void);
// 0x00000553 System.String Unity.Barracuda.ModelBuilder::<Gather>b__90_0(System.Object)
extern void ModelBuilder_U3CGatherU3Eb__90_0_m7CC4CFB690770A3BBC348B853943749B3CF4BF4B (void);
// 0x00000554 Unity.Barracuda.Model Unity.Barracuda.ModelLoader::Load(Unity.Barracuda.NNModel,System.Boolean,System.Boolean)
extern void ModelLoader_Load_m9375DAD92EAE6E4B2625514328BC2D68DD53C159 (void);
// 0x00000555 Unity.Barracuda.Model Unity.Barracuda.ModelLoader::LoadFromStreamingAssets(System.String,System.Boolean,System.Boolean)
extern void ModelLoader_LoadFromStreamingAssets_m22EC31BA7FE964BB3F5B72C2CE84429A2DEFAE1C (void);
// 0x00000556 Unity.Barracuda.Model Unity.Barracuda.ModelLoader::Load(System.String,System.Boolean,System.Boolean)
extern void ModelLoader_Load_mD2D753F3DF9F42F25108D9AE8F1A91A8D8B32DB8 (void);
// 0x00000557 Unity.Barracuda.Model Unity.Barracuda.ModelLoader::Load(System.Byte[],System.Boolean,System.Boolean)
extern void ModelLoader_Load_m8DF324632A6F815C6307D055FEFD76CB0A5C4E63 (void);
// 0x00000558 Unity.Barracuda.Model Unity.Barracuda.ModelLoader::Load(System.Byte[],System.Boolean,System.Boolean,System.Boolean)
extern void ModelLoader_Load_mB0A0BFDABD7D672C4CE712F2E43FC7977D68D1B4 (void);
// 0x00000559 Unity.Barracuda.Model Unity.Barracuda.ModelLoader::Load(System.IO.BinaryReader,System.Boolean,System.Boolean,System.Boolean)
extern void ModelLoader_Load_m95795739442147807B0E92DB56FE1C4F5A9CD96F (void);
// 0x0000055A System.Void Unity.Barracuda.ModelLoader::PatchLayer(System.Collections.Generic.List`1<Unity.Barracuda.Layer>,Unity.Barracuda.Layer)
extern void ModelLoader_PatchLayer_m9FF020F9C143C2A86354831E2567D31232139F88 (void);
// 0x0000055B System.Int32[] Unity.Barracuda.ModelLoader::ReadInt32Array(System.IO.BinaryReader)
extern void ModelLoader_ReadInt32Array_mF73CE26F70C79B81BD89ECFEA4FDCAB025587F43 (void);
// 0x0000055C System.String Unity.Barracuda.ModelLoader::ReadString(System.IO.BinaryReader)
extern void ModelLoader_ReadString_m7798E612AA638016C9D580339B0874B4A04E4B0C (void);
// 0x0000055D System.String[] Unity.Barracuda.ModelLoader::ReadStringArray(System.IO.BinaryReader)
extern void ModelLoader_ReadStringArray_mF254A17722EFE36EFD9542990137EF89516CF219 (void);
// 0x0000055E System.IO.BinaryReader Unity.Barracuda.ModelLoader::Open(System.String)
extern void ModelLoader_Open_m579C886FFF13A6587F9D03D2EF52E9F36A4E4F63 (void);
// 0x0000055F System.IO.BinaryReader Unity.Barracuda.ModelLoader::Open(System.Byte[])
extern void ModelLoader_Open_m7DC5D3D6AC2618EC40AA24DFDA296120E32828FB (void);
// 0x00000560 System.Void Unity.Barracuda.ModelWriter::Save(System.String,Unity.Barracuda.Model,System.Boolean)
extern void ModelWriter_Save_mB7CCBA8973CA37926B51271919C595E44E540E7F (void);
// 0x00000561 System.Void Unity.Barracuda.ModelWriter::Save(System.IO.BinaryWriter,Unity.Barracuda.Model,System.Boolean)
extern void ModelWriter_Save_m2B184065F3BB2EC19F0AA585DD4115A6ACE8DD9D (void);
// 0x00000562 System.Void Unity.Barracuda.ModelWriter::WriteInt32Array(System.IO.BinaryWriter,System.Int32[])
extern void ModelWriter_WriteInt32Array_mE6F7083F1DBB8896683AF1319642407791DC14E4 (void);
// 0x00000563 System.Void Unity.Barracuda.ModelWriter::WriteString(System.IO.BinaryWriter,System.String)
extern void ModelWriter_WriteString_m0C4C15BD1132B04B0E13AA7A48A154AEB07276BD (void);
// 0x00000564 System.Void Unity.Barracuda.ModelWriter::WriteStringArray(System.IO.BinaryWriter,System.String[])
extern void ModelWriter_WriteStringArray_m579E453A70E4F4AFA17F05A925468077A591736D (void);
// 0x00000565 System.Void Unity.Barracuda.ModelWriter::WriteStringArray(System.IO.BinaryWriter,System.Collections.Generic.List`1<System.String>)
extern void ModelWriter_WriteStringArray_mE61469BC3046895E36DDDD5199B3C75345347B8C (void);
// 0x00000566 System.Void Unity.Barracuda.ModelWriter::.ctor()
extern void ModelWriter__ctor_m53545E764BF9627070D578DD075F713570B376E9 (void);
// 0x00000567 System.Boolean Unity.Barracuda.BLASPlugin::IsNative()
// 0x00000568 System.Boolean Unity.Barracuda.BLASPlugin::IsCurrentPlatformSupported()
// 0x00000569 System.Void Unity.Barracuda.BLASPlugin::SGEMM(System.Single*,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Int32,System.Boolean,System.Boolean)
// 0x0000056A Unity.Jobs.JobHandle Unity.Barracuda.BLASPlugin::ScheduleSGEMM(Unity.Jobs.JobHandle,System.Single*,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Int32,System.Boolean,System.Boolean)
// 0x0000056B Unity.Barracuda.BLASPlugin Unity.Barracuda.BLASPluginFactory::CreateBLASPlugin()
extern void BLASPluginFactory_CreateBLASPlugin_m33C51D0609037137512CCEBF23CF4DE272F0CD4E (void);
// 0x0000056C System.Void Unity.Barracuda.BLASPluginFactory::.ctor()
extern void BLASPluginFactory__ctor_m9237A7B0880050BACC2BC7698F8080175D82E7FD (void);
// 0x0000056D System.Void Unity.Barracuda.TensorShape::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
extern void TensorShape__ctor_m0BF4DC124E1A4A580C0BB3E4A40AB2DD6A3F8A79_AdjustorThunk (void);
// 0x0000056E System.Void Unity.Barracuda.TensorShape::.ctor(System.Int32,System.Int32)
extern void TensorShape__ctor_m8BA4D972B76A2C61A1C8FE09FC156EFE1FE972DF_AdjustorThunk (void);
// 0x0000056F System.Void Unity.Barracuda.TensorShape::.ctor(System.Int32[])
extern void TensorShape__ctor_m653A60810E4A6757EAF73F4592E581BBD3253F51_AdjustorThunk (void);
// 0x00000570 System.Int32 Unity.Barracuda.TensorShape::get_kernelHeight()
extern void TensorShape_get_kernelHeight_m99A770D3402514DA6CF1BB3C3B403B912DF0F953_AdjustorThunk (void);
// 0x00000571 System.Int32 Unity.Barracuda.TensorShape::get_kernelWidth()
extern void TensorShape_get_kernelWidth_mB241B0ADE1C641FC5520A1CDC2917B64B414F9B7_AdjustorThunk (void);
// 0x00000572 System.Int32 Unity.Barracuda.TensorShape::get_kernelDepth()
extern void TensorShape_get_kernelDepth_mE3E515992DBB628776822C33B8BA42E62EC38B6C_AdjustorThunk (void);
// 0x00000573 System.Int32 Unity.Barracuda.TensorShape::get_kernelCount()
extern void TensorShape_get_kernelCount_m8AB275FAD017EEAA741A7152DF36CB85FE79935E_AdjustorThunk (void);
// 0x00000574 System.Int32 Unity.Barracuda.TensorShape::get_flatHeight()
extern void TensorShape_get_flatHeight_m9136DFB5E1E912782CFC6FA483ACDF5D6994E4D9_AdjustorThunk (void);
// 0x00000575 System.Int32 Unity.Barracuda.TensorShape::get_flatWidth()
extern void TensorShape_get_flatWidth_m4759D8299FBD8EB77429CB6B730D725FB8C32232_AdjustorThunk (void);
// 0x00000576 System.Int32 Unity.Barracuda.TensorShape::get_length()
extern void TensorShape_get_length_m0E6EFF741AB7E81FBFE9036BD444767F592C2D50_AdjustorThunk (void);
// 0x00000577 System.Int32 Unity.Barracuda.TensorShape::get_rank()
extern void TensorShape_get_rank_m9DD3ECB30E340748B5098BE3167C9C646AFCED19_AdjustorThunk (void);
// 0x00000578 System.Int32 Unity.Barracuda.TensorShape::get_dimensions()
extern void TensorShape_get_dimensions_mBE0CEFAC9C56E05AF97DB593418081A95BD77AD8_AdjustorThunk (void);
// 0x00000579 System.Int32 Unity.Barracuda.TensorShape::Axis(System.Int32)
extern void TensorShape_Axis_mB502AFDE16F4B3B47EC870253D47CAB30A0FF17E_AdjustorThunk (void);
// 0x0000057A System.Void Unity.Barracuda.TensorShape::GetPositionsFromIndex(System.Int32,System.Int32&,System.Int32&,System.Int32&,System.Int32&)
extern void TensorShape_GetPositionsFromIndex_mFC3960C13C1FD45EFB95763088DB152D1ECCB323_AdjustorThunk (void);
// 0x0000057B System.Void Unity.Barracuda.TensorShape::GetPositionsFromIndexNCHW(System.Int32,System.Int32&,System.Int32&,System.Int32&,System.Int32&)
extern void TensorShape_GetPositionsFromIndexNCHW_m01F54F07E0F58FC91EA59223C66E4A3FF420D192_AdjustorThunk (void);
// 0x0000057C System.Int32 Unity.Barracuda.TensorShape::IndexWithBroadcast(System.Int32,System.Int32,System.Int32,System.Int32)
extern void TensorShape_IndexWithBroadcast_mCF08E6F108761DBEEFD731D45870097BE887D9A5_AdjustorThunk (void);
// 0x0000057D System.Int32 Unity.Barracuda.TensorShape::IndexWithClamp(System.Int32,System.Int32,System.Int32,System.Int32)
extern void TensorShape_IndexWithClamp_mD87181593B5BAFBAAF787EA18180E82B05AEECFB_AdjustorThunk (void);
// 0x0000057E System.Int32 Unity.Barracuda.TensorShape::Index(System.Int32,System.Int32,System.Int32,System.Int32)
extern void TensorShape_Index_mA2BB56A2FDD49915D0DCAB8056CFEC4CEB692AB8_AdjustorThunk (void);
// 0x0000057F System.Int32 Unity.Barracuda.TensorShape::IndexNCHW(System.Int32,System.Int32,System.Int32,System.Int32)
extern void TensorShape_IndexNCHW_m397497F324AB9A6A33816AC7E244C6DA28723503_AdjustorThunk (void);
// 0x00000580 System.Int32 Unity.Barracuda.TensorShape::Index(System.Int32,System.Int32)
extern void TensorShape_Index_m8DCA420C3AD6CD866DFCF5142CC058FBF87A9FA3_AdjustorThunk (void);
// 0x00000581 System.Int32 Unity.Barracuda.TensorShape::get_Item(System.Int32)
extern void TensorShape_get_Item_m6314C15D1EF0C24B83411E2CDFBBA763FD8FAE56_AdjustorThunk (void);
// 0x00000582 System.Void Unity.Barracuda.TensorShape::set_Item(System.Int32,System.Int32)
extern void TensorShape_set_Item_mFD5E4C43387CF7708B7891EB7974D934CAB97132_AdjustorThunk (void);
// 0x00000583 System.Int32[] Unity.Barracuda.TensorShape::ToArray()
extern void TensorShape_ToArray_mC5BF49C3EB56F65A04BBBB44A245BD067749FEAC_AdjustorThunk (void);
// 0x00000584 Unity.Barracuda.TensorShape Unity.Barracuda.TensorShape::Squeeze()
extern void TensorShape_Squeeze_mDC3AF39B0250207B46FF4D2B3AAA9BDA3525718A_AdjustorThunk (void);
// 0x00000585 Unity.Barracuda.TensorShape Unity.Barracuda.TensorShape::Flatten()
extern void TensorShape_Flatten_m1A167E251B9A7B4538CB4FF3DD5D52D5EF7F8C57_AdjustorThunk (void);
// 0x00000586 System.Boolean Unity.Barracuda.TensorShape::op_Equality(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape)
extern void TensorShape_op_Equality_m6C0B53F31FAAB7FE3B04377B188B2FA95AF99FD9 (void);
// 0x00000587 System.Boolean Unity.Barracuda.TensorShape::op_Inequality(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape)
extern void TensorShape_op_Inequality_m6D065987D38A681AC5EB5DFF43CD69D156F4453F (void);
// 0x00000588 System.Boolean Unity.Barracuda.TensorShape::Equals(System.Object)
extern void TensorShape_Equals_mFF90A000D379ABFBEFFEDB4CACFBBB6E66860146_AdjustorThunk (void);
// 0x00000589 System.Int32 Unity.Barracuda.TensorShape::GetHashCode()
extern void TensorShape_GetHashCode_m33766A681B772D9331BE531C8F263CAFB9016ED9_AdjustorThunk (void);
// 0x0000058A System.String Unity.Barracuda.TensorShape::ToString()
extern void TensorShape_ToString_m26063FE7AAE8CB3A04DA0987CF28E65BE41BD6AF_AdjustorThunk (void);
// 0x0000058B System.Boolean Unity.Barracuda.Tensor::get_disposed()
extern void Tensor_get_disposed_m2314E029F0F5F2F3D831ECB61B61957E6DFFBB70 (void);
// 0x0000058C Unity.Barracuda.ITensorAllocator Unity.Barracuda.Tensor::get_allocator()
extern void Tensor_get_allocator_mB0DF138994207FAE4FC8B7E4BED9808EC5186E62 (void);
// 0x0000058D System.Int32 Unity.Barracuda.Tensor::get_batch()
extern void Tensor_get_batch_m3C2CEC86B81F6BF7810D20AF3C324216CCD5E88B (void);
// 0x0000058E System.Int32 Unity.Barracuda.Tensor::get_height()
extern void Tensor_get_height_mDB4C4767608AB9E40711DDECCC68538FFDCA4244 (void);
// 0x0000058F System.Int32 Unity.Barracuda.Tensor::get_width()
extern void Tensor_get_width_m34429D2D4C0A14B92CA30BE0BFE5CD2B5FC439B0 (void);
// 0x00000590 System.Int32 Unity.Barracuda.Tensor::get_channels()
extern void Tensor_get_channels_m07EAC8516BE7DE624692F4F26B8B2046E8FA06FE (void);
// 0x00000591 System.Int32 Unity.Barracuda.Tensor::get_kernelWidth()
extern void Tensor_get_kernelWidth_mFF29DB714CABDD33BFA1B5311D1F4255AB768D4E (void);
// 0x00000592 System.Int32 Unity.Barracuda.Tensor::get_kernelHeight()
extern void Tensor_get_kernelHeight_m6B8EAB2AA107A983175935733274EACB0B0BF5CD (void);
// 0x00000593 System.Int32 Unity.Barracuda.Tensor::get_kernelDepth()
extern void Tensor_get_kernelDepth_m0CD2678A17B0EF4BC64D3ABF0A7A85FF4914C5F9 (void);
// 0x00000594 System.Int32 Unity.Barracuda.Tensor::get_kernelCount()
extern void Tensor_get_kernelCount_m913D297D51F3503F19C53706F779167463948B5A (void);
// 0x00000595 System.Int32 Unity.Barracuda.Tensor::get_flatHeight()
extern void Tensor_get_flatHeight_mD4F983BA8D994F5ABD49ABF09C6D7FEC1181C8FA (void);
// 0x00000596 System.Int32 Unity.Barracuda.Tensor::get_flatWidth()
extern void Tensor_get_flatWidth_m8A615A6EF86BF779B545DF9CB128ABFB2608C043 (void);
// 0x00000597 System.Int32 Unity.Barracuda.Tensor::get_length()
extern void Tensor_get_length_m66D9F2D6E1BF4DE201FF4118D5B3B3C000A59A2A (void);
// 0x00000598 System.Int32 Unity.Barracuda.Tensor::get_dimensions()
extern void Tensor_get_dimensions_mEFBBEDD4BCB05BF033CF2E80871D27B64FA62A85 (void);
// 0x00000599 System.Void Unity.Barracuda.Tensor::.ctor(System.Int32[],System.Single[],System.String)
extern void Tensor__ctor_mF814112783D5C5379B0596ED5127CF0A5678F170 (void);
// 0x0000059A System.Void Unity.Barracuda.Tensor::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Single[],System.String)
extern void Tensor__ctor_mC1C625B12BD86D136AB8AB9C3BF1A6CF84B2492B (void);
// 0x0000059B System.Void Unity.Barracuda.Tensor::.ctor(System.Int32,System.Int32,System.Single[],System.String)
extern void Tensor__ctor_mB684544555A5095209E9D448C5C48CFF76225396 (void);
// 0x0000059C System.Void Unity.Barracuda.Tensor::.ctor(Unity.Barracuda.TensorShape,System.Single[],System.String)
extern void Tensor__ctor_m9509D977FF1BBC96D335E5EB0D9B89C8BACDB45B (void);
// 0x0000059D System.Void Unity.Barracuda.Tensor::.ctor(System.Int32[],System.Single[][],System.String)
extern void Tensor__ctor_m8256CF21EB915EE65A521DA61FC5DB118C1B3BC4 (void);
// 0x0000059E System.Void Unity.Barracuda.Tensor::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Single[][],System.String)
extern void Tensor__ctor_mD7453E954B6933301428784E1AEAC7461C23A5B2 (void);
// 0x0000059F System.Void Unity.Barracuda.Tensor::.ctor(System.Int32,System.Int32,System.Single[][],System.String)
extern void Tensor__ctor_m730DE4F410F7F4C8ECBC82B0C7E7CA28FD11BFDB (void);
// 0x000005A0 System.Void Unity.Barracuda.Tensor::.ctor(Unity.Barracuda.TensorShape,System.Single[][],System.String)
extern void Tensor__ctor_m2BBF8AC3E11563EAF06B233F692C3B46BAA643D2 (void);
// 0x000005A1 System.Void Unity.Barracuda.Tensor::.ctor(System.Int32[],UnityEngine.ComputeBuffer,System.String)
extern void Tensor__ctor_m89D584D9C54B7D73C8C826CE165BC77A80EDF9F6 (void);
// 0x000005A2 System.Void Unity.Barracuda.Tensor::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.ComputeBuffer,System.String)
extern void Tensor__ctor_mE40292E15E10599F41A887A053DDC5ACE847E2FF (void);
// 0x000005A3 System.Void Unity.Barracuda.Tensor::.ctor(System.Int32,System.Int32,UnityEngine.ComputeBuffer,System.String)
extern void Tensor__ctor_m0C146DCFA8B6D11494FBBAF138BDB4B6B1705BF4 (void);
// 0x000005A4 System.Void Unity.Barracuda.Tensor::.ctor(Unity.Barracuda.TensorShape,UnityEngine.ComputeBuffer,System.String)
extern void Tensor__ctor_mB22A921C21D0945DB816FDEF8C23E0CE6A372A51 (void);
// 0x000005A5 System.Void Unity.Barracuda.Tensor::.ctor(UnityEngine.Texture,System.Int32,System.String)
extern void Tensor__ctor_m442A3D8D493AD21ABE63804D05AC9FB5230C1FA2 (void);
// 0x000005A6 System.Void Unity.Barracuda.Tensor::.ctor(UnityEngine.Texture[],System.Int32,System.String)
extern void Tensor__ctor_mB0C0926C826F017E5D5BD2AD2E44B9FCD2776641 (void);
// 0x000005A7 System.Void Unity.Barracuda.Tensor::.ctor(System.Int32[],Unity.Barracuda.ITensorData,System.String)
extern void Tensor__ctor_m1FCE7D65854283285CF18B3F6B8A33187A40F109 (void);
// 0x000005A8 System.Void Unity.Barracuda.Tensor::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,Unity.Barracuda.ITensorData,System.String)
extern void Tensor__ctor_m33B07B865D18CED9F7B946128F02FAD3F9131A1B (void);
// 0x000005A9 System.Void Unity.Barracuda.Tensor::.ctor(System.Int32,System.Int32,Unity.Barracuda.ITensorData,System.String)
extern void Tensor__ctor_m98E694828026DB17027AB90B44636F47F217CB83 (void);
// 0x000005AA System.Void Unity.Barracuda.Tensor::.ctor(Unity.Barracuda.TensorShape,Unity.Barracuda.ITensorData,System.String)
extern void Tensor__ctor_mACAA9BDDDEF8473560F86DD212A03FE1BC6A2E41 (void);
// 0x000005AB System.Void Unity.Barracuda.Tensor::.ctor(System.String)
extern void Tensor__ctor_m3358F696C6415544092A04E529760A83B85C5DCA (void);
// 0x000005AC System.Void Unity.Barracuda.Tensor::.ctor(System.Int32[],System.String)
extern void Tensor__ctor_m065C1CE4052681575B69C58254E1AD8D296029EF (void);
// 0x000005AD System.Void Unity.Barracuda.Tensor::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.String)
extern void Tensor__ctor_m9E64DF4160E86CDB1206D89477810ED92E855FAA (void);
// 0x000005AE System.Void Unity.Barracuda.Tensor::.ctor(System.Int32,System.Int32,System.String)
extern void Tensor__ctor_m8C1A727EA6863806053406EC07E564DC9E0224BE (void);
// 0x000005AF System.Void Unity.Barracuda.Tensor::.ctor(Unity.Barracuda.TensorShape,System.String)
extern void Tensor__ctor_m9C2133EF0B9ACE97EE8F90D5FA6A52F651CC2606 (void);
// 0x000005B0 System.Void Unity.Barracuda.Tensor::.ctor(System.Int32[],Unity.Barracuda.ITensorData,Unity.Barracuda.ITensorAllocator)
extern void Tensor__ctor_mA171ECB870E1A37329F8C5F72A71667F9C491936 (void);
// 0x000005B1 System.Void Unity.Barracuda.Tensor::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,Unity.Barracuda.ITensorData,Unity.Barracuda.ITensorAllocator)
extern void Tensor__ctor_mA251D48CA9E807A783BC21C4C6A3991D2348351C (void);
// 0x000005B2 System.Void Unity.Barracuda.Tensor::.ctor(System.Int32,System.Int32,Unity.Barracuda.ITensorData,Unity.Barracuda.ITensorAllocator)
extern void Tensor__ctor_mC57D06AAD06D7E4D6ACEBCDAFAFEECB75E4F519D (void);
// 0x000005B3 System.Void Unity.Barracuda.Tensor::.ctor(Unity.Barracuda.TensorShape,Unity.Barracuda.ITensorData,Unity.Barracuda.ITensorAllocator)
extern void Tensor__ctor_mF4837EC21202C330A05E4AA19A3957E338FDC98C (void);
// 0x000005B4 System.Void Unity.Barracuda.Tensor::.ctor(Unity.Barracuda.ITensorAllocator)
extern void Tensor__ctor_mE8C574CED324311041FB8438CA5DE76B1B84A034 (void);
// 0x000005B5 System.Void Unity.Barracuda.Tensor::.ctor(System.Int32[],Unity.Barracuda.ITensorAllocator)
extern void Tensor__ctor_mD860688BFC9EC4A4E58F49F6C1BAD193F0B404D2 (void);
// 0x000005B6 System.Void Unity.Barracuda.Tensor::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,Unity.Barracuda.ITensorAllocator)
extern void Tensor__ctor_mD81F8204154D1A5F4CFEDE9251B415141F9E9B52 (void);
// 0x000005B7 System.Void Unity.Barracuda.Tensor::.ctor(System.Int32,System.Int32,Unity.Barracuda.ITensorAllocator)
extern void Tensor__ctor_mA1FB07675C8D5604A541EF3731D529756773C080 (void);
// 0x000005B8 System.Void Unity.Barracuda.Tensor::.ctor(Unity.Barracuda.TensorShape,Unity.Barracuda.ITensorAllocator)
extern void Tensor__ctor_m2294349BDD3F0405E7D634AB3FFCA27E5A3576B7 (void);
// 0x000005B9 System.Void Unity.Barracuda.Tensor::Finalize()
extern void Tensor_Finalize_mC69FB70D2635F237A1B25BA2E89306520EBA6759 (void);
// 0x000005BA System.Void Unity.Barracuda.Tensor::PinToDevice(Unity.Barracuda.ITensorData,System.Boolean)
extern void Tensor_PinToDevice_m7C25626FC768541FB9CDD4C94A711F2D4473A4B9 (void);
// 0x000005BB System.Void Unity.Barracuda.Tensor::UploadToDevice(Unity.Barracuda.ITensorData,System.Boolean)
extern void Tensor_UploadToDevice_m106B2A3D50A560C61CA5979F36D340DFC5DD6AA6 (void);
// 0x000005BC System.Void Unity.Barracuda.Tensor::AttachToDevice(Unity.Barracuda.ITensorData)
extern void Tensor_AttachToDevice_m703AFF9FDD0360C8F223BFAEAE4621B5BD782BB1 (void);
// 0x000005BD Unity.Barracuda.ITensorData Unity.Barracuda.Tensor::DetachFromDevice(System.Boolean)
extern void Tensor_DetachFromDevice_m622650E9178A033D15E2D58A9EE95DDFA7862DB9 (void);
// 0x000005BE System.Void Unity.Barracuda.Tensor::UploadIfDirty()
extern void Tensor_UploadIfDirty_m78D7EDD8E38537DBAA621FD6D82C2F511ED709ED (void);
// 0x000005BF System.Void Unity.Barracuda.Tensor::UploadAndInvalidateCache()
extern void Tensor_UploadAndInvalidateCache_m9AC419F6CC5D97879CDF82EC6D469AFD3500E2BF (void);
// 0x000005C0 System.Boolean Unity.Barracuda.Tensor::PrepareCacheForAccess(System.Boolean)
extern void Tensor_PrepareCacheForAccess_m6FA524DBE3DA8AEB89B6039F86531B62795C0EEE (void);
// 0x000005C1 System.Void Unity.Barracuda.Tensor::FlushCache()
extern void Tensor_FlushCache_mC2A078E318B86F311C4F912C36F4C54DBED98AEC (void);
// 0x000005C2 Unity.Barracuda.Tensor Unity.Barracuda.Tensor::ShallowCopy(Unity.Barracuda.TensorShape,System.String)
extern void Tensor_ShallowCopy_m43A1EE06E701067155C9C1530293EC7384EC6BF2 (void);
// 0x000005C3 Unity.Barracuda.Tensor Unity.Barracuda.Tensor::ShallowCopy(System.String)
extern void Tensor_ShallowCopy_mEE41B1692B0646CAFAF2EF109262F41A1985F91C (void);
// 0x000005C4 Unity.Barracuda.Tensor Unity.Barracuda.Tensor::Flatten(System.String)
extern void Tensor_Flatten_m26C61D3F6AC6B9EBD5929B9781FEE359871E48CD (void);
// 0x000005C5 Unity.Barracuda.Tensor Unity.Barracuda.Tensor::Reshape(Unity.Barracuda.TensorShape,System.String)
extern void Tensor_Reshape_mBA7A63C711459999A2A4C288C345333022BA9C72 (void);
// 0x000005C6 Unity.Barracuda.Tensor Unity.Barracuda.Tensor::DeepCopy()
extern void Tensor_DeepCopy_m0E16718FD34D7430ABAA336E2EFBFBB4272C935C (void);
// 0x000005C7 System.Void Unity.Barracuda.Tensor::TakeOwnership()
extern void Tensor_TakeOwnership_m0C443822D19557C486E213CA09450BCE8A3FF8FC (void);
// 0x000005C8 Unity.Barracuda.ITensorData Unity.Barracuda.Tensor::Invalidate()
extern void Tensor_Invalidate_mA5121907ACB248D0FB85AA02F96B88400D0E5EFC (void);
// 0x000005C9 System.Void Unity.Barracuda.Tensor::Dispose()
extern void Tensor_Dispose_m3824B6BE208447241DB5021717586F1D35CB4623 (void);
// 0x000005CA System.Void Unity.Barracuda.Tensor::ToRenderTexture(UnityEngine.RenderTexture,System.Int32,System.Int32,UnityEngine.Vector4,UnityEngine.Vector4,UnityEngine.Texture3D)
extern void Tensor_ToRenderTexture_m265100943C02842A9F067D1EEA1E2520F8188D51 (void);
// 0x000005CB System.Void Unity.Barracuda.Tensor::ToRenderTexture(UnityEngine.RenderTexture,System.Int32,System.Int32,System.Single,System.Single,UnityEngine.Texture3D)
extern void Tensor_ToRenderTexture_mC3068786FAD4542612419B8254F7560671ABA4B5 (void);
// 0x000005CC UnityEngine.RenderTexture Unity.Barracuda.Tensor::ToRenderTexture(UnityEngine.RenderTextureFormat,System.Int32,System.Int32,System.Single,System.Single,UnityEngine.Texture3D)
extern void Tensor_ToRenderTexture_mE9CDC69F94AC04DDB0C52055BB69F97E301EF07B (void);
// 0x000005CD UnityEngine.RenderTexture Unity.Barracuda.Tensor::ToRenderTexture(System.Int32,System.Int32,System.Single,System.Single,UnityEngine.Texture3D)
extern void Tensor_ToRenderTexture_m9F02151FC631896EBA4287A26D85F1056CA171D4 (void);
// 0x000005CE System.Int32 Unity.Barracuda.Tensor::Axis(System.Int32)
extern void Tensor_Axis_mB2E6968EEC9A716252DB7EAB68AB7075DB5876E9 (void);
// 0x000005CF System.Int32 Unity.Barracuda.Tensor::Index(System.Int32,System.Int32,System.Int32,System.Int32)
extern void Tensor_Index_m0464FE8122A34FCD3B8B4DAAFAAF92D26800EA86 (void);
// 0x000005D0 System.Int32 Unity.Barracuda.Tensor::IndexWithClamp(System.Int32,System.Int32,System.Int32,System.Int32)
extern void Tensor_IndexWithClamp_mCE8E0BBE040711BB6EA05A4DD99FF43AC9843526 (void);
// 0x000005D1 System.Int32 Unity.Barracuda.Tensor::IndexWithBroadcast(System.Int32,System.Int32,System.Int32,System.Int32)
extern void Tensor_IndexWithBroadcast_m6A2AA97C2CADD175375676D8DD9C396C5E412CC6 (void);
// 0x000005D2 System.Int32 Unity.Barracuda.Tensor::Index(System.Int32,System.Int32)
extern void Tensor_Index_m35D8876AC058D7F39B5DF2F24D2F12B64B200DBC (void);
// 0x000005D3 System.Single Unity.Barracuda.Tensor::get_Item(System.Int32)
extern void Tensor_get_Item_mF946C4DC829FBD72D2EE2FB8F40482812B058BA7 (void);
// 0x000005D4 System.Void Unity.Barracuda.Tensor::set_Item(System.Int32,System.Single)
extern void Tensor_set_Item_m250981F1526FA6D55AABEC0EFBB26960EA3467DB (void);
// 0x000005D5 System.Single Unity.Barracuda.Tensor::get_Item(System.Int32,System.Int32)
extern void Tensor_get_Item_mE75F5EECD0AA4BE3CE54BD49F802665897D92505 (void);
// 0x000005D6 System.Void Unity.Barracuda.Tensor::set_Item(System.Int32,System.Int32,System.Single)
extern void Tensor_set_Item_m9276BC5144FD6E7A091471F1E7696FEF5AA3497F (void);
// 0x000005D7 System.Single Unity.Barracuda.Tensor::get_Item(System.Int32,System.Int32,System.Int32,System.Int32)
extern void Tensor_get_Item_m1375C224B74F6F8FC1480D6B6A344B393047BAE8 (void);
// 0x000005D8 System.Void Unity.Barracuda.Tensor::set_Item(System.Int32,System.Int32,System.Int32,System.Int32,System.Single)
extern void Tensor_set_Item_m5A60AB58C770B92AB8B257B7EF0BB84D16025004 (void);
// 0x000005D9 System.Single[] Unity.Barracuda.Tensor::ToReadOnlyArray()
extern void Tensor_ToReadOnlyArray_m6F7D897AF4134C58583DE0B254800C751A1A9422 (void);
// 0x000005DA Unity.Barracuda.ITensorData Unity.Barracuda.Tensor::get_tensorOnDevice()
extern void Tensor_get_tensorOnDevice_mAFF055D842399BC250E160EA44A7171341578548 (void);
// 0x000005DB Unity.Barracuda.ITensorData Unity.Barracuda.Tensor::get_data()
extern void Tensor_get_data_mC956AFA85D5D9E67A50388BB27842584B2BBEE21 (void);
// 0x000005DC System.String Unity.Barracuda.Tensor::ToString()
extern void Tensor_ToString_m117C71559F4B5756B648D20F13AD47566207CBA7 (void);
// 0x000005DD Unity.Barracuda.ITensorData Unity.Barracuda.Tensor::UnpinAndDisposeTensor()
extern void Tensor_UnpinAndDisposeTensor_m7ED7B1BE134835A00E47F8EA2189ED7968E82A55 (void);
// 0x000005DE System.Single[] Unity.Barracuda.Tensor::get_readonlyArray()
extern void Tensor_get_readonlyArray_m6DC30563034900F9320B5EE16627CDEA457E19A6 (void);
// 0x000005DF System.Int32 Unity.Barracuda.Tensor::get_readonlyArrayOffset()
extern void Tensor_get_readonlyArrayOffset_m4414B1DFFEBC2B427DA12E8634D4F394DAFA87F7 (void);
// 0x000005E0 System.Void Unity.Barracuda.TensorExtensions::TestInit(Unity.Barracuda.Tensor,System.Int32)
extern void TensorExtensions_TestInit_mB54CBCE0906F012508F1C9AB2E9B28854EE72023 (void);
// 0x000005E1 System.Void Unity.Barracuda.TensorExtensions::TestInitCos(Unity.Barracuda.Tensor,System.Int32,System.Single)
extern void TensorExtensions_TestInitCos_m00A33FC2EB6490B0A93A593DE42E5E9AA668CC30 (void);
// 0x000005E2 System.Void Unity.Barracuda.TensorExtensions::TestInitValue(Unity.Barracuda.Tensor,System.Single,System.Int32)
extern void TensorExtensions_TestInitValue_m648E80CF2A515CDB1B140439A0B9164C0851CE49 (void);
// 0x000005E3 System.Single[] Unity.Barracuda.TensorExtensions::AsFloats(Unity.Barracuda.Tensor)
extern void TensorExtensions_AsFloats_m8AF01B7D45FE3D9750ABEC76493F34215A970569 (void);
// 0x000005E4 System.Int32[] Unity.Barracuda.TensorExtensions::AsInts(Unity.Barracuda.Tensor)
extern void TensorExtensions_AsInts_mBD47E2973CF2C7F0F026ED223914AE4BAAD890A1 (void);
// 0x000005E5 System.Int64[] Unity.Barracuda.TensorExtensions::AsLongs(Unity.Barracuda.Tensor)
extern void TensorExtensions_AsLongs_m96E304B31759C101F9BD26B493B1E4E4DE044934 (void);
// 0x000005E6 System.String Unity.Barracuda.TensorExtensions::DataToString(Unity.Barracuda.Tensor,System.Int32)
extern void TensorExtensions_DataToString_m0F6FB99394BE4CB829B5CA192D580FE732948DB4 (void);
// 0x000005E7 System.Void Unity.Barracuda.TensorExtensions::Print(Unity.Barracuda.Tensor,System.String)
extern void TensorExtensions_Print_m926C9372A74F3ECABAB1B1111FDCB57EEA18A40A (void);
// 0x000005E8 System.Void Unity.Barracuda.TensorExtensions::PrintDataPart(Unity.Barracuda.Tensor,System.Int32,System.String)
extern void TensorExtensions_PrintDataPart_mA2BDBC50C001B03A4DAE849C3879568F17DA5137 (void);
// 0x000005E9 System.Boolean Unity.Barracuda.TensorExtensions::Equals(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void TensorExtensions_Equals_m46A4DE7ED2D84AF1CA7668D90A2E07B0F546FBFB (void);
// 0x000005EA System.Boolean Unity.Barracuda.TensorExtensions::Approximately(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Single,System.Int32)
extern void TensorExtensions_Approximately_mB657A4523BD91150B880E8D76D3701A69BAD8E0A (void);
// 0x000005EB System.Single Unity.Barracuda.TensorExtensions::MaxDifference(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void TensorExtensions_MaxDifference_m19DAC00A8DC17F60331EB6A113505E84A20495A2 (void);
// 0x000005EC System.Int32[] Unity.Barracuda.TensorExtensions::ArgMax(Unity.Barracuda.Tensor)
extern void TensorExtensions_ArgMax_mB69952F88189927B0D7B4F36BB4C4A4214CBE659 (void);
// 0x000005ED Unity.Barracuda.Tensor Unity.Barracuda.TensorExtensions::Reshape(Unity.Barracuda.Tensor,System.Int32[])
extern void TensorExtensions_Reshape_m01D02376F371273A88AC5EB621EFA2C986756F2A (void);
// 0x000005EE System.Int32[][] Unity.Barracuda.TensorExtensions::ArgSort(Unity.Barracuda.Tensor)
extern void TensorExtensions_ArgSort_m7F7C468AFB20A1CDD01E20EBAD25C781AE18EE23 (void);
// 0x000005EF Unity.Barracuda.TensorShape Unity.Barracuda.TensorExtensions::Gather(Unity.Barracuda.TensorShape[],System.Int32)
extern void TensorExtensions_Gather_m5B1609EA72FE213F1C2D142712A48127F091E5A9 (void);
// 0x000005F0 Unity.Barracuda.TensorShape Unity.Barracuda.TensorExtensions::Concat(Unity.Barracuda.Tensor[],System.Int32)
extern void TensorExtensions_Concat_m0408047AA93B8F2F862E2A579AC4EE7DD9976ECC (void);
// 0x000005F1 Unity.Barracuda.TensorShape Unity.Barracuda.TensorExtensions::Concat(Unity.Barracuda.TensorShape[],System.Int32)
extern void TensorExtensions_Concat_m6FF6A772E6ACF08A9EE1D06A02B0B6120AB1B4FE (void);
// 0x000005F2 Unity.Barracuda.TensorShape Unity.Barracuda.TensorExtensions::Max(Unity.Barracuda.TensorShape[])
extern void TensorExtensions_Max_m4E61C6B8771F58EBE00335C2A26535301B97B894 (void);
// 0x000005F3 Unity.Barracuda.TensorShape Unity.Barracuda.TensorExtensions::MaxShape(Unity.Barracuda.Tensor[])
extern void TensorExtensions_MaxShape_m743562E980B7A6D5C106EF22F1025D21DAD8A7EB (void);
// 0x000005F4 Unity.Barracuda.TensorShape Unity.Barracuda.TensorExtensions::Scale(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape)
extern void TensorExtensions_Scale_mBC1BCBB5C806E86A77BB8988C89619DE0E97637C (void);
// 0x000005F5 Unity.Barracuda.TensorShape Unity.Barracuda.TensorExtensions::Scale(Unity.Barracuda.TensorShape,System.Int32[])
extern void TensorExtensions_Scale_m7153D8026F8FDF7AEB82ED06E799A5E6956B7085 (void);
// 0x000005F6 Unity.Barracuda.TensorShape Unity.Barracuda.TensorExtensions::Reduce(Unity.Barracuda.TensorShape,System.Int32)
extern void TensorExtensions_Reduce_m717B4E5E44A94055ACAFEA166F721329182FABBF (void);
// 0x000005F7 Unity.Barracuda.TensorShape Unity.Barracuda.TensorExtensions::Reshape(Unity.Barracuda.TensorShape,System.Int32[])
extern void TensorExtensions_Reshape_mC516B6211A650D0CBC0E6AC9B1B9A8B14D4BF6EA (void);
// 0x000005F8 Unity.Barracuda.TensorShape Unity.Barracuda.TensorExtensions::ApplyBorder(Unity.Barracuda.TensorShape,System.Int32[])
extern void TensorExtensions_ApplyBorder_m3D502CBDF981A70F6883374BA2F4BFE66355C46E (void);
// 0x000005F9 System.Int32[] Unity.Barracuda.TensorExtensions::AdjustPadToKernel(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[])
extern void TensorExtensions_AdjustPadToKernel_m4182C2AF06298C98E89DD29A4DD8830B72534600 (void);
// 0x000005FA System.Int32[] Unity.Barracuda.TensorExtensions::AdjustPadToKernel(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,System.Int32[],System.Int32[])
extern void TensorExtensions_AdjustPadToKernel_m48BEDA0BA6790364B0F53E0D8AAADBF0BD5F6722 (void);
// 0x000005FB System.Int32[] Unity.Barracuda.TensorExtensions::AdjustPadToPool(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void TensorExtensions_AdjustPadToPool_m9BACB2D375C674FA759102497CAA135567FC8348 (void);
// 0x000005FC System.Int32[] Unity.Barracuda.TensorExtensions::AdjustPadToPool(Unity.Barracuda.TensorShape,System.Int32[],System.Int32[],System.Int32[])
extern void TensorExtensions_AdjustPadToPool_mBE9862221131D1FC6C15B38F423D651DE97DB59E (void);
// 0x000005FD System.Int32[] Unity.Barracuda.TensorExtensions::AdjustPadToPool(Unity.Barracuda.Tensor,System.ValueTuple`2<System.Int32,System.Int32>,System.Int32[],System.Int32[])
extern void TensorExtensions_AdjustPadToPool_mEBBB072E10E6737EDE929127893AF2A6C7F7E3EB (void);
// 0x000005FE System.Int32[] Unity.Barracuda.TensorExtensions::AdjustPadToPool(Unity.Barracuda.TensorShape,System.ValueTuple`2<System.Int32,System.Int32>,System.Int32[],System.Int32[])
extern void TensorExtensions_AdjustPadToPool_mF42D2AB242CECE952D97EE1A0C60725D2C82D651 (void);
// 0x000005FF Unity.Barracuda.TensorShape Unity.Barracuda.TensorExtensions::ApplyPool(Unity.Barracuda.TensorShape,System.Int32[],System.Int32[],System.Int32[],System.Boolean)
extern void TensorExtensions_ApplyPool_mF3FCABB1DF8325D12DA2BD5A2C341ED0DD1E4F37 (void);
// 0x00000600 Unity.Barracuda.TensorShape Unity.Barracuda.TensorExtensions::ApplyPool(Unity.Barracuda.TensorShape,System.ValueTuple`2<System.Int32,System.Int32>,System.Int32[],System.Int32[],System.Boolean)
extern void TensorExtensions_ApplyPool_m13729C74897BAE7218B2F2559CCD74C56A455F78 (void);
// 0x00000601 Unity.Barracuda.TensorShape Unity.Barracuda.TensorExtensions::ApplyKernel(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,System.Int32[],System.Int32[])
extern void TensorExtensions_ApplyKernel_m702E9F6A59F7F1B44013CC7649417315719F6D34 (void);
// 0x00000602 Unity.Barracuda.TensorShape Unity.Barracuda.TensorExtensions::ApplyKernelInverse(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,System.Int32[],System.Int32[],System.Int32[])
extern void TensorExtensions_ApplyKernelInverse_mA6D360297B225668E86CC01BCBD78D978569CE21 (void);
// 0x00000603 System.Int32 Unity.Barracuda.TensorExtensions::WrapIndex(System.Int32,System.Int32)
extern void TensorExtensions_WrapIndex_m45728DB1BA1926FAE9BD83DA83B5622E1A37974F (void);
// 0x00000604 Unity.Barracuda.TensorShape Unity.Barracuda.TensorExtensions::ApplyStridedSlice(Unity.Barracuda.TensorShape,System.Int32[],System.Int32[],System.Int32[])
extern void TensorExtensions_ApplyStridedSlice_m776373FA31EF4E41DD2B440AE199B82F513BF4AD (void);
// 0x00000605 Unity.Barracuda.ITensorData Unity.Barracuda.TensorExtensions::CreateFromTexture(UnityEngine.Texture,Unity.Barracuda.TensorShape)
extern void TensorExtensions_CreateFromTexture_m19861D9BCA4AFCDEE94A5B67CFECDC51FCDA56A2 (void);
// 0x00000606 System.Void Unity.Barracuda.BarracudaBackendsFactory_<>c::.cctor()
extern void U3CU3Ec__cctor_m5B07384FDE5FCBD3B8AFCF2EA83E866CE8EDEBD6 (void);
// 0x00000607 System.Void Unity.Barracuda.BarracudaBackendsFactory_<>c::.ctor()
extern void U3CU3Ec__ctor_mCF3EAA1A3FCCE2BA0C90F76330FE55205AF93C16 (void);
// 0x00000608 System.String Unity.Barracuda.BarracudaBackendsFactory_<>c::<PatchModel>b__5_1(Unity.Barracuda.Layer)
extern void U3CU3Ec_U3CPatchModelU3Eb__5_1_mCB533DB36C991D9244F7524AEC2E2436E7534E87 (void);
// 0x00000609 System.String Unity.Barracuda.BarracudaBackendsFactory_<>c::<PatchModel>b__5_0(Unity.Barracuda.Layer)
extern void U3CU3Ec_U3CPatchModelU3Eb__5_0_mB5902275E2C57D83BA6719E3977F36BDB185AC61 (void);
// 0x0000060A System.String Unity.Barracuda.BarracudaBackendsFactory_<>c::<ValidateModel>b__6_0(System.String)
extern void U3CU3Ec_U3CValidateModelU3Eb__6_0_mC90F0E8F0B12CBE3C261426640B486165EB20ECB (void);
// 0x0000060B System.Boolean Unity.Barracuda.BarracudaBackendsFactory_<>c::<ValidateModel>b__6_1(System.Linq.IGrouping`2<System.String,System.String>)
extern void U3CU3Ec_U3CValidateModelU3Eb__6_1_mA79AD3369EA6EC67DB9ECA4B89D13E8F9A1B968B (void);
// 0x0000060C System.String Unity.Barracuda.BarracudaBackendsFactory_<>c::<ValidateModel>b__6_2(System.Linq.IGrouping`2<System.String,System.String>)
extern void U3CU3Ec_U3CValidateModelU3Eb__6_2_m31BDA037DA096C9A0E6AB31C3DBE2ABF5750B5B9 (void);
// 0x0000060D Unity.Jobs.JobHandle Unity.Barracuda.BurstCPUOps_MatrixMultiplyJob::Schedule(Unity.Jobs.JobHandle)
extern void MatrixMultiplyJob_Schedule_mE2613020C0407F07FA2D787E6E3A74776DC78F85_AdjustorThunk (void);
// 0x0000060E Unity.Jobs.JobHandle Unity.Barracuda.BurstCPUOps_MatrixMultiplyJob::Schedule(System.Int32,Unity.Jobs.JobHandle)
extern void MatrixMultiplyJob_Schedule_mB2F50A367C64B8081EED57973869EC4C2E8CB902_AdjustorThunk (void);
// 0x0000060F System.Void Unity.Barracuda.BurstCPUOps_MatrixMultiplyJob::Execute(System.Int32)
extern void MatrixMultiplyJob_Execute_mEE40FA3261F247A90DC34B5331B711BACA972F37_AdjustorThunk (void);
// 0x00000610 System.Single* Unity.Barracuda.BurstCPUOps_MatrixMultiplyJob::AllocBlock()
extern void MatrixMultiplyJob_AllocBlock_m83C0F5EB9B444FA621A2D1E73C69526FE4E78846 (void);
// 0x00000611 System.Void Unity.Barracuda.BurstCPUOps_MatrixMultiplyJob::FreeBlock(System.Single*)
extern void MatrixMultiplyJob_FreeBlock_m471663DEEE869D9997A7D211BDD679E8F9FBED22 (void);
// 0x00000612 System.Void Unity.Barracuda.BurstCPUOps_MatrixMultiplyJob::MultiplyBlockUnroll16xh(System.Single*,System.Int32,System.Single*,System.Int32,System.Single*,System.Int32)
extern void MatrixMultiplyJob_MultiplyBlockUnroll16xh_mBB8BC7CF8808071DD31ED3B7E8F57E0E4C6CD04B (void);
// 0x00000613 System.Void Unity.Barracuda.BurstCPUOps_Im2ColSliceJob::Execute(System.Int32)
extern void Im2ColSliceJob_Execute_m068978FC796FEB60AC0F3C4C3FE9346C13DEC6DC_AdjustorThunk (void);
// 0x00000614 System.Void Unity.Barracuda.BurstCPUOps_MaxPool2DJob::Execute(System.Int32)
extern void MaxPool2DJob_Execute_m305DAAB86187BB89159F20FA79426003D4E9735C_AdjustorThunk (void);
// 0x00000615 System.Void Unity.Barracuda.BurstCPUOps_AvgPool2DJob::Execute(System.Int32)
extern void AvgPool2DJob_Execute_m1474F116369A3229CF64A76ECCCDDEF0C9C153DC_AdjustorThunk (void);
// 0x00000616 System.Void Unity.Barracuda.BurstCPUOps_DepthwiseConv2DJob::Execute(System.Int32)
extern void DepthwiseConv2DJob_Execute_m0A16D289D5F4475D98988A34B93DB1766689C602_AdjustorThunk (void);
// 0x00000617 System.Void Unity.Barracuda.BurstCPUOps_PReluJob::Execute(System.Int32)
extern void PReluJob_Execute_m49FF3A5D67CBBF6772FE4FA98BFBBB4245B18752_AdjustorThunk (void);
// 0x00000618 System.Single Unity.Barracuda.BurstCPUOps_PReluJob::PRelu(System.Single,System.Single)
extern void PReluJob_PRelu_m5717B1FD912CA3BE2672E74B010109D14C89E47A (void);
// 0x00000619 System.Void Unity.Barracuda.BurstCPUOps_ReluJob::Execute(System.Int32)
extern void ReluJob_Execute_m896640BBD7838BCBDB2AD2CFE6D57D367AD10E8E_AdjustorThunk (void);
// 0x0000061A System.Void Unity.Barracuda.BurstCPUOps_Relu6Job::Execute(System.Int32)
extern void Relu6Job_Execute_m2FCB4F1A670B9C398E234824540EF15395A6A010_AdjustorThunk (void);
// 0x0000061B System.Single Unity.Barracuda.BurstCPUOps_LeakyReluJob::get_alpha()
extern void LeakyReluJob_get_alpha_m3A42525C33B40A6AFC8711C7A3F232D15EFE64B3_AdjustorThunk (void);
// 0x0000061C System.Void Unity.Barracuda.BurstCPUOps_LeakyReluJob::set_alpha(System.Single)
extern void LeakyReluJob_set_alpha_m18B4264DB85C330CAAA616400EEEACA717A821C7_AdjustorThunk (void);
// 0x0000061D System.Void Unity.Barracuda.BurstCPUOps_LeakyReluJob::Execute(System.Int32)
extern void LeakyReluJob_Execute_m9465B110C31D1B5D3ABADB6CB4F04CAD17BE9CAF_AdjustorThunk (void);
// 0x0000061E System.Void Unity.Barracuda.BurstCPUOps_TanhJob::Execute(System.Int32)
extern void TanhJob_Execute_mD9E8B9DE894C3BE90516FDF2339F4547B4F75DDC_AdjustorThunk (void);
// 0x0000061F System.Void Unity.Barracuda.BurstCPUOps_SigmoidJob::Execute(System.Int32)
extern void SigmoidJob_Execute_mC7D32A0910499A087B6E23C5BC8382A9F5B96ECF_AdjustorThunk (void);
// 0x00000620 System.Void Unity.Barracuda.BurstCPUOps_EluJob::Execute(System.Int32)
extern void EluJob_Execute_m51B9BC9B8C2FCAA2E3E81AFE16E56E2160FBE2D9_AdjustorThunk (void);
// 0x00000621 System.Void Unity.Barracuda.BurstCPUOps_SeluJob::Execute(System.Int32)
extern void SeluJob_Execute_m8F2BBC73D90D656BA0DD2705F6D7B70C82973321_AdjustorThunk (void);
// 0x00000622 System.Void Unity.Barracuda.BurstCPUOps_SwishJob::Execute(System.Int32)
extern void SwishJob_Execute_mA0A2ED0B660595166CFE67A9B60FD5E388AF6D42_AdjustorThunk (void);
// 0x00000623 System.Void Unity.Barracuda.BurstCPUOps_SoftmaxJob::Execute(System.Int32)
extern void SoftmaxJob_Execute_mECA5DBB10755824D2F00F9D07CF1DA5FFC8F3805_AdjustorThunk (void);
// 0x00000624 System.Void Unity.Barracuda.BurstCPUOps_AbsJob::Execute(System.Int32)
extern void AbsJob_Execute_m8EFD87B3C09435CFF6E891B2379643775D2191FE_AdjustorThunk (void);
// 0x00000625 System.Void Unity.Barracuda.BurstCPUOps_NegJob::Execute(System.Int32)
extern void NegJob_Execute_mC17D281BC46597ABCC699049F9B2609A92EF3F9B_AdjustorThunk (void);
// 0x00000626 System.Void Unity.Barracuda.BurstCPUOps_CeilJob::Execute(System.Int32)
extern void CeilJob_Execute_m70E0EA81F9B3A800E0A2D9B875915543BBC47D24_AdjustorThunk (void);
// 0x00000627 System.Void Unity.Barracuda.BurstCPUOps_ClipJob::Execute(System.Int32)
extern void ClipJob_Execute_m407AE0F9ED9458C42576D98F190D87AA07F64ED7_AdjustorThunk (void);
// 0x00000628 System.Void Unity.Barracuda.BurstCPUOps_FloorJob::Execute(System.Int32)
extern void FloorJob_Execute_mF97FE27A1064C69B3DB6F28AFB3938E8121CACB8_AdjustorThunk (void);
// 0x00000629 System.Void Unity.Barracuda.BurstCPUOps_ReciprocalJob::Execute(System.Int32)
extern void ReciprocalJob_Execute_m718A114B7929540CD6B5C192A02BBBB3E29581AE_AdjustorThunk (void);
// 0x0000062A System.Void Unity.Barracuda.BurstCPUOps_PowJob::Execute(System.Int32)
extern void PowJob_Execute_m7E25960614C9F28535BEB4683EFC761A6437892F_AdjustorThunk (void);
// 0x0000062B System.Void Unity.Barracuda.BurstCPUOps_ExpJob::Execute(System.Int32)
extern void ExpJob_Execute_m3E98BB7DB835C9F87F4B60B75E9E689B78CB8287_AdjustorThunk (void);
// 0x0000062C System.Void Unity.Barracuda.BurstCPUOps_LogJob::Execute(System.Int32)
extern void LogJob_Execute_m5A807FACC2F4D7A4DF0CD978F2AC33D23B1E4969_AdjustorThunk (void);
// 0x0000062D System.Void Unity.Barracuda.BurstCPUOps_SqrtJob::Execute(System.Int32)
extern void SqrtJob_Execute_m45AB0BB94FE8BACB72CB4BD31F72AF958E2B6D02_AdjustorThunk (void);
// 0x0000062E System.Void Unity.Barracuda.BurstCPUOps_ElementwiseAddJob::Execute(System.Int32)
extern void ElementwiseAddJob_Execute_mA0A8F5BE86173D2F01728281DC97AC85D04F726C_AdjustorThunk (void);
// 0x0000062F System.Void Unity.Barracuda.BurstCPUOps_ElementwiseMulJob::Execute(System.Int32)
extern void ElementwiseMulJob_Execute_mD315BBC50DAE0336688A23DEFDBAD8356EA8054C_AdjustorThunk (void);
// 0x00000630 System.Void Unity.Barracuda.BurstCPUOps_ElementwiseDivJob::Execute(System.Int32)
extern void ElementwiseDivJob_Execute_m0E3C427C4BEC8DB219329F5A0BE3B8AE080B95DD_AdjustorThunk (void);
// 0x00000631 System.Void Unity.Barracuda.BurstCPUOps_ElementwisePowJob::Execute(System.Int32)
extern void ElementwisePowJob_Execute_m4A54FEB4A8BB236FE0B90800BC67937559405C09_AdjustorThunk (void);
// 0x00000632 System.Void Unity.Barracuda.BurstCPUOps_ElementwiseMaxJob::Execute(System.Int32)
extern void ElementwiseMaxJob_Execute_mB3FE315E4EDAAC824572A50F2A7B3FB2948B255F_AdjustorThunk (void);
// 0x00000633 System.Void Unity.Barracuda.BurstCPUOps_ElementwiseMinJob::Execute(System.Int32)
extern void ElementwiseMinJob_Execute_mEB0B401774CA2919753DEF2BBDC78AD487678E3D_AdjustorThunk (void);
// 0x00000634 System.Void Unity.Barracuda.BurstCPUOps_ZeroBroadcastJob::Execute()
extern void ZeroBroadcastJob_Execute_m5D809D2CDB62F94CAF3DF6073B421D9C05729A17_AdjustorThunk (void);
// 0x00000635 System.Void Unity.Barracuda.BurstCPUOps_CopyJob::Execute()
extern void CopyJob_Execute_m252DCAFAFDBF626F4F61DB3866ED19F23BFE0AA1_AdjustorThunk (void);
// 0x00000636 System.Void Unity.Barracuda.BurstCPUOps_VectorBroadcastJob::Execute()
extern void VectorBroadcastJob_Execute_m5EF9B733B0B983A74C205F7DD1426C73372A06EC_AdjustorThunk (void);
// 0x00000637 System.Void Unity.Barracuda.BurstCPUOps_ScalarBroadcastAddJob::Execute(System.Int32)
extern void ScalarBroadcastAddJob_Execute_mE915062A0BEE3CCE0F3AD88157CD43A3C8C1C9F7_AdjustorThunk (void);
// 0x00000638 System.Void Unity.Barracuda.BurstCPUOps_ScalarBroadcastMulJob::Execute(System.Int32)
extern void ScalarBroadcastMulJob_Execute_mE3A135A4D0E0E922803AD84AEB5DD0F61383ABC2_AdjustorThunk (void);
// 0x00000639 System.Void Unity.Barracuda.BurstCPUOps_ScalarBroadcastDivJob::Execute(System.Int32)
extern void ScalarBroadcastDivJob_Execute_mEEAA71283BC212FE67208857D06ED387BEF4D16F_AdjustorThunk (void);
// 0x0000063A System.Void Unity.Barracuda.BurstCPUOps_ScalarBroadcastBiasedExpJob::Execute(System.Int32)
extern void ScalarBroadcastBiasedExpJob_Execute_m069A0B0EF112BCF21F7C8E3DF6D7176636C78A16_AdjustorThunk (void);
// 0x0000063B System.Void Unity.Barracuda.BurstCPUOps_GenericBroadcastJob::Execute(System.Int32)
extern void GenericBroadcastJob_Execute_m901DB49B0F51D6C1DC9CE709A97DDDA7F1880BD5_AdjustorThunk (void);
// 0x0000063C System.Void Unity.Barracuda.BurstCPUOps_GenericBroadcastAddJob::Execute(System.Int32)
extern void GenericBroadcastAddJob_Execute_m9E34CA1671E641B9315DAD68AD94AEA2CCF0C1AB_AdjustorThunk (void);
// 0x0000063D System.Void Unity.Barracuda.BurstCPUOps_GenericBroadcastMulJob::Execute(System.Int32)
extern void GenericBroadcastMulJob_Execute_mAFAF12884554340AEFA062E6DBAC7DBC8B3F7D34_AdjustorThunk (void);
// 0x0000063E System.Void Unity.Barracuda.BurstCPUOps_VectorBroadcastScaleBiasJob::Execute(System.Int32)
extern void VectorBroadcastScaleBiasJob_Execute_mBBF4B3413D79E8186F9EFE1C11EFBD05290CB58D_AdjustorThunk (void);
// 0x0000063F System.Void Unity.Barracuda.BurstCPUOps_ChannelReduceMaxJob::Execute(System.Int32)
extern void ChannelReduceMaxJob_Execute_m9270F49010885407E731F7B43A3E14CC5BF497D1_AdjustorThunk (void);
// 0x00000640 System.Void Unity.Barracuda.BurstCPUOps_ChannelReduceSumJob::Execute(System.Int32)
extern void ChannelReduceSumJob_Execute_mD3A4964931D6C104CE5F6394A1C94DD010CACCBF_AdjustorThunk (void);
// 0x00000641 System.Void Unity.Barracuda.ComputeKernelLibrary_Entry::.ctor(System.String,System.ValueTuple`3<System.Int32,System.Int32,System.Int32>,System.Single,System.Boolean,System.Boolean)
extern void Entry__ctor_mA0FEB6FCAAD06C2C898F704CF9059FC04585756D_AdjustorThunk (void);
// 0x00000642 System.Void Unity.Barracuda.ComputeKernelLibrary_Entry::.ctor(System.String,System.ValueTuple`3<System.Int32,System.Int32,System.Int32>,System.Single,System.UInt32)
extern void Entry__ctor_m3827CF3A55EFC67C2D734CBB168016FB15932E86_AdjustorThunk (void);
// 0x00000643 System.Void Unity.Barracuda.ComputeKernelLibrary_Entry::.ctor(System.String,System.ValueTuple`3<System.Int32,System.Int32,System.Int32>,System.Single,Unity.Barracuda.ComputeKernelLibrary_StrictDimensions)
extern void Entry__ctor_mD7FFBB06D1DE7626581FC2F405B6965AA1FBE3D8_AdjustorThunk (void);
// 0x00000644 System.Void Unity.Barracuda.ComputeKernelLibrary_Entry::.ctor(System.String,System.ValueTuple`3<System.Int32,System.Int32,System.Int32>,System.Single,Unity.Barracuda.ComputeKernelLibrary_StrictDimensions,System.Boolean)
extern void Entry__ctor_mC54D9235FFA6397072665C7E2C3AA8FC10E555E3_AdjustorThunk (void);
// 0x00000645 System.Void Unity.Barracuda.ComputeDebugUtils_KernelAssertInfo::.ctor(System.UInt32[])
extern void KernelAssertInfo__ctor_mD376D97C167175B1BC9902A2D1F1BE5ECAC7E34F_AdjustorThunk (void);
// 0x00000646 Unity.Barracuda.ComputeKernel Unity.Barracuda.PrecompiledComputeOps_CompiledLayer::get_kernel()
extern void CompiledLayer_get_kernel_m17FFFBB46A2B31B0C1F1554965FDD12090999E6F_AdjustorThunk (void);
// 0x00000647 System.Void Unity.Barracuda.ReferenceCPUOps_Seed::.ctor(UnityEngine.Random_State[]&,System.Int32)
extern void Seed__ctor_m6EEB43C4AE8DB1FA805D295AA07011CED05971B5 (void);
// 0x00000648 System.Void Unity.Barracuda.ReferenceCPUOps_Seed::Dispose()
extern void Seed_Dispose_m8B59728B01B258F8F38700D1071E9DA88C097E15 (void);
// 0x00000649 System.Void Unity.Barracuda.ReferenceCPUOps_<>c__DisplayClass25_0::.ctor()
extern void U3CU3Ec__DisplayClass25_0__ctor_mF57F4C52B19A78E0C4E8F707AEEEC3495235CFEF (void);
// 0x0000064A System.Single Unity.Barracuda.ReferenceCPUOps_<>c__DisplayClass25_0::<Border2D>b__0(Unity.Barracuda.Tensor,System.Int32,System.Int32,System.Int32,System.Int32)
extern void U3CU3Ec__DisplayClass25_0_U3CBorder2DU3Eb__0_mA3EA5491818A758FD8516BE607D2609165A73E5B (void);
// 0x0000064B System.Void Unity.Barracuda.ReferenceCPUOps_<>c::.cctor()
extern void U3CU3Ec__cctor_m9A4B02D75A7797E4E5278F18B68C52D15466FDD9 (void);
// 0x0000064C System.Void Unity.Barracuda.ReferenceCPUOps_<>c::.ctor()
extern void U3CU3Ec__ctor_m37C9701C3ECF9D2509B1635248758FF1E2B4089F (void);
// 0x0000064D System.Single Unity.Barracuda.ReferenceCPUOps_<>c::<Pad2DReflect>g__GetReflectPaddingU7C27_0(Unity.Barracuda.Tensor,System.Int32,System.Int32,System.Int32,System.Int32)
extern void U3CU3Ec_U3CPad2DReflectU3Eg__GetReflectPaddingU7C27_0_m8D8DC9B6D557C54EED01131E60F229064E41BC72 (void);
// 0x0000064E System.Single Unity.Barracuda.ReferenceCPUOps_<>c::<Pad2DSymmetric>g__GetSymmetricPaddingU7C28_0(Unity.Barracuda.Tensor,System.Int32,System.Int32,System.Int32,System.Int32)
extern void U3CU3Ec_U3CPad2DSymmetricU3Eg__GetSymmetricPaddingU7C28_0_mD54F530F07171F2E6990D8FAE985FB4606DF01EA (void);
// 0x0000064F System.Single Unity.Barracuda.ReferenceCPUOps_<>c::<Pad2DEdge>g__GetEdgePaddingU7C29_0(Unity.Barracuda.Tensor,System.Int32,System.Int32,System.Int32,System.Int32)
extern void U3CU3Ec_U3CPad2DEdgeU3Eg__GetEdgePaddingU7C29_0_m5A76868CE04352D7CE0F0691B429E871F499B7F0 (void);
// 0x00000650 System.Int64 Unity.Barracuda.ReferenceCPUOps_<>c::<Concat>b__66_1(System.Int64,System.Int32)
extern void U3CU3Ec_U3CConcatU3Eb__66_1_mA8AFAF892555DCA7EE65C61559A7FC21E197D1C5 (void);
// 0x00000651 System.Int64 Unity.Barracuda.ReferenceCPUOps_<>c::<Concat>b__66_0(System.Int64,System.Int32)
extern void U3CU3Ec_U3CConcatU3Eb__66_0_m93012D8063453FF4BC20C6ADF5F183C784D220D8 (void);
// 0x00000652 System.Single Unity.Barracuda.ReferenceCPUOps_<>c::<Add>b__70_0(System.Single,System.Single)
extern void U3CU3Ec_U3CAddU3Eb__70_0_mBB5D0DFB38627CBB7BCAEB6000F4B133380A5263 (void);
// 0x00000653 System.Single Unity.Barracuda.ReferenceCPUOps_<>c::<Sub>b__71_0(System.Single,System.Single)
extern void U3CU3Ec_U3CSubU3Eb__71_0_mFBC97FBF64960134FC688A778283FB666B8D50EE (void);
// 0x00000654 System.Single Unity.Barracuda.ReferenceCPUOps_<>c::<Mul>b__72_0(System.Single,System.Single)
extern void U3CU3Ec_U3CMulU3Eb__72_0_m98523AD8C2DE543B8AC859EB672EC7D5AEEBD13F (void);
// 0x00000655 System.Single Unity.Barracuda.ReferenceCPUOps_<>c::<Div>b__73_0(System.Single,System.Single)
extern void U3CU3Ec_U3CDivU3Eb__73_0_m9E557DA7B3188DE3D3D9A4F117A82366395815EF (void);
// 0x00000656 System.Single Unity.Barracuda.ReferenceCPUOps_<>c::<Pow>b__74_0(System.Single,System.Single)
extern void U3CU3Ec_U3CPowU3Eb__74_0_mC54424F5BC9D6A8BA76BE0F9E2A458CB2BB68B3F (void);
// 0x00000657 System.Single Unity.Barracuda.ReferenceCPUOps_<>c::<Min>b__75_0(System.Single,System.Single)
extern void U3CU3Ec_U3CMinU3Eb__75_0_mC692926492AE7F595656F87604A217FCE5A78606 (void);
// 0x00000658 System.Single Unity.Barracuda.ReferenceCPUOps_<>c::<Max>b__76_0(System.Single,System.Single)
extern void U3CU3Ec_U3CMaxU3Eb__76_0_mE6F74C9519C6135C901E2EB9E8300F45C2CE0F7C (void);
// 0x00000659 System.Single Unity.Barracuda.ReferenceCPUOps_<>c::<Mean>b__77_0(System.Single,System.Single)
extern void U3CU3Ec_U3CMeanU3Eb__77_0_m9CE6A3071B3C1A89A26B2888139FD0158678E1CA (void);
// 0x0000065A System.Single Unity.Barracuda.ReferenceCPUOps_<>c::<Greater>b__84_0(System.Single,System.Single)
extern void U3CU3Ec_U3CGreaterU3Eb__84_0_m7378FA7F37457025D37895F9558F9D9F797EA29C (void);
// 0x0000065B System.Single Unity.Barracuda.ReferenceCPUOps_<>c::<GreaterEqual>b__85_0(System.Single,System.Single)
extern void U3CU3Ec_U3CGreaterEqualU3Eb__85_0_m31F0006E10C84DAAE1B550A722232CA570E7D22C (void);
// 0x0000065C System.Single Unity.Barracuda.ReferenceCPUOps_<>c::<Less>b__86_0(System.Single,System.Single)
extern void U3CU3Ec_U3CLessU3Eb__86_0_mD1EBFE2FA3F31426A9146F206E5057840DBFD23D (void);
// 0x0000065D System.Single Unity.Barracuda.ReferenceCPUOps_<>c::<LessEqual>b__87_0(System.Single,System.Single)
extern void U3CU3Ec_U3CLessEqualU3Eb__87_0_mA6343E5A85EC178B588582573F1E2BF444984B17 (void);
// 0x0000065E System.Single Unity.Barracuda.ReferenceCPUOps_<>c::<Equal>b__88_0(System.Single,System.Single)
extern void U3CU3Ec_U3CEqualU3Eb__88_0_mAAAFA2A2314B0EAB2F89B532578B7C0F2EC5E713 (void);
// 0x0000065F System.Single Unity.Barracuda.ReferenceCPUOps_<>c::<LogicalOr>b__89_0(System.Single,System.Single)
extern void U3CU3Ec_U3CLogicalOrU3Eb__89_0_mA659F291E3664E4E59B1D4D02F60B48AF46995A5 (void);
// 0x00000660 System.Single Unity.Barracuda.ReferenceCPUOps_<>c::<LogicalAnd>b__90_0(System.Single,System.Single)
extern void U3CU3Ec_U3CLogicalAndU3Eb__90_0_mDB322FD83D95F64FBF5DBC65973035167F8BF66F (void);
// 0x00000661 System.Single Unity.Barracuda.ReferenceCPUOps_<>c::<LogicalXor>b__91_0(System.Single,System.Single)
extern void U3CU3Ec_U3CLogicalXorU3Eb__91_0_m8726755E8D12E451C4B5225AFDAFF31DBECD2155 (void);
// 0x00000662 System.Void Unity.Barracuda.ComputeTensorData_ConvertFromOnDeviceFormatHelper::.ctor()
extern void ConvertFromOnDeviceFormatHelper__ctor_m9FA0081379836182468CF54391AE6B64CB610572 (void);
// 0x00000663 System.Single[] Unity.Barracuda.ComputeTensorData_ConvertFromOnDeviceFormatHelper::GetNHWCData(Unity.Barracuda.TensorShape,System.Single[],Unity.Barracuda.ComputeInfo_ChannelsOrder,System.Boolean)
extern void ConvertFromOnDeviceFormatHelper_GetNHWCData_mB8B33A403D596FD3FAADB212D5E570738623435D (void);
// 0x00000664 System.Void Unity.Barracuda.ComputeTensorData_ConvertFromOnDeviceFormatHelper::ApplyConversion()
extern void ConvertFromOnDeviceFormatHelper_ApplyConversion_mAC951352CE0FA64E5BD022B4B9D2272184FCA949 (void);
// 0x00000665 System.Void Unity.Barracuda.ComputeTensorData_ConvertFromOnDeviceFormatHelper::UnrolledInnerLoop(System.Int64)
extern void ConvertFromOnDeviceFormatHelper_UnrolledInnerLoop_mCCD55EAB3A8B607F5287456B2DE313C5BF6F5117 (void);
// 0x00000666 System.Int32 Unity.Barracuda.ComputeFunc_TensorDecl::get_ShapeId()
extern void TensorDecl_get_ShapeId_m219F763483893522AB17A26DDE0FDD448656CD90_AdjustorThunk (void);
// 0x00000667 System.Int32 Unity.Barracuda.ComputeFunc_TensorDecl::get_InfoId()
extern void TensorDecl_get_InfoId_m1F475A3A72CA490C404DCB65CFD1784D765F60B5_AdjustorThunk (void);
// 0x00000668 System.Void Unity.Barracuda.ComputeFunc_TensorDecl::.ctor(System.Int32,System.Int32)
extern void TensorDecl__ctor_m575F79E34DB659B1EB06F693452E4A688BF58F09_AdjustorThunk (void);
// 0x00000669 System.Void Unity.Barracuda.UnsafeArrayCPUOps_<>c__DisplayClass52_0::.ctor()
extern void U3CU3Ec__DisplayClass52_0__ctor_m0EF0971FF08780E2ACA63B4E3868DAAD75C8E5D1 (void);
// 0x0000066A System.Void Unity.Barracuda.UnsafeArrayCPUOps_<>c__DisplayClass52_0::<MaxPool2DInnerLoop>b__0(System.Int32)
extern void U3CU3Ec__DisplayClass52_0_U3CMaxPool2DInnerLoopU3Eb__0_m615EBB1F2F4334C08438917B61121519D8B3D9A8 (void);
// 0x0000066B System.Void Unity.Barracuda.UnsafeArrayCPUOps_<>c__DisplayClass54_0::.ctor()
extern void U3CU3Ec__DisplayClass54_0__ctor_m625A68BE48D48496004C01383DEFDAE3DDC805E9 (void);
// 0x0000066C System.Void Unity.Barracuda.UnsafeArrayCPUOps_<>c__DisplayClass54_0::<AvgPool2DInnerLoop>b__0(System.Int32)
extern void U3CU3Ec__DisplayClass54_0_U3CAvgPool2DInnerLoopU3Eb__0_m2B7D889712B3A51D39306887A23CA48C92666A4A (void);
// 0x0000066D System.Void Unity.Barracuda.UnsafeArrayCPUOps_<>c__DisplayClass59_0::.ctor()
extern void U3CU3Ec__DisplayClass59_0__ctor_m1C5C87C1DAD3B904B51E436691D8FC7146A5E2F8 (void);
// 0x0000066E System.Void Unity.Barracuda.UnsafeArrayCPUOps_<>c__DisplayClass59_0::<Im2ColInnerLoop>b__0(System.Int32)
extern void U3CU3Ec__DisplayClass59_0_U3CIm2ColInnerLoopU3Eb__0_m661AD58227E23CA7E2BE4B90198D29DB1193650B (void);
// 0x0000066F System.Void Unity.Barracuda.UnsafeArrayCPUOps_<>c__DisplayClass63_0::.ctor()
extern void U3CU3Ec__DisplayClass63_0__ctor_m07EF5AF69AB65FE2CD49362469B6A814ADB403AB (void);
// 0x00000670 System.Void Unity.Barracuda.UnsafeArrayCPUOps_<>c__DisplayClass63_0::<DepthwiseConv2DInnerLoop>b__0(System.Int32)
extern void U3CU3Ec__DisplayClass63_0_U3CDepthwiseConv2DInnerLoopU3Eb__0_m784F3D79942B703939C984EDDA9CCA318786994B (void);
// 0x00000671 System.Void Unity.Barracuda.UnsafeArrayCPUOps_<>c__DisplayClass64_0::.ctor()
extern void U3CU3Ec__DisplayClass64_0__ctor_m3A0099FF1674B30451F7762D9BAD3DE9DC577EB3 (void);
// 0x00000672 System.Void Unity.Barracuda.UnsafeArrayCPUOps_<>c__DisplayClass64_1::.ctor()
extern void U3CU3Ec__DisplayClass64_1__ctor_m1CC5970283E95A9690E4DBAAC9D91CF52A631F86 (void);
// 0x00000673 System.Void Unity.Barracuda.UnsafeArrayCPUOps_<>c__DisplayClass64_2::.ctor()
extern void U3CU3Ec__DisplayClass64_2__ctor_mA1A889F9E01CE53BBF12C3460C6CA55EDC7DD950 (void);
// 0x00000674 System.Void Unity.Barracuda.UnsafeArrayCPUOps_<>c__DisplayClass64_2::<ApplyPadding>b__0(System.Int32)
extern void U3CU3Ec__DisplayClass64_2_U3CApplyPaddingU3Eb__0_m04E25A7B3CE5722A89879310A4D3BFBC90A7D6C9 (void);
// 0x00000675 System.Void Unity.Barracuda.GenericWorker_<StartManualSchedule>d__29::.ctor(System.Int32)
extern void U3CStartManualScheduleU3Ed__29__ctor_m04FBF5CB992E934F312DE78BA76B0DF46E7AE071 (void);
// 0x00000676 System.Void Unity.Barracuda.GenericWorker_<StartManualSchedule>d__29::System.IDisposable.Dispose()
extern void U3CStartManualScheduleU3Ed__29_System_IDisposable_Dispose_m4AE1C75EFD2E22D3BCB41286917BD4B8FEFCF0F6 (void);
// 0x00000677 System.Boolean Unity.Barracuda.GenericWorker_<StartManualSchedule>d__29::MoveNext()
extern void U3CStartManualScheduleU3Ed__29_MoveNext_m9F4165055574686A23F3D2194E8CFF2B07FB7E5A (void);
// 0x00000678 System.Void Unity.Barracuda.GenericWorker_<StartManualSchedule>d__29::<>m__Finally1()
extern void U3CStartManualScheduleU3Ed__29_U3CU3Em__Finally1_m9A3ABE27CADFBCE10A687B3B64FFF807A26EF4BA (void);
// 0x00000679 System.Object Unity.Barracuda.GenericWorker_<StartManualSchedule>d__29::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CStartManualScheduleU3Ed__29_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m54113142A59D889A310ADB171BDE09A2B2C3DE91 (void);
// 0x0000067A System.Void Unity.Barracuda.GenericWorker_<StartManualSchedule>d__29::System.Collections.IEnumerator.Reset()
extern void U3CStartManualScheduleU3Ed__29_System_Collections_IEnumerator_Reset_mA43528BC5A74C9EF14C730808E783ADD9E12F215 (void);
// 0x0000067B System.Object Unity.Barracuda.GenericWorker_<StartManualSchedule>d__29::System.Collections.IEnumerator.get_Current()
extern void U3CStartManualScheduleU3Ed__29_System_Collections_IEnumerator_get_Current_m50394F4EF46E652BA4F9C935901A81C3E5C00E32 (void);
// 0x0000067C System.Void Unity.Barracuda.CSharpBLAS_SGEMMJob::Execute()
extern void SGEMMJob_Execute_mC037183DCBDC59F93F0C6A0735CA57F29E288D76_AdjustorThunk (void);
// 0x0000067D System.Void Unity.Barracuda.MatrixUtils_<>c__DisplayClass7_0::.ctor()
extern void U3CU3Ec__DisplayClass7_0__ctor_m6A94119F585BBC676B9EA8205F61EE81EC7ABA36 (void);
// 0x0000067E System.Void Unity.Barracuda.MatrixUtils_<>c__DisplayClass7_0::<MultiplyBlockUnroll8xhParallelWithPadding>b__0(System.Int32)
extern void U3CU3Ec__DisplayClass7_0_U3CMultiplyBlockUnroll8xhParallelWithPaddingU3Eb__0_m97605A1207F269E986BEDE04A6C917D0C6F8443C (void);
// 0x0000067F System.Void Unity.Barracuda.ModelAnalyzer_<>c::.cctor()
extern void U3CU3Ec__cctor_mFEDBEC254754C87EFDDFAC8A8716246A4A6C29EF (void);
// 0x00000680 System.Void Unity.Barracuda.ModelAnalyzer_<>c::.ctor()
extern void U3CU3Ec__ctor_mEBCD037AD59E1CBF44E5336BD23C6AFCB970EB0F (void);
// 0x00000681 System.String Unity.Barracuda.ModelAnalyzer_<>c::<FindUnusedLayers>b__10_0(Unity.Barracuda.Layer)
extern void U3CU3Ec_U3CFindUnusedLayersU3Eb__10_0_m31601E7F9ACB5AD52A90B5566250AA147E0B2F8E (void);
// 0x00000682 System.Boolean Unity.Barracuda.ModelAnalyzer_<>c::<FindUnusedLayers>b__10_1(Unity.Barracuda.Layer)
extern void U3CU3Ec_U3CFindUnusedLayersU3Eb__10_1_m26F730C00EDF8EEF8B9E1FB6C24541F381795201 (void);
// 0x00000683 System.Boolean Unity.Barracuda.ModelAnalyzer_<>c::<FindUnusedLayers>b__10_2(System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>)
extern void U3CU3Ec_U3CFindUnusedLayersU3Eb__10_2_m42B40FD62C66939CC869176CED417566D3D84705 (void);
// 0x00000684 System.String Unity.Barracuda.ModelAnalyzer_<>c::<FindUnusedLayers>b__10_3(System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>)
extern void U3CU3Ec_U3CFindUnusedLayersU3Eb__10_3_m3F447717907BB2116187B17586233365BC849A1F (void);
// 0x00000685 System.String Unity.Barracuda.ModelAnalyzer_<>c::<FindBrokenLinks>b__11_0(Unity.Barracuda.Layer)
extern void U3CU3Ec_U3CFindBrokenLinksU3Eb__11_0_m9A6A869A5139DB77B17BFD37EA61096E46858CAB (void);
// 0x00000686 System.String Unity.Barracuda.ModelAnalyzer_<>c::<FindBrokenLinks>b__11_1(Unity.Barracuda.Model_Input)
extern void U3CU3Ec_U3CFindBrokenLinksU3Eb__11_1_m08C4FBCEAC9DB497A8834CF8586B097333993BDA (void);
// 0x00000687 System.String Unity.Barracuda.ModelAnalyzer_<>c::<FindBrokenLinks>b__11_2(Unity.Barracuda.Model_Memory)
extern void U3CU3Ec_U3CFindBrokenLinksU3Eb__11_2_m8F8ED85C6CAA9D4519D2BB10C69C34B2604771BC (void);
// 0x00000688 System.String Unity.Barracuda.ModelAnalyzer_<>c::<FindUnconnectedInputs>b__14_0(Unity.Barracuda.Model_Input)
extern void U3CU3Ec_U3CFindUnconnectedInputsU3Eb__14_0_mF109714DC6A8BD63B619AC4A5CA97945323912D3 (void);
// 0x00000689 System.Boolean Unity.Barracuda.ModelAnalyzer_<>c::<FindUnconnectedInputs>b__14_1(Unity.Barracuda.Model_Input)
extern void U3CU3Ec_U3CFindUnconnectedInputsU3Eb__14_1_m94F53A604F9AD4C85F230A813D184CEE0A8F3001 (void);
// 0x0000068A System.Void Unity.Barracuda.ModelOptimizer_<>c__DisplayClass0_0::.ctor()
extern void U3CU3Ec__DisplayClass0_0__ctor_mDA29A5CB02D0113178215F5B52AD8421C17965C9 (void);
// 0x0000068B System.Boolean Unity.Barracuda.ModelOptimizer_<>c__DisplayClass0_0::<Optimize>b__0(Unity.Barracuda.Layer)
extern void U3CU3Ec__DisplayClass0_0_U3COptimizeU3Eb__0_mFD4985B64204AEDCC5322CDEA809B71FC45D9095 (void);
// 0x0000068C System.Void Unity.Barracuda.ModelOptimizer_<>c__DisplayClass3_0::.ctor()
extern void U3CU3Ec__DisplayClass3_0__ctor_m9C425AF4FECCC4062AB98204C9CA6411F0E9AAC3 (void);
// 0x0000068D System.Boolean Unity.Barracuda.ModelOptimizer_<>c__DisplayClass3_0::<FuseActivation>b__0(Unity.Barracuda.Model_Memory)
extern void U3CU3Ec__DisplayClass3_0_U3CFuseActivationU3Eb__0_m62EBC7E063A5BFCE884E662C1A2760FCF2083502 (void);
// 0x0000068E System.Void Unity.Barracuda.ModelOptimizer_<>c__DisplayClass4_0::.ctor()
extern void U3CU3Ec__DisplayClass4_0__ctor_m7026E44243E7AF6D94C9C42380C17DFABBF1ED5C (void);
// 0x0000068F System.Boolean Unity.Barracuda.ModelOptimizer_<>c__DisplayClass4_0::<FuseActivations>b__1(Unity.Barracuda.Layer)
extern void U3CU3Ec__DisplayClass4_0_U3CFuseActivationsU3Eb__1_m5324934F098E0FFFA7C4795B12C5168EB8A1A016 (void);
// 0x00000690 System.Void Unity.Barracuda.ModelOptimizer_<>c__DisplayClass4_1::.ctor()
extern void U3CU3Ec__DisplayClass4_1__ctor_m52F25F819E729D3FB5CF817DE7899F0F4747FA03 (void);
// 0x00000691 System.Boolean Unity.Barracuda.ModelOptimizer_<>c__DisplayClass4_1::<FuseActivations>b__2(Unity.Barracuda.Model_Memory)
extern void U3CU3Ec__DisplayClass4_1_U3CFuseActivationsU3Eb__2_m5F56DC50304DC0CC525E4AA9436E6B30EB9555E6 (void);
// 0x00000692 System.Boolean Unity.Barracuda.ModelOptimizer_<>c__DisplayClass4_1::<FuseActivations>b__3(Unity.Barracuda.Layer)
extern void U3CU3Ec__DisplayClass4_1_U3CFuseActivationsU3Eb__3_mA0A7DBE94249FCAA824D52131D5D71FE41ECEB22 (void);
// 0x00000693 System.Void Unity.Barracuda.ModelOptimizer_<>c::.cctor()
extern void U3CU3Ec__cctor_m9A072FFF48F54FCE88AB7A44320BD90689B5899D (void);
// 0x00000694 System.Void Unity.Barracuda.ModelOptimizer_<>c::.ctor()
extern void U3CU3Ec__ctor_m63B547872A78B701626DAB8BEC00403CC4F472B1 (void);
// 0x00000695 System.Boolean Unity.Barracuda.ModelOptimizer_<>c::<FuseActivations>b__4_0(Unity.Barracuda.Layer)
extern void U3CU3Ec_U3CFuseActivationsU3Eb__4_0_mF9BCF5D8CBDF1F0008E7DD7CF2EF8BF89D464F1A (void);
// 0x00000696 System.String Unity.Barracuda.ModelOptimizer_<>c::<RemoveNoop>b__5_0(Unity.Barracuda.Model_Memory)
extern void U3CU3Ec_U3CRemoveNoopU3Eb__5_0_m4132BFF8A80F0E371D01DFFAE86ABF957B0E9442 (void);
// 0x00000697 System.String Unity.Barracuda.ModelOptimizer_<>c::<RemoveNoop>b__5_1(Unity.Barracuda.Model_Memory)
extern void U3CU3Ec_U3CRemoveNoopU3Eb__5_1_mACDD844808FD70BEDF6BB7D204722A025FBB9482 (void);
// 0x00000698 System.Void Unity.Barracuda.ModelOptimizer_<>c__DisplayClass5_0::.ctor()
extern void U3CU3Ec__DisplayClass5_0__ctor_m21286BCAA40E25F13D9A366FD55AB36951872B2C (void);
// 0x00000699 System.Boolean Unity.Barracuda.ModelOptimizer_<>c__DisplayClass5_0::<RemoveNoop>b__2(Unity.Barracuda.Layer)
extern void U3CU3Ec__DisplayClass5_0_U3CRemoveNoopU3Eb__2_m432A69B4B4DAE787A1767D5BEC0B1115B8F4CC77 (void);
// 0x0000069A System.Boolean Unity.Barracuda.ModelOptimizer_<>c__DisplayClass5_0::<RemoveNoop>b__3(Unity.Barracuda.Layer)
extern void U3CU3Ec__DisplayClass5_0_U3CRemoveNoopU3Eb__3_mD767E48C57D4858FE091FD8F18CB93CAAB212052 (void);
// 0x0000069B System.Void Unity.Barracuda.StatsOps_Transcendental::.ctor()
extern void Transcendental__ctor_mBBFECB43C56057C8D62CDA82C88F7068A3954A65 (void);
// 0x0000069C System.Void Unity.Barracuda.TensorCachingByShapeAllocator_<>c__DisplayClass13_0::.ctor()
extern void U3CU3Ec__DisplayClass13_0__ctor_mED8B6C682C0F100ABCDFE23AFCC0091FDEFECD24 (void);
// 0x0000069D System.Void Unity.Barracuda.TensorCachingByShapeAllocator_<>c__DisplayClass13_0::<MoveToDevice>b__0(Unity.Barracuda.ITensorData)
extern void U3CU3Ec__DisplayClass13_0_U3CMoveToDeviceU3Eb__0_m9F536E5392BBF946ADFEAD451ABAE8D7385B99B0 (void);
// 0x0000069E System.Void Unity.Barracuda.WorkerFactory_WorkerConfiguration::.ctor(Unity.Barracuda.WorkerFactory_Type,System.Boolean,Unity.Barracuda.CompareOpsUtils_LogLevel,System.Single)
extern void WorkerConfiguration__ctor_mDFB06370060E0E4FAFCF44D15D9C83F95ECC4E98_AdjustorThunk (void);
// 0x0000069F System.Void Unity.Barracuda.Layer_<>c::.cctor()
extern void U3CU3Ec__cctor_m43BDF84A3F87CF72B905BD18CAF7EB614D747032 (void);
// 0x000006A0 System.Void Unity.Barracuda.Layer_<>c::.ctor()
extern void U3CU3Ec__ctor_mEAF1C3F046DF2D5BDFAD30CA44E3F1482234A8BB (void);
// 0x000006A1 System.String Unity.Barracuda.Layer_<>c::<ToString>b__21_0(Unity.Barracuda.Layer_DataSet)
extern void U3CU3Ec_U3CToStringU3Eb__21_0_m754A3F76D388EC042BA9B1E02EAAD0DE4BEAE255 (void);
// 0x000006A2 Unity.Barracuda.Model_Input Unity.Barracuda.Model_Input::WithName(System.String)
extern void Input_WithName_mA9601A1037ACC905A60E664CB346B446D5D4E584_AdjustorThunk (void);
// 0x000006A3 System.String Unity.Barracuda.Model_ImporterWarning::get_Message()
extern void ImporterWarning_get_Message_mBB9D010875563A94AA62ED8BDEB0BC3B16985774 (void);
// 0x000006A4 System.String Unity.Barracuda.Model_ImporterWarning::get_LayerName()
extern void ImporterWarning_get_LayerName_mE728E2C1B9D35B7A5B0CD0AC66F7D60F6DFB00EC (void);
// 0x000006A5 System.Void Unity.Barracuda.Model_ImporterWarning::.ctor(System.String,System.String)
extern void ImporterWarning__ctor_m9B473CD8123AA755C32A040D0F77709907D98475 (void);
// 0x000006A6 System.Void Unity.Barracuda.Model_<>c::.cctor()
extern void U3CU3Ec__cctor_m64A78FF8A355D4BCCBC24214E897178BE5E0315E (void);
// 0x000006A7 System.Void Unity.Barracuda.Model_<>c::.ctor()
extern void U3CU3Ec__ctor_m52444A81E80441CDAED98D3431553FA2A344983D (void);
// 0x000006A8 System.String Unity.Barracuda.Model_<>c::<ToString>b__15_0(Unity.Barracuda.Model_Input)
extern void U3CU3Ec_U3CToStringU3Eb__15_0_m9190D0695EB080CEC9C82993AF3EC6247B586D20 (void);
// 0x000006A9 System.String Unity.Barracuda.Model_<>c::<ToString>b__15_1(Unity.Barracuda.Model_Memory)
extern void U3CU3Ec_U3CToStringU3Eb__15_1_m7A99CBBCF52075516E15039F7AE411CF432624DB (void);
// 0x000006AA System.String Unity.Barracuda.Model_<>c::<ToString>b__15_2(Unity.Barracuda.Layer)
extern void U3CU3Ec_U3CToStringU3Eb__15_2_m3119E6A3128C28A05C9E7C00C14C6F7581D7169C (void);
// 0x000006AB System.Void Unity.Barracuda.TensorExtensions_<>c::.cctor()
extern void U3CU3Ec__cctor_mE034B4A900790C7FD64E5940B772877AEDB3F4AF (void);
// 0x000006AC System.Void Unity.Barracuda.TensorExtensions_<>c::.ctor()
extern void U3CU3Ec__ctor_m5DC769C3210E64FC139187973063A989C101E8E8 (void);
// 0x000006AD System.Int32 Unity.Barracuda.TensorExtensions_<>c::<AsInts>b__4_0(System.Single)
extern void U3CU3Ec_U3CAsIntsU3Eb__4_0_m81A645E5046DA6504B4ADF64177990B98A113906 (void);
// 0x000006AE System.Int64 Unity.Barracuda.TensorExtensions_<>c::<AsLongs>b__5_0(System.Single)
extern void U3CU3Ec_U3CAsLongsU3Eb__5_0_mE860A1DE3B9BC63B60D37F2973A416720B4B8521 (void);
// 0x000006AF System.Void Unity.Barracuda.TensorExtensions_<>c__DisplayClass14_0::.ctor()
extern void U3CU3Ec__DisplayClass14_0__ctor_mC049C64DCDE734FCF7F3885FD20F5B09E58170F2 (void);
// 0x000006B0 System.Void Unity.Barracuda.TensorExtensions_<>c__DisplayClass14_1::.ctor()
extern void U3CU3Ec__DisplayClass14_1__ctor_mB7429C454FEFEE85B1885E95D8333A4E6BF8D39B (void);
// 0x000006B1 System.Int32 Unity.Barracuda.TensorExtensions_<>c__DisplayClass14_1::<ArgSort>b__0(System.Int32,System.Int32)
extern void U3CU3Ec__DisplayClass14_1_U3CArgSortU3Eb__0_mFB192EB9036F5F53B6FBD359F1516E8DF5798181 (void);
static Il2CppMethodPointer s_methodPointers[1713] = 
{
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	BarracudaBackendsFactory_ResolveAutoType_mE1FA34FB3E37F66D044E32C2910F65E1BFB84901,
	BarracudaBackendsFactory_GetBestTypeForDevice_mB8D3C144A6FFB3DC58A8F0B020C3B14B4C3405B1,
	BarracudaBackendsFactory_ValidateType_mD5863560EFD1BE5674FC6BD22C6C2A5CD5019B79,
	BarracudaBackendsFactory_CreateOps_m9D516CE3B2F84465E6FFA09A027A5E7CEF27AD55,
	BarracudaBackendsFactory_CreateWorker_mA8ABB3CC7C40FBD1F07EA1ECFA1CD9A5C94AAD3F,
	BarracudaBackendsFactory_PatchModel_m5AADDFC1F23F49088754ED739CFA42C84B8342B2,
	BarracudaBackendsFactory_ValidateModel_m8206B8143E846D71A00781069EF5B6635CE3B7AC,
	BarracudaBackendsFactory__ctor_m53CE2D198F71A59BFA1A3FFA253D1E2DC6646586,
	BurstTensorData_get_fence_mE17EFD9CC6702009DA438843D21B46F8DB459D4A,
	BurstTensorData_set_fence_mCDEBEFC61CFE843A9AF154E6586966D8345D93D1,
	BurstTensorData_get_reuse_m1E554704F51DFEC39D9CFEA1DB73BE979EBD57AC,
	BurstTensorData_set_reuse_m4BA0CA7DB0830F298832CD57B6CF141AEBD0967E,
	BurstTensorData__ctor_m99F80AA1DE09B1D7CDDFE20A0293145051DDF6BB,
	BurstTensorData__ctor_mECDEB2473F7535EEA7F7D81DEC0CC43948186BC1,
	BurstTensorData__ctor_mA9321F4E1F2CCFECE302E1DE7F0F16A072DEA68C,
	BurstTensorData__ctor_m5F0C64EF48DAB5260A1F5DAEFA479659046B040A,
	BurstTensorData__ctor_mA36A5EF58E213B3BFE13AB850575E465A60706F7,
	BurstTensorData_Finalize_mDFC5EBC548E3263D8EBFD2F104553783D19C0C28,
	BurstTensorData_Dispose_m8399A096E2C6FE86A66BC754A016A0C5525BC146,
	BurstTensorData_CompleteAllPendingOperations_m0A542B1038DC9DC932821293D8682148C5806733,
	BurstTensorData_Reserve_m4E1106383B1CD72E36886CFB761001ED09333342,
	BurstTensorData_Upload_mB0F9B2619D055191A0EB2D30E312803E64C2BF42,
	BurstTensorData_Download_m455F18B618FA10B353F4B42CEE7C498555FB0DF9,
	BurstTensorData_SharedAccess_mE06E0B7DF19BE8304CFEFFB8E49245A55AD50C42,
	BurstTensorData_ScheduleAsyncDownload_mE4BFDF750361FDC234F69B045EBAC82469C76ADA,
	BurstTensorData_ToString_m0F41CF270F0C345B090012FD0312F8CA4EBD5C20,
	BurstCPUOps__ctor_m9366FE21FC6CED612459F3A838D4564D758E44EB,
	BurstCPUOps_Pin_m0735E4F1CFD93432EA86D2DA85F141A73C94190D,
	BurstCPUOps_Prepare_m5E815F345BBF4EC1F36868D49FF957A7E87AD49E,
	BurstCPUOps_Dependencies_mB397C95D7ADF8FE823502686B939D72C6B088B34,
	BurstCPUOps_Dependencies_mE7338BC0D47E313C7B2F75D1DEDA56E8F9BB0E44,
	BurstCPUOps_MatMul_m8B4D34B9C7D3CBCFDA2518D790D03D95224D6B3D,
	BurstCPUOps_Dense_mE8F72E286BDF5A514378A4D333BF709343E8F75B,
	BurstCPUOps_Conv2D_m4EFD9642EDCB2D41F3316DDA897B68AEA5AE8727,
	BurstCPUOps_Conv2DUsingIm2ColSliced_mB33760D9F591C4C54E01E59712F46E53B1A1F482,
	BurstCPUOps_MaxPool2D_m1587A1DD16872AA66026499C4680513B28B6906F,
	BurstCPUOps_AvgPool2D_mB5FB04B79F6152DCC65CE71A75124941F8003221,
	BurstCPUOps_GlobalMaxPool2D_m32CE5E6AB47D2E63E4DC8CDCC720D1364BCB2509,
	BurstCPUOps_GlobalAvgPool2D_mB1A71AE1590E92DDFC6D99D75D8BB1ACB3C0FB58,
	BurstCPUOps_DepthwiseConv2D_mCA6FCFA337F640270CE04F25805A3AE6039ED220,
	BurstCPUOps_ScaleBias_m036595A1F503E5B7E42223BD511BB0FAFC7EFE5E,
	BurstCPUOps_Relu_m62E9C9993C0FC5FA6E8D69062EA44A49B1430A6B,
	BurstCPUOps_Relu6_mFA9EF67ADBF816268ABCEBBFBD55C6CF6B9A6683,
	BurstCPUOps_LeakyRelu_mDDE2DAA327770A3FB475F6DC868DB8098358CC2C,
	BurstCPUOps_Tanh_m912B687E35F5588EDF8A5FA0AA2B68E9DAB8F046,
	BurstCPUOps_Sigmoid_mF519A6A08ED887CD9363181815E3BC74F83E634C,
	BurstCPUOps_Elu_mD9C83FD6A2F91E2341C5D452BBA5F2994135E978,
	BurstCPUOps_Selu_m9E961B28F5B8A1438419F169A99B8141A2E52333,
	BurstCPUOps_Swish_mA6D8E4751F279506F80BC7B11E61EB0B148C182F,
	BurstCPUOps_PRelu_m08086325897887B987F5934341A1DC4EF89B8E01,
	BurstCPUOps_Softmax_mE06F9407D1C848DF55AB2F3AC07496CBEBFAA62A,
	BurstCPUOps_LogSoftmax_mD84F4045BB70E6ACB7F2E6767BC9F5543393F274,
	BurstCPUOps_Abs_m5DAB80F7A5740AB857951E95DC872FA5022CE9E0,
	BurstCPUOps_Neg_m6E4D967CCF99E0E45E73810B630AB6FF79C6F580,
	BurstCPUOps_Ceil_m753CD78A887B8765A5844EE40B06093D803FB50F,
	BurstCPUOps_Clip_m3F5C76D11F8A378F36AA8B58CBC74B08A994B458,
	BurstCPUOps_Floor_m888D4A89484CB2C4A8BA1599E924400226750EF3,
	BurstCPUOps_Reciprocal_m1164C219567DC38D44957F4577860BE695882380,
	BurstCPUOps_Pow_m4240B490B22E95D3B4BBF20B59666641423986B1,
	BurstCPUOps_Exp_mC51D1E5D123157D9876F057EB61C7DB9E8576BB6,
	BurstCPUOps_Log_mBA5CD85F276F8CD62E0E1DCA6AA00C37B474CEE1,
	BurstCPUOps_Sqrt_m18883E1349002517B1F7CD484E628B382B5B87EC,
	BurstCPUOps_GenericBroadcast_mAC44BD9EE84FECEB9C55ABDE390A5EDF7863DB20,
	BurstCPUOps_BroadcastAdd_m52B9CB955892AF45FE62DF97AC4E4ED9B2FD523E,
	BurstCPUOps_BroadcastSub_m0BD3E67B63500299649E485E00D6B28D3D432F8E,
	BurstCPUOps_BroadcastMul_m0B69AA3824DAF0631E7DE3A164C1B599AF1760F1,
	BurstCPUOps_BroadcastDiv_m021E649553C9E8F8DB8297A4544C206554B666AE,
	BurstCPUOps_BroadcastPow_m05D6FC2C537190D451870442026BA1DC82695EC8,
	BurstCPUOps_BroadcastMin_mBD1EF1422507BDA02D6DC18F189061B522E264C6,
	BurstCPUOps_BroadcastMax_mC03666C917A89227185805A6F2356BD4BB882BB7,
	BurstCPUOps_Add_m90ADC869FD7E55F40098E12F89FDDACFEF384414,
	BurstCPUOps_Sub_m0F93F87685F416DCA2A374E4783A7BCD641A5F64,
	BurstCPUOps_Mul_mFBD5DB651A4257642AB9CF6DE8591F3FE168013B,
	BurstCPUOps_Div_mA97D2A7D2A3F1D2DA5AB6055CA1A45AACF2738C2,
	BurstCPUOps_Pow_mCD9E254460A173DE975B139D20F22350C642AC5B,
	BurstCPUOps_Min_mC00DC7589B0A2B6A7078E19D7F38A9D02C159D4A,
	BurstCPUOps_Max_m23FEEF12FF8FF02FCA6C22CBC0E35DC08A405A25,
	BurstCPUOps_CopyAndReshape_mD67EA810E768A07972917D4244B230429B15C14D,
	ComputeKernelLibrary_Dense_m4DA6E9171139C4742B7A59E52FEECDA944350924,
	ComputeKernelLibrary_IsT8x8_R8x8KernelValid_mE9E27C0B1E2901E90A9F0E96F14C3FF7240FF46D,
	ComputeKernelLibrary_IsT2x32_R8x8KernelValid_m39F2259AE113F3757DBE1A0CB2D9792C9ADDC081,
	ComputeKernelLibrary_Conv2D_m839D6B1B9C501C4B3E8DA77BD9C56C94F0752FC8,
	ComputeKernelLibrary_DepthwiseConv2D_mB0C9DC349DBE82D27A57D61CFE37829A50A36F27,
	ComputeKernelLibrary_Conv2DTrans_m54F3196D5B9DEB599790CD132D5C65A12FB49F69,
	ComputeKernelLibrary_Activation_m073D556A4167E92E3A272EEEAD0CEA00C0BFF496,
	ComputeKernelLibrary_PRelu_mA7D8D5B8AFB53BA73D15A8D426AF697A8C724D10,
	ComputeKernelLibrary_Softmax_mB431504D0D149E9BF4991B2035F769F76EF81AC0,
	ComputeKernelLibrary_LogSoftmax_m348856300B01A392DF3BCAEAAF71E5D9FBF90D4E,
	ComputeKernelLibrary_ScaleBias_mA02002DAAA1B2286AE68031BAAA9292CAA38829C,
	ComputeKernelLibrary_Upsample2D_mDD6EC7D61EA238484F7928BCD906974597412270,
	ComputeKernelLibrary_Pool2DReduce_m970500B3A205DF4C559AFA85F85EDC045DCECB6A,
	ComputeKernelLibrary_Pool2D_m6453C56C0CE5CE5B1F5C0C67EF5D26AD9963E986,
	ComputeKernelLibrary_PoolAvgVar2D_m9E794C9FE96ACAE04981396B24080E709F784BAC,
	ComputeKernelLibrary_GlobalPool2D_mD4E9071653ACC2812D2039EE12BF4B84F06B970C,
	ComputeKernelLibrary_NormalizationTail_mF6B0D6559DBFAD920BB77CD4DCA86C7EF1F142A9,
	ComputeKernelLibrary_Copy_m0B5D9919DBA6AF2D827C2D13359A629A8D22AAD9,
	ComputeKernelLibrary_ReshapeFromNHWCModel_m70AE7AB91B3F1952A2FA203826635DD29F80BF9C,
	ComputeKernelLibrary_Padding_m66CCCBC6D5956548ED7B71357345860C2B7DE4CC,
	ComputeKernelLibrary_Broadcast_m3F8A9620E29C71B7A107CDEF00A2C48A9D372810,
	ComputeKernelLibrary_Int3_mC98B0F475B03A2104FFEA88E57AA859CBA2930E2,
	ComputeKernelLibrary_BigO_mD5DB3E6B5752534FFD20E77C9209B6BAD917A39F,
	ComputeKernelLibrary_StrictAnd_m5AC9166981C7A821D6849D39EE22A5992B54B36D,
	ComputeKernelLibrary_Strict_m34465B7D48A7942546DA6151C263B4DAD9496460,
	ComputeKernelLibrary__ctor_m82BD56B7847946663D18E5A4587626EF48677A60,
	ComputeKernelLibrary__cctor_m490999ACAF5B987938535AC265BC8103575308F8,
	ComputeKernel_get_shader_mBEF4FF9F99B82A30AFEC637866AEA2B7B10EB081_AdjustorThunk,
	ComputeKernel__ctor_m488EBE3AD1644CE47CD4C30A1C6955A51961FD37_AdjustorThunk,
	ComputeKernel_SetTensor_mD0ABD7C1289694BA3108D12B1D883064F3B4A412_AdjustorThunk,
	ComputeKernel_SetTensor_m4CA6E7DA385C49BD03A19EF82E2604EA91743CE8_AdjustorThunk,
	ComputeKernel_SetTensorDecl_mFB3C566DC499DFD9ECA575162830E4B9342C1457_AdjustorThunk,
	ComputeKernel_SetTensorDecl_m573FF4363D88E28A63BAF97B5ABC39922AAEAB43_AdjustorThunk,
	ComputeKernel_SetTensorBuffer_m4F8B6BCF1F234AD1FD856687896423DAF6380C05_AdjustorThunk,
	ComputeKernel_SetTensorBuffer_m84491B89B783EA390D309DBE48772A9685990313_AdjustorThunk,
	ComputeKernel_Dispatch_m3F43C7B18C1542AA5CD1E84C07CC2F164C82D9AA_AdjustorThunk,
	ComputeKernel_CalculateEntryScore_m109F09CA0019F1BCC9AF68F5DC1A35A9DA0001A2,
	ComputeKernel_BestKernel_mF520BC626037F635E85CB10AA061C2E5FE77EE8E,
	ComputeOps__ctor_mFDF4219D7C7C38EC8ABD283797B133A169DBEC94,
	ComputeOps_BestKernel_mD2A53FAC143ECC4ACAE6568CFB17EC6C2FC679A8,
	ComputeOps_CompileKernel_mB0358002054D6FD62E74416959F4834F3F04E404,
	ComputeOps_Dense_mDF5E3DE89F0395649F9AC572134E87ABEB9BC3AE,
	ComputeOps_Conv2DWinograd_mCBF066B921B80FCB09AAD70DD5FA0438DC8300F4,
	ComputeOps_Conv2D_m20B3FCE032E4EE992F65EE0368B932DA522F9C14,
	ComputeOps_DepthwiseConv2D_m133486C6CC3BA8B3AD21634C2FBB66CCE11F9F71,
	ComputeOps_Conv2DTrans_mD6825E59167060BC85D72B2FF03F210C03CF07CB,
	ComputeOps_Upsample2D_mE30A4CE66C1291361D4EC799E782D6833426F24C,
	ComputeOps_Pool2D_m7B5D59A9DAE4CB9306CD56F9C3012C701EF91583,
	ComputeOps_GlobalMaxPool2D_m6B08BE5CC1AD463E079DD41DA6DFA8A944E095A2,
	ComputeOps_GlobalAvgPool2D_m5BAB25BF25F1F7E7810A86C0F5DFCEB391636AD8,
	ComputeOps_GlobalAvgVariancePool2DReduce_m20898741D1AAC4F7AE4B4EC0F3F9F537FA4B004E,
	ComputeOps_GlobalAvgVariancePool2D_m96B45F71C500015A5E7882E8C4D141698EA609EB,
	ComputeOps_GlobalPool2DReduce_mCA44D5F32CE7BA33B4025354E154130D2799595E,
	ComputeOps_GlobalPool2D_m4B8AE165F7A3133A2E6DF068C5249DFE4B54E50F,
	ComputeOps_ScaleBias_m23741F8F758A8224AE78EF1C752D2DD2B2D4CAC2,
	ComputeOps_Normalization_mD7D76C0A9901786046048F4B734D0D6D2850F7F1,
	ComputeOps_Activation_m700AC604BF4D9F2E17F24F81415EA5179423780A,
	ComputeOps_PRelu_mCB4D213C4B69A85D2ECEEDCEF1254E21654B39D7,
	ComputeOps_Softmax_m5ADA4BC93CCAAFE31E9B29241B5621F0DAFE5FD8,
	ComputeOps_LogSoftmax_mA86CA3A7BA966B86E27C8D9B0112A475BE846F06,
	ComputeOps_RandomNormal_m6623F07D9E791E226D22695EB91E43EBCD069393,
	ComputeOps_RandomUniform_mBCA66B900A8A20F4DBCC7D288E4364A096211999,
	ComputeOps_Concat_mFE05CC560B7D53D7AF66BA056782B9CB038B9F5E,
	ComputeOps_GetInputTensorStridesOnDevice_m74B55EF736C1A77F5F30056327503D2377385F1D,
	ComputeOps_ElementwiseWithBroadcast_m27536D9972ADC6BD5303F188E2A418F662A81DC4,
	ComputeOps_ApplyPadding_mC9FB3192EB8EA9217DB2C6825E05DB0FA8195833,
	ComputeOps_LogicalNot_mC978617EB23566AC434B7D908669AB4CF642BD64,
	ComputeOps_CopyAndReshape_NCHW_mC4345C07550CD8FCE62ABFC2757F07DFCC00AFDE,
	ComputeOps_CopyAndReshape_mEE0B6EC374685C93807C396AF1409EFF33DAFEAB,
	ComputeVarsWithSharedModel_Dispose_m5D2BBE680783BC4A79C1F564813B82656F469A77,
	ComputeVarsWithSharedModel_PrepareLayerInputTensors_m04EBB2C7A41D678FC5C1A30A4519DB5BC8673808,
	ComputeVarsWithSharedModel_CreateComputeBufferForModelTensors_mC07DC756269F7AA627B3F371F26145D6C9708A4C,
	ComputeVarsWithSharedModel__ctor_m4D02D73AC6B23A8047C1F8314468CC089F88B979,
	ComputeDebugUtils_LogAssertion_mAB156860C7E64192DBF8F7073210CED2A230EA96,
	ComputeDebugUtils_PrepareDispatch_m68F6449A3BF0A66AF06AAC06A3707D375D16F75D,
	ComputeDebugUtils_VerifyDispatch_m7BCE6F4EE6A75E3617EBF5B94142DFE8208A4994,
	ComputeDebugUtils__ctor_mC051DBB67A71983E2E054011BC04C6E99F16ECBF,
	ComputeDebugUtils__cctor_mF081A4EEE878FB5A643E767D0AAA10AE0E3690C6,
	PrecompiledComputeOps__ctor_mC56E59D8CAFA5D9E5892EC858D0FF8380081B5DD,
	PrecompiledComputeOps_NewComputeBuffer_m214FA1601004477BD4509882616942B9F796DE2C,
	PrecompiledComputeOps_ResetAllocator_mE0F13C92CD4EE05DFCA8BFFA8817F70C3A585158,
	PrecompiledComputeOps_CalcModelWithInputsHashCode_mB6301FCE8D0D0B418094C520842C88B75CF4F9C5,
	PrecompiledComputeOps_PrepareConv2dWinograd_m3CEE39C9826543494D60B6C1A60AC37412C5BCF6,
	PrecompiledComputeOps_PrepareConv2DTrans_mF3B43E9D6F34E387E5D8552DA57B1F9A5CD8799F,
	PrecompiledComputeOps_PrepareModel_m7EB4144173570CEEF39BC9CF440BFB92BE45AB14,
	PrecompiledComputeOps_PreExecuteLayer_m590B13AA470260A594C6521D61A1FD0EDE901E44,
	PrecompiledComputeOps_ApplyUnsupportedFusedActivationIfNeeded_m0FBF0B1F2C9AD87BCFF334F0ED27A674E798F98E,
	PrecompiledComputeOps_Dense_mF7D72F8C2CDF65671E01741AD179DE321703A928,
	PrecompiledComputeOps_Conv2D_mEC3C255D662B0AD1273283DFBF8E0B0D1F66F903,
	PrecompiledComputeOps_DepthwiseConv2D_mC50E14359340C568418CC57CB6C64A8B0E5F5808,
	PrecompiledComputeOps_Conv2DTrans_m53E5047C6F3EE197B04DB8570F53AD1DF22F1DC2,
	PrecompiledComputeOps_Upsample2D_m5B40AB7B31608A6D3D687CD00840AFDDE57C4800,
	PrecompiledComputeOps_Pool2D_m94A1D4A509F12A064EF2F6782ACACA3C6BA01087,
	PrecompiledComputeOps_ScaleBias_m37805BDE1B34E6BFE46E92D80FB8D4F2B8AAFCA3,
	PrecompiledComputeOps_GlobalPool2D_m7351B69E5A236BF2E122531D1F9D84C25C4DB258,
	PrecompiledComputeOps_GlobalMaxPool2D_mECDD3EEDC48E1AC5C280F105E096742973B726E0,
	PrecompiledComputeOps_GlobalAvgPool2D_mD9B8841FBFC288D4ADF9BE4ACA601575652F8F39,
	PrecompiledComputeOps_Normalization_mE557FA673D7E15522EBAA945DF597237A78F172A,
	PrecompiledComputeOps_Activation_mE65260DDB8C350B41A2F4F0EE9C15FF1862CE1A7,
	PrecompiledComputeOps_PRelu_m0895F1C0D74F8B8E4F2372467CAED4A5BCD81D18,
	PrecompiledComputeOps_Softmax_m50880BCEBEAB66A49B33DE128FEE58E6D007D496,
	PrecompiledComputeOps_LogSoftmax_m65661E652A0C86F0FE1815A49435489A9F45667D,
	PrecompiledComputeOps_ElementwiseWithBroadcast_mDAF8AD98E2F4D4D021A778B28E51975737293FF7,
	PrecompiledComputeOps_Concat_m71CF0A44690B14033C15054BB9F42CBD772CE962,
	PrecompiledComputeOps__cctor_mBA37D788C6AE25EE4938064755081914BE2772B2,
	ArrayTensorData_get_array_mC7E33CD7CC4CE51FD7F838BBB6464C286036A1B0,
	ArrayTensorData__ctor_m26F2CE1B62D06600F42B070382421C209C5B6B97,
	ArrayTensorData__ctor_mD459DDD0092186A16CFE054CDEFEA8B28A8D251D,
	ArrayTensorData_Finalize_m0D0783DCAF4148EE9FD2709619F28E6618CB69D4,
	ArrayTensorData_Dispose_m49854F30AE127674663F22B2872FFFEF383FC94D,
	ArrayTensorData_Reserve_mC3E6E4560EE1836FE0ABC552CB4CB34B62549B6E,
	ArrayTensorData_Upload_m1D3D3C087972ADCF969F0D8F3503499BE7ECE086,
	ArrayTensorData_ScheduleAsyncDownload_m30955CCA5931829F9243935E920AF3E9317DBB1D,
	ArrayTensorData_Download_m32AAB66E30558E64652508266691F548C6A14527,
	ArrayTensorData_SharedAccess_m6ECE0678F3465CF8525C3A171E19ACA894F3AE90,
	ArrayTensorData_get_maxCapacity_mD6056D4ADB081560E6AC26CC0F6B8050ADB07402,
	ArrayTensorData_ToString_mA843D84D08221E72F46B6E0B2B6458122A3DD246,
	SharedArrayTensorData_get_array_m9826E77F2C473A308A7CA3FC9AA621E56F6F81A1,
	SharedArrayTensorData_get_offset_mD4D019A7F920995D9BFBDFC1557FA007803E3075,
	SharedArrayTensorData_get_count_mD77136925B2914EEEEAB341C4F9D81E0D189F93F,
	SharedArrayTensorData__ctor_m9B024F2C116B626D25DD34CF25AF54F6D6F6AF1E,
	SharedArrayTensorData_Finalize_m11A394F2B3FE7512F6A40D71393CB38E43B5569D,
	SharedArrayTensorData_Dispose_m8D81F40D46C75C8003B5A5E1102B64E2E290ACC7,
	SharedArrayTensorData_Reserve_mB3832EB7A2BCAC1F2A5EE0F39D3321E554D23614,
	SharedArrayTensorData_Upload_m52C62773E80E1A067C8906725D58AA760511F143,
	SharedArrayTensorData_ScheduleAsyncDownload_mB358F900C215C24A2B17C1A82CA3EF84446F0334,
	SharedArrayTensorData_Download_m9474C0D9D5BAE2B17C0693A47D6FAED0B4523C12,
	SharedArrayTensorData_SharedAccess_m41E54B48B5D1770AB1DA6ABA52705C176BF9CD0A,
	SharedArrayTensorData_get_maxCapacity_mAB01642C4B4EDCEB4FD3DC041937A03BD5D1CEA8,
	SharedArrayTensorData_ToString_mE3FF29791038CC39CF303881C754536F8890532F,
	ReferenceCPUOps__ctor_mDED5F7AA231CEAF511858350E4A8688812D50BDD,
	ReferenceCPUOps_NewTensor_mD7656D2E79CF717CEBA48C842C3738733A619935,
	ReferenceCPUOps_NewTensorLike_m7FA52D13E8190E349EC54D8D5CB99F537AA50D7C,
	ReferenceCPUOps_NewTensorLike_mB99AB487F6F052CF391B67D9A2E3132FA7E9FFFE,
	ReferenceCPUOps_NewTensor_mA865C46B6080FBFB58B467F6523FE713169D65CC,
	ReferenceCPUOps_NewTensor_m21C3A1D1B6C4DDF0FD60792C7C0427DB884D8616,
	ReferenceCPUOps_ResetAllocator_m9B186837A4DA22DE9ACB57EDAD0FDF11D80983AF,
	ReferenceCPUOps_ApplyFusedActivation_m4F34FC909E70FADCB4703275AC5382501518CA4A,
	ReferenceCPUOps_MatMul_m4AB165D081A32AAE813F8D6BBB8929401736A525,
	ReferenceCPUOps_Dense_mA2ECE29DB304E345130856388AA299CA576F356B,
	ReferenceCPUOps_Conv2D_m393B24C23F49584058D8F43BC2BD642EDEB77495,
	ReferenceCPUOps_DepthwiseConv2D_mF0E5FD6E9D5A315E7A9164B0A0480BDABFFF63BF,
	ReferenceCPUOps_Conv2DTrans_mD62AA31FFCB5BBC0C19A6BCCAE21CBBD30AB2EA1,
	ReferenceCPUOps_Upsample2D_m2230889FA4FFCA91D663AF929502CF4BD2280EAD,
	ReferenceCPUOps_Resample2D_m9D6E2F299A0000F47C6CB5B3EFF868ECF0511A13,
	ReferenceCPUOps_DepthToSpace_mFC3BF551F86E3CDC96BDECFF6DB0ADE057BB9A58,
	ReferenceCPUOps_SpaceToDepth_m6E66E9E355356F2A898711E68FF945BE7968873C,
	ReferenceCPUOps_MaxPool2D_m8A36F329E683A53280ACE568E5AFB287A59661C6,
	ReferenceCPUOps_AvgPool2D_m340D78472E72ED444A7AB3B7807626235D1D9CB3,
	ReferenceCPUOps_GlobalMaxPool2D_mD10B29256AF017087ADF945C8C79CDC308C824E3,
	ReferenceCPUOps_GlobalAvgPool2D_mC3D5C0F2F33FD425B44D0C1200C02136C915F2E5,
	ReferenceCPUOps_GlobalAvgVariancePool2D_m0D8C08D284485E37F183B857F749F0AD4FB3EBA6,
	ReferenceCPUOps_ApplyPadding_mC9D6503E70EFFEF088FDBC84604ED9453C49C752,
	ReferenceCPUOps_Border2D_m86A45856DF40D893B59D150C289CE602ADDA6C92,
	ReferenceCPUOps_ClampHWToTensorShape_m9AE438AE47A0DC999595875497D94749AE7AD3E5,
	ReferenceCPUOps_Pad2DReflect_mD1E525BFD75D96060003912E1C9726655B4DE920,
	ReferenceCPUOps_Pad2DSymmetric_m9BD79B8831AB12935DA3152086B2AC697F87500C,
	ReferenceCPUOps_Pad2DEdge_m2561E95442FF5D83590E5205DFDD3B5AC627A4E9,
	ReferenceCPUOps_ScaleBias_mDF8516E29B802A5577444C00A6148F52FE839714,
	ReferenceCPUOps_LRN_mBEF5EDD8B97B2C73C0342598D513A3FED84150F2,
	ReferenceCPUOps_Normalization_m761C1C9C26FC5ADADCD85E11151CF919AD238571,
	ReferenceCPUOps_Bernoulli_m5C3C551DD398042502EB2A43B8D7E55AE0842824,
	ReferenceCPUOps_Gaussian_m0328A96B5F013FB9003F3CBC8171F041E4566AB7,
	ReferenceCPUOps_Dropout_m42BB9322F5893516F3E61FEA4F0D5F6BB9C582D7,
	ReferenceCPUOps_RandomNormal_m5EF7FC4FE3B81B7E410BC0DBD496BEE8A8CD7344,
	ReferenceCPUOps_RandomUniform_mCC344873698E1860155AF1D1FA5701F1526E1C84,
	ReferenceCPUOps_Multinomial_m0AE2DE3734A4256FB68E2A0FCEEBCA2DB3E603C9,
	ReferenceCPUOps_OneHot_m365382600BAD0429B0A73A34546BED5396D90BD1,
	ReferenceCPUOps_Relu_m1B249F0E16CA78A050882B396BF53C9B523A3CCC,
	ReferenceCPUOps_PRelu_m5EE37BD2730D4FC8C24E2CCD19D3CFFC1C953AAB,
	ReferenceCPUOps_Softmax_m981C78FEC4F1ECBFC491B24EDE35A1780C2ABCA5,
	ReferenceCPUOps_LogSoftmax_m0F926709A84D05E1F5DA0E0258A4010F1E37C3C7,
	ReferenceCPUOps_Tanh_m0E3D3BC632D057CA4BF2AB54B8606384BC31F3D4,
	ReferenceCPUOps_Sigmoid_mEA6B56371E2185000BBC7FB02B0CF820283F92A8,
	ReferenceCPUOps_Relu6_mA663A8AEF2539825523B363A4B5ED7F2FDFB7233,
	ReferenceCPUOps_Elu_mA6B4F067C23BDD13E23CDDE24A4C740778DBFCDF,
	ReferenceCPUOps_LeakyRelu_m3A40B751B75C2AB4F8B257B2A97D2F2D6D104D8B,
	ReferenceCPUOps_Selu_mDDCC2EF76CB44C47EC27CB211A456EA25BE2F8A5,
	ReferenceCPUOps_Swish_m6F97D768E9EB15E6FDBF3B81635A64D690CB8B6B,
	ReferenceCPUOps_Abs_m26ECCFCC646208556673FC86E829767E10D01E87,
	ReferenceCPUOps_Neg_m4AAB714EAFFF073B2E1CAA9E29192713580FFEF0,
	ReferenceCPUOps_Ceil_m86AC10E45AE9A2B6FF318BA05AAD084BEBB15A3A,
	ReferenceCPUOps_Clip_mB81D8540391725290204748B21EAE9D3614B43B1,
	ReferenceCPUOps_Floor_mA38DF60B414F32FE7A97E6D6AEAF3E1537ED43F1,
	ReferenceCPUOps_Reciprocal_m89BA74EA040F706D755A0555FC0BAA6D6E6B1F21,
	ReferenceCPUOps_Pow_mF72DFDBA0E7528F12FA3BA998D39C80BB489899C,
	ReferenceCPUOps_Exp_m2F7D01C7CACB0A1156932D2B8265F7C7A36904D6,
	ReferenceCPUOps_Log_m6F9799E0B6A88E7E31D59F37A2C58078BDFE3B3E,
	ReferenceCPUOps_Sqrt_m9B63751ADEF858D647AA8A18C57F4CFD6B47F8A1,
	ReferenceCPUOps_Concat_mCBAF52A099939FD62181B253AFC26E124237F30F,
	ReferenceCPUOps_StridedSlice_mC9B924A5BA6CA09BE321E2CDBF6FC3745E7B331D,
	ReferenceCPUOps_Tile_m29A8BE6C998528C9F6FD96CAFA0BD7BE6319A4B2,
	ReferenceCPUOps_ApplyElementwiseWithBroadcast_mA4F3D95F3C7A950607B6B197817BFA6D80F85818,
	ReferenceCPUOps_Add_m1E9052AF4F8530A35678AA0DB1EF8ACFF747F8F2,
	ReferenceCPUOps_Sub_mF07425D895BF8E9967A9F3DDC9E351F87A0FD34E,
	ReferenceCPUOps_Mul_mFE522B0ABBE8CF3BC8EE0035FA91644F0A341E6A,
	ReferenceCPUOps_Div_m9EDFAF2D1053BCE0A62207FC38B171D6AB550BBE,
	ReferenceCPUOps_Pow_m7208A85DA4A279E9606560D2A568702FE22B79F2,
	ReferenceCPUOps_Min_mA066A6F62C02E48F8BEFBEA272FE5BA2064CF481,
	ReferenceCPUOps_Max_mCD5E708035AA2F379ACF937BA47FF695E75C153F,
	ReferenceCPUOps_Mean_mB7D92ED943E097F7A798624191F5CF5664BAA779,
	ReferenceCPUOps_ReduceMin_m8950021E5667DE656A5C09615771F60F691B6782,
	ReferenceCPUOps_ReduceMax_m1087391D9CDBA05E6CE0548F90425B49417ADF23,
	ReferenceCPUOps_ReduceSum_m851432E3528092E8D3A4A022A84E4DAD8238696E,
	ReferenceCPUOps_ReduceMean_m8C0323AF535C6A1454A642B92C99243D01A66008,
	ReferenceCPUOps_ReduceProd_m8A71867C686235ABA941B0DE896B4BA411360343,
	ReferenceCPUOps_ApplyLogicalOperator_mDDC265A4F88C062D020E48B05674A691DCAFD213,
	ReferenceCPUOps_Greater_mE97F7534B06479DBAE406DF01DD45CACCA44381A,
	ReferenceCPUOps_GreaterEqual_mEE536A8AB0E1A6772603E270AF142A2A17BA202E,
	ReferenceCPUOps_Less_mEC805D3B8F0C07C0681AEF2BB161E15DB9F63227,
	ReferenceCPUOps_LessEqual_mE918BEA7037B0C46D4202536B126BC648557EABF,
	ReferenceCPUOps_Equal_mDA18D422CCF2695A0B4B331C138328BD0D335EEF,
	ReferenceCPUOps_LogicalOr_m511FB1666245CDA6A121F7AD41E373F53B30110B,
	ReferenceCPUOps_LogicalAnd_m1E9FD697994DDC65B5EF77BDFC26CAD1E36060F1,
	ReferenceCPUOps_LogicalXor_m3EDE157703B28AC1D406ED4412B2730222C93D07,
	ReferenceCPUOps_LogicalNot_m60E496E11A94692BF930B2227C06F9F9D1DA4353,
	ReferenceCPUOps_CopyAndReshape_mEF731E00A059440327E9D656934D5409D2716C0F,
	ReferenceCPUOps_Copy_mC9AD142CAA7E9A55E397A7C82A19DFA99AF76123,
	ReferenceCPUOps_Flatten_m50C89D44429F337E7ABF4F407A1C1A147B37367B,
	ReferenceCPUOps_Reshape_mD4922D975D916F5610DBDBC0BE30D4A60ED13FF9,
	ReferenceCPUOps_Expand_m86B3A0B5BCC34FE3CAF076F2604663B7B82150D4,
	ReferenceCPUOps_Gather_m0C9D5CC094348BB7D83CC8625CF11ED4BE789506,
	ReferenceCPUOps_Transpose_m114B17F683513133FD4F919D55748989805D5C74,
	ReferenceCPUOps_Prepare_m52CBC2A1FA8D6CE4DF9C9593C5E6ED0E67E54FA0,
	MathfEx_Tanh_m9E58298C2886197F40D9F686296F622D1F5E9BE5,
	MathfEx__ctor_mA675FDE26870ED17CD449AABF09A7D104843F343,
	ComputeHelper_IDivC_m24D4EA77786854563D5D641A90F2FD43EBB18B46,
	ComputeTensorData_get_buffer_m1BF545D5C9FD799BCCB813B9BD1A282D3F72DDE9,
	ComputeTensorData_get_offset_mCF4305393F8F6BD92BAA1449DF1039E22ECACFB4,
	ComputeTensorData__ctor_m14021963F04BE0F36647A54EF3A13A2CD8BEE87C,
	ComputeTensorData__ctor_m1AC7410D234B937F92D3F1F3502099116A79ADF6,
	ComputeTensorData_Finalize_m71DBF07D7B110DDC2081994D7EC02B40D815C89E,
	ComputeTensorData_Dispose_m7F1C60F07A4D015138A732001546847FE0AB8A42,
	ComputeTensorData_Reserve_mB479BAC9EDA29C8039FD2BB2565A52ADBE0DF735,
	ComputeTensorData_Upload_m059D4694E758A296BFACBD669D3240A097B67153,
	ComputeTensorData_ScheduleAsyncDownload_mB16566B5D3FD4CEA58F21F557AD5DA467BF888A3,
	ComputeTensorData_WaitFor3Frames_mBC6DF51AA8DCC9E42338596BAD13FFB65DED40A3,
	ComputeTensorData_WaitForAsyncReadback_m8B7E37BF468DED8A6FAEA48C0E2CDE64062E331E,
	ComputeTensorData_ConvertFromOnDeviceFormat_m3E5E18530180DC76906B9F56599F751D49D83165,
	ComputeTensorData_Download_m0A1BFC024A0047F9FDA41AB59004FFC2A3FB49A5,
	ComputeTensorData_SharedAccess_m0D0C5BAB1F4C0D1905664B5176DCDA8FBA76AB75,
	ComputeTensorData_get_maxCapacity_m03860856AA3932F7C1414D51B519EA82E126C381,
	ComputeTensorData_ToString_m1501408FBE9F5664C26D2F2DF6E3B5BB78076747,
	SharedComputeTensorData__ctor_mB7E6FBE8E6E0BB35DA88085B63447A1244F8BD3E,
	TextureFormatUtils_IsRedOnly_m9E7AC73B0967582CDE8C10AA9BDCB2C15F51BBDD,
	TextureFormatUtils_IsRedOnly_mE3BB3206E195DF2C91218DA1F90EA32C4E5AD086,
	TextureFormatUtils_IsRedGreen_m46C100B79031360C7771A008BA9CC67DD1FF1A13,
	TextureFormatUtils_IsRedGreen_m56C218A4E59323D86DCE583EE1B816241B440558,
	TextureFormatUtils_IsRedGreenBlue_m3BC13571F661F160D3A98EEC55E59ABAB1259FAA,
	TextureFormatUtils_IsRedGreenBlue_mC0492D242C2F648F4A163799EFA6FD32348B7464,
	TextureFormatUtils_IsAlphaOnly_mDD3F0A9A5DD089CD0165CDB8AD6482CFF2DCE070,
	TextureFormatUtils_IsRedOnly_mAD5EC1DE395E82993F11C4D4C95379A5BC7E5C50,
	TextureFormatUtils_IsRedGreen_m596DA0E460B1AD0359336783F8094F04E34455C5,
	TextureFormatUtils_IsRedGreenBlue_m4FC0F64F1C6FAEC958D0DBD28B58C2CE215E2024,
	TextureFormatUtils_FormatToChannelCount_mD8FAB4D79401A44E21F01597C3C27BB232248733,
	TextureFormatUtils_FormatToChannelMask_mDAF3CC7028443E16D7BD743B84FCD0BBF958EDA9,
	TextureFormatUtils_FormatToChannelMask_m798E2DA10BCCE4D77E23992D6BA8C74FB5FBED36,
	TextureFormatUtils__ctor_m4CC13E94FC6B299934C450EB3F9C785546A3D76B,
	TextureAsTensorData_get_shape_m471A006F9FFCE9301E7705C2D0D8DA13D1B1DFF8,
	TextureAsTensorData_get_textures_mF857E0DDC20CB9048F36DF56649528DC3A2FD6A8,
	TextureAsTensorData_get_interpretPixelAsChannels_m2959DEFBA74FF0A099EB2DB029A0918D9EEDC071,
	TextureAsTensorData_get_interpretDepthAs_m28FA6F2D82E55E552BA668E957C3841CCFD0E24D,
	TextureAsTensorData_get_interpretColorAs_m975947AEA2BCA5A8B13FBF0651C95F327A980D9E,
	TextureAsTensorData_get_flip_mE1B46F32F8E93B9C3CB180FDC0EAAF9810BCF2EC,
	TextureAsTensorData__ctor_m72EA6585C714E932A5C154CAA8528DC492CEEAD6,
	TextureAsTensorData__ctor_m0FF79FECC30149DE25037EB7EEDA71002DE3A7A1,
	TextureAsTensorData_Reserve_m3347B326685D244AC94FCAF27720262D2C994829,
	TextureAsTensorData_Upload_mDA1A54D809D2AD045CB4275B83218ED5243EDE6F,
	TextureAsTensorData_ScheduleAsyncDownload_m296B57106B2CD2DD821179C174EF15C5BA0D0A47,
	TextureAsTensorData_Download_m5BE89DB83F92F06DAC17304F14CE47D649ABD9D8,
	TextureAsTensorData_SharedAccess_mFCED7C43363627C82E62687A61FFF1C0EB1EC5CF,
	TextureAsTensorData_get_maxCapacity_mD97EE265857DAD3F0FCCE8327394B25ED84E226E,
	TextureAsTensorData_Dispose_m76388D83B21D94FAF330BB3DF20D3ECB75BBBDA1,
	ReferenceComputeOps__ctor_mE141EC9A145B1F2DEC522C199C6D0BAB07B929F9,
	ReferenceComputeOps_Pin_m442ADE184DAE77ED7A9468DBE98AECC5EFF9A6EF,
	ReferenceComputeOps_SetTensor_mB3320EDEE1DEE9E062B5D532625DF09DB47B45DA,
	ReferenceComputeOps_NewTensor_m4C60CAD5BC3374A2F26495D685B74DB4D7A2BDE5,
	ReferenceComputeOps_Dispatch_mEA5DE58324C18E9FC45826F19D89E2B57774CCFF,
	ReferenceComputeOps_TextureToTensorData_m3B24AC9D6E0A1DE4564E762EF8ABFCE3969A5AC5,
	ReferenceComputeOps_TensorToRenderTexture_mAFBCCAB723EEAF1872B059D4BEF4E8053997AACC,
	ReferenceComputeOps_ShouldFlattenInputForDenseLayer_mC9CA550D450079098739DF83886533ABA95DA727,
	ReferenceComputeOps_IsFusedActivationSupported_m32C00F501698DABD69F467D115BCEB455B21BA62,
	ReferenceComputeOps_MatMul_m20E8C058742EEE4CA3A7C9E84AD3917E92AEDEAE,
	ReferenceComputeOps_Dense_mAD117042C36BD654489419E9F40E73641FF47C0D,
	ReferenceComputeOps_Conv2DWinograd_m4964E74CD9F0B22DE47B41B4B651A12B684D20CB,
	ReferenceComputeOps_Conv2D_mEC15739D76F5B22E754EDA40F5F0B9948D93ADFA,
	ReferenceComputeOps_DepthwiseConv2D_m4AFBF458B56217657C6548CE91C6D837710061FC,
	ReferenceComputeOps_Conv2DTrans_mDAAC2DD24AD90D8365112CAFA3911D5A699447B5,
	ReferenceComputeOps_Upsample2D_mFF53F5896E90F854303A3B31FC4E06173B7DA4A3,
	ReferenceComputeOps_Resample2D_m13DF819DCD7F872CFD0E5F0A3389854EFC92DB08,
	ReferenceComputeOps_DepthToSpace_mE18FCCE1284EA8D021FF6934C3F8C42F90212B83,
	ReferenceComputeOps_SpaceToDepth_m07BB81F88A6DE6CE77ECEAA2B20C04873AEB9E51,
	ReferenceComputeOps_Pool2D_m8B116BD2380D52D87C964ECF67D569ABC9A8033E,
	ReferenceComputeOps_MaxPool2D_m7B511F9DB383A13F20B949C60F8FDDB39899F6A1,
	ReferenceComputeOps_AvgPool2D_m0C061979D3E2DB77BCC454E394A5396BAA9B53E9,
	ReferenceComputeOps_GlobalPool2D_m5FF4B41F3541E5B3BE3A510EA35E9B05CEF807DB,
	ReferenceComputeOps_GlobalMaxPool2D_m4FEA9939FBEC8CEE28CBD4657D945328C3F7F0D7,
	ReferenceComputeOps_GlobalAvgPool2D_m7665CB9C3E9A495BEF0C8D6ED7360607037BFDA6,
	ReferenceComputeOps_GlobalAvgVariancePool2D_m095C953A94CAD779E2832DD6CF19AEF2ADBB7A46,
	ReferenceComputeOps_ApplyPadding_m529F525E6E0A39191305324DA251B5816E0E5CE4,
	ReferenceComputeOps_Border2D_m83B13160F6FB38876B867A30C8AA8EF0AC8756F1,
	ReferenceComputeOps_Pad2DReflect_m969A48E5B15AA5D18F0824E0B6CD5CCEC1F016A5,
	ReferenceComputeOps_Pad2DSymmetric_mDE3E2DFDF1D16A7B060767D1641595BD9B23000A,
	ReferenceComputeOps_Pad2DEdge_m1E9E70ADF1EE536EEAC16497A1C044F5C9E8534E,
	ReferenceComputeOps_ScaleBias_mC225ABFB458D559938F24B0BC581339E1AC99E1F,
	ReferenceComputeOps_Normalization_m55C9687C29CE4D7C502DD8A8C3F51D28DC6379C2,
	ReferenceComputeOps_LRN_mAA78D45E79C54BEBCA1939F6B335CF50A1C1F04D,
	ReferenceComputeOps_Dropout_m586960BA9E70B8AE34DAB8D613BEBAAF80F97429,
	ReferenceComputeOps_Activation_m3DCCBA6732AD9CFE04F59D53BE7600C4C0AABFAC,
	ReferenceComputeOps_Relu_m7038D19315DF072010658A5BFBE09508179BA5D1,
	ReferenceComputeOps_PRelu_m91D6E5DFD9F0039DC6E2F8D948FD664DA9DBBFBE,
	ReferenceComputeOps_Softmax_m8C2615C8CC8B683CC14FC7CDAE1F3A71D618290C,
	ReferenceComputeOps_LogSoftmax_mB8646036CE376BD2CC61031431933F9FE76B5CE7,
	ReferenceComputeOps_Tanh_mCBA85DCAC3AA697F3E03C717D8312ADD381BF14C,
	ReferenceComputeOps_Sigmoid_m33872252DD99BB523533D8299063E15F317C209A,
	ReferenceComputeOps_Relu6_m1280F50F46F81A0E6DA081816ED5DC8B9D2E1053,
	ReferenceComputeOps_Elu_m9055A2C7D72B1AA12DF08135F43E0F959422785C,
	ReferenceComputeOps_LeakyRelu_m479FA0B829F19FE1359CF1266164AC3A4E1FB432,
	ReferenceComputeOps_Selu_mAC1D382DD0CCE3D15BA8ED7EBF3A84D7A1A686F3,
	ReferenceComputeOps_Swish_m5F046E5613F428C0993BF43D6C2EDA0F6C0F41BE,
	ReferenceComputeOps_Abs_m815D4653341F0EE4EF07BBEF4478064F1D75E59F,
	ReferenceComputeOps_Neg_mA2144CD26A5E4AE8865BF765A4F4C555546A3A1A,
	ReferenceComputeOps_Ceil_m5CF724FDE8A6C9B664480D5F684FFAC59F2B1A4E,
	ReferenceComputeOps_Clip_m2124D9750022DE57C1D3A366B06B36B386F4699C,
	ReferenceComputeOps_Floor_mE7A9E23BC33C50F2EDE278B3840B18BA153E8269,
	ReferenceComputeOps_Reciprocal_m0FE39FA2F8339EAB66DCBDD9E08484658EA6FB0A,
	ReferenceComputeOps_Pow_m5C84C59597BAB41A17B0C30078BF24C70B14C779,
	ReferenceComputeOps_Exp_m50A2B29E91632DA85B7988F9C2BD850CBB8175B4,
	ReferenceComputeOps_Log_m97AE9B40ACD640C4DE1803014A3B3339CF579DA0,
	ReferenceComputeOps_Sqrt_m03C0FB81B46458C46470C0B004FAF2650692DDA5,
	ReferenceComputeOps_Expand_m903A4838318BC561DA7AE6F83FDA091223B083CC,
	ReferenceComputeOps_ElementwiseWithBroadcast_mE6EB8E90AEE624292D4555CA11E4BF907D5650D1,
	ReferenceComputeOps_Add_mEE1664106457EC7A587352C9FD952F24F44C427F,
	ReferenceComputeOps_Sub_m50CBA16D7E08EB4AA3D61295804AB46D80DFBCC9,
	ReferenceComputeOps_Mul_m10F019A59AB8928CB39FB28AC419CCBDCFCDD7EB,
	ReferenceComputeOps_Div_mDBADF50D55D4701ECE0F5ABC42034E9D33F46A36,
	ReferenceComputeOps_Pow_mF2D9A97DF6F25DBB3A59DAFE5A15451AB999FDCA,
	ReferenceComputeOps_Min_mD4357385B0528A861F8D8AAB550103ACD53801CA,
	ReferenceComputeOps_Max_mB51331DCC589FB251D3DF65CEEA28ABEAD97D63C,
	ReferenceComputeOps_Mean_mC3524DDA765CAE76108C15C1E26897D931978658,
	ReferenceComputeOps_Reduce_m2E81C52205A979DDE597F84FC0A23EE0C1D4AB7C,
	ReferenceComputeOps_ReduceMin_mBFBB32163F601BE829E0D54B784A77EC12E32481,
	ReferenceComputeOps_ReduceMax_mF68AF4A859959A699466A30997BB3F6BBA1FF4E6,
	ReferenceComputeOps_ReduceSum_m4B1938C24CA927E2D516C95CBAF7C9C6F45AB185,
	ReferenceComputeOps_ReduceMean_m17AC85B09E51B4CED2680A4B36009CF564F0B08C,
	ReferenceComputeOps_ReduceProd_mBE924F01F5478B786B3F80587A5E608D367727DF,
	ReferenceComputeOps_Greater_mB323FB85F32853E759AB45B2931744678F70D5F0,
	ReferenceComputeOps_GreaterEqual_m608CE30163ADCE102E115C7EC6F81E1C891CA709,
	ReferenceComputeOps_Less_m6A4CBA3AF1715ABBCA315AD6F7EFEBFBE8D52A30,
	ReferenceComputeOps_LessEqual_mFC50E86466AC294C489776DB933ABE96E1905CEC,
	ReferenceComputeOps_Equal_m03F7C794B79D22F7EFFA617EC9DCC9D468043470,
	ReferenceComputeOps_LogicalOr_mE3C131C6304ECAA5CCF64D8669A9FCF1D02ECE40,
	ReferenceComputeOps_LogicalAnd_mDE454F41A9A86233825B227E9829430553F8A188,
	ReferenceComputeOps_LogicalXor_mCA7577FA92735C8BEA9FD9E1C481C05BC63C6F0D,
	ReferenceComputeOps_LogicalNot_m33A7CD24653C6C852D1793A2A6A5084BDDAC0D4A,
	ReferenceComputeOps_CopyAndReshape_NCHW_mCB59B233CD09677FA5E0FCA1AB6920D57D58EA75,
	ReferenceComputeOps_CopyAndReshape_m5B97CEE685283E55DB3B9E407AE473870C68AA9C,
	ReferenceComputeOps_Flatten_m22625B7B836F0749D8070F5E5A49F6484B2D3E9B,
	ReferenceComputeOps_Reshape_m4DB7773EDDEB4A5A0DA4A31D9242B671F4696173,
	ReferenceComputeOps_Transpose_m2EF9F55C919FE2317CF763783CB009EA25CB2F20,
	ReferenceComputeOps_Concat_m0B165543DC18995A1D74E689ED3EBF78A4C3B26B,
	ReferenceComputeOps_StridedSlice_m4833B8C96C8B24D45467CA367507D76D82404752,
	ReferenceComputeOps_Tile_mD4A326B8F649DF260A7590A3E625471EDF44732D,
	ReferenceComputeOps_Gather_m1D6CBB00E457427F7C0ED826303D95A39B0BA4E9,
	ReferenceComputeOps_Copy_mF0FD6D7D6CD87E1C4792219C6B4D9AD564454A99,
	ReferenceComputeOps_Prepare_m517D6913E445FC6351A72148D6D47C6BF58CCF98,
	ReferenceComputeOps__cctor_mA82934BC2292DE0CE4D30B0CE31EF85E53CCB6C6,
	ComputeFunc_get_threadGroupSize_m7C67B8A531AFB668137D1ECD397258A779275B9F_AdjustorThunk,
	ComputeFunc_get_width_m079CF1A154715AF69CB62DE84CA03F97E3AD4C68_AdjustorThunk,
	ComputeFunc_get_height_m4584433AD10BBFBA76C0B3B90F650ECF9ADF5FDC_AdjustorThunk,
	ComputeFunc_get_depth_m9574BAFF883556DE9B8F1EF3A146E8D2EF66F2B2_AdjustorThunk,
	ComputeFunc_GetTensorDecl_m38B63770547DAF5B2722473F6EF69A99C9F9675D,
	ComputeFunc_GetTensorData_m389284001165CF46F6ECF23C5296E4A8F46D25F0,
	ComputeFunc_get_dummyTexture2D_mCBF4032B7DEE37282581A4CC14BAF954FE379227,
	ComputeFunc_get_dummyTexture3D_m870D28595C0E154EA6CC70CB53DE096A18225E2F,
	ComputeFunc_get_dummyTexture2DArray_m7F03FF96C090BEA56930B2465D373238310251E6,
	ComputeFunc__ctor_m03931C58FEC95647033591D97E21A2D4846EC979_AdjustorThunk,
	ComputeFunc__ctor_mBC158C11B0B13AD6ADA63F6EF91841980CE6D00D_AdjustorThunk,
	ComputeFunc__ctor_m96A5C9F347BF9BD463DF73D1388966B4A4476258_AdjustorThunk,
	ComputeFunc__ctor_mD90798FAA166BF0BD465A176871A4C0CBE9DC333_AdjustorThunk,
	ComputeFunc_SetTensor_m2D0709A7F3C23726941BF242CFB30F21778A8D0F_AdjustorThunk,
	ComputeFunc_SetTensor_m41A92A85C8B82323F96831DC5067833C2AA87112_AdjustorThunk,
	ComputeFunc_SetTensor_m72D943E64E0EE744D717AC0C5F1D37A116AA50C7_AdjustorThunk,
	ComputeFunc_SetTensorDecl_m4A0D257422AC30CB5F0DB8D66CC86434B46B8A17_AdjustorThunk,
	ComputeFunc_SetTensorDecl_m10B14DEA6E3B163C48AA990945596F9B549344D5_AdjustorThunk,
	ComputeFunc_SetTensorBuffer_m5712805048428B611703ECFF473BF4A99F65E18F_AdjustorThunk,
	ComputeFunc_SetTensorBuffer_mE191AA455F31A474C7249BB9F03F2411460D2603_AdjustorThunk,
	ComputeFunc_SetTexture_mBF5D8DAC5F926995A2AC0C742110059C591BE5AF_AdjustorThunk,
	ComputeFunc_Dispatch_mFBDA7A3D30B19A2D3CCF244B70DB3603B2E4F1F9_AdjustorThunk,
	ComputeFunc_Dispatch_m83B92052AC2D22080E28376D07FBD2C21442D447_AdjustorThunk,
	ComputeFunc_IntDivCeil_m7EAF3BD457C26DDC2E8EF7C416CF4433361A24E0,
	ComputeFunc_FindBestKernelMatchingDimensions_mB83177D010EAE3ACDF17112759CC72BF1259F43B,
	ComputeFunc__cctor_m60CD734497968CE576CC43DEC3F4E35661BF06DF,
	UnsafeArrayTensorData__ctor_m3BB9EEE584A23CFC3867E2B1CB5D55F9701F4B70,
	UnsafeArrayTensorData__ctor_m15650C4E26A3D05E6BC52D633FEAF755B0EC0C32,
	UnsafeArrayTensorData__ctor_mB852FA17156C624C6954ED2A7CE9F9AAE3FDC2AD,
	UnsafeArrayTensorData__ctor_mE674D6984A6AFF90E4553C0E779F396804EEAED0,
	UnsafeArrayTensorData__ctor_mA812D510F417E7A33DCF09420E11C78453479634,
	UnsafeArrayTensorData_Finalize_m6A0A87D06ABFF2A7E6E9ABD4D497C5CCFA4B8DC1,
	UnsafeArrayTensorData_Dispose_m73C88EF3BB3CEB3B39E05CBB43BC71396AD13890,
	UnsafeArrayTensorData_Reserve_m1FD0D070FA2F2A4A8342FAA68B6CA2CB8EAAB3EE,
	UnsafeArrayTensorData_Upload_m49FEACFC9A0A551C0C81FCBC595F0534C9A0610F,
	UnsafeArrayTensorData_Download_mC33B68C64A99BCC42FFB044312B6DDBA99A27DF1,
	UnsafeArrayTensorData_ToString_mC78CA198723099E9039B56025839496E1326DEE7,
	UnsafeArrayCPUOps_get_blas_m17D0BF9F39B0964DFDBA3BEF3119EC27DD1F857D,
	UnsafeArrayCPUOps__ctor_m4D480F2704EC36539F08603459089831384796C0,
	UnsafeArrayCPUOps_Pin_m0EEA6990A7DC5BC461B2A4435E0956021E9FF1C7,
	UnsafeArrayCPUOps_Parallel_For_m0E1EF7A317E33DDB88381A47F3321DAF4F795641,
	UnsafeArrayCPUOps_Neg_m8A33F794F7BC3CEFFCF912DF57857087473217CD,
	UnsafeArrayCPUOps_NegInnerLoop_m67E39309AFC6490DBACFBB5E4CB01010EB284FDF,
	UnsafeArrayCPUOps_Relu_m078A57FD041918536EB47EEE36A71693E87C8C10,
	UnsafeArrayCPUOps_ReluInnerLoop_m57A02AC7B9BFB31D6B9AEA3D4E8EFA2BBC7A662D,
	UnsafeArrayCPUOps_Relu6_m88B1245A4C5E47E1DAD34BE2F793BD9A63780CF3,
	UnsafeArrayCPUOps_Relu6InnerLoop_mDC68E83D453140EBD4B51C689B401E2B07E9A7E8,
	UnsafeArrayCPUOps_LeakyRelu_mAF86932BE9D7840D6B7CFAEF8491A810F3094280,
	UnsafeArrayCPUOps_LeakyReluInnerLoop_m2236838DAA01D09DB7EAC34FC07E1F7FA97737C4,
	UnsafeArrayCPUOps_Elu_m607C7DD5BDD92DE68A5F62E2272AB44A4CF10BFA,
	UnsafeArrayCPUOps_EluInnerLoop_m4D066C117489C4D7464EE720A2DF9C10CC44AF2F,
	UnsafeArrayCPUOps_PRelu_m4485A96794697F6C90E629CDEDCF42E7CF66AB3F,
	UnsafeArrayCPUOps_PReluInnerLoop_m368573BC3BEB03DF9394D36098936D86ABEA954A,
	UnsafeArrayCPUOps_Sigmoid_m4316095CDF7672B669E410505C11380569AAF78E,
	UnsafeArrayCPUOps_SigmoidInnerLoop_mC885EA416A4654B772FF14E846B407C689DBA2B5,
	UnsafeArrayCPUOps_Swish_mF14AEEB8D538254D4C6B2734D7C139C47D12C8C8,
	UnsafeArrayCPUOps_SwishInnerLoop_mD7F3D54520C8473A0CDC93F3FFFFCD778482A601,
	UnsafeArrayCPUOps_Exp_mCEC24ECBC1CA0BEA12014B61168A198E3FE51C9E,
	UnsafeArrayCPUOps_ExpInnerLoop_m1EBFD75ACDFBE481BE6B047634285F5FD9F6E8A8,
	UnsafeArrayCPUOps_Sqrt_m385BFE0120D9377277E10BFEF515EF6B365D45A4,
	UnsafeArrayCPUOps_SqrtInnerLoop_m362C352A58F28E17F860B0F364B9DD67EFF20FB9,
	UnsafeArrayCPUOps_Tanh_m55E6263447605CB6ED7AB2A2F9A3496C1D9303B8,
	UnsafeArrayCPUOps_TanhInnerLoop_m0E1845FE1FFC52482E46563875D1E5BE9F6DA8D4,
	UnsafeArrayCPUOps_CanUseModuloForBroadcasting_m5E7C2D22A2531C7758C3761873D8EC5054333FE5,
	UnsafeArrayCPUOps_CanUseModuloForBroadcasting_m38A439213D9E78F98699CD7EAEC302BEC9A5EA46,
	UnsafeArrayCPUOps_ApplyElementwiseWithBroadcast_mDF91053B566527DFA3611067DE69DA617AB2FC15,
	UnsafeArrayCPUOps_Add_m486C43839386D58C09A1B976B866401F48AEE97E,
	UnsafeArrayCPUOps_Sub_mDDB528C56B564AA93B80E8375CFC27311A056446,
	UnsafeArrayCPUOps_Mul_m2A874631EC5325050665681A6FE84F0CF406DDF9,
	UnsafeArrayCPUOps_Div_m82265FD45D6204EB71D606F609F7E4063E577062,
	UnsafeArrayCPUOps_Min_mFF17FD3DF59096D9FFF71385A9E3476B643C05D5,
	UnsafeArrayCPUOps_Max_mA7456462A346FB1A2849E24E061F4614617219BE,
	UnsafeArrayCPUOps_Greater_mEAB13BC3D159758F13DB7D8778D7E8116AE566CF,
	UnsafeArrayCPUOps_GreaterEqual_m947C72A3C822C11BD277EAC3A4F1A9AC89EC723F,
	UnsafeArrayCPUOps_Less_m982B4EF2F0B883EE29BD4FF3F44FB109019A6B41,
	UnsafeArrayCPUOps_LessEqual_m4A8BA5D6469C275DE616641FE231BD401B4CC01D,
	UnsafeArrayCPUOps_Equal_m4B4DC784C7549C3CAED934364E93CB3BDD8979A9,
	UnsafeArrayCPUOps_LogicalOr_m6ED1C48A2BA86E4B186BA1734C4EE28CE8A2E491,
	UnsafeArrayCPUOps_LogicalAnd_m3B2893BA3ADBEB3D70CF9A1144FBD475AF731241,
	UnsafeArrayCPUOps_LogicalXor_mC70CF67E0648B7D585C2C7438285770289DB0ADD,
	UnsafeArrayCPUOps_LogicalNot_m704EDC95A223382EF3B3AD182BAFA34623C0FF07,
	UnsafeArrayCPUOps_ApplyLogicalOperator_m503E923D604D12AE26322A0C5D868CCF168D6AF2,
	UnsafeArrayCPUOps_MatMul_m1725E90EDA92D38D747CF73AF1BE4AF961244D71,
	UnsafeArrayCPUOps_Dense_m65B6AF6E3CED3FAEE3B2D1F8895223BB1880E273,
	UnsafeArrayCPUOps_ApplyFusedActivation_m3050FAB0DB7C42FFCE697D11D33067D36CE8D94F,
	UnsafeArrayCPUOps_MaxPool2D_m08D757A115F3FA8CB90966B64C48B621185E53C8,
	UnsafeArrayCPUOps_MaxPool2DInnerLoop_m9B968B3375C90C215494D06F4617D1520729BD05,
	UnsafeArrayCPUOps_AvgPool2D_mB9971AF213C47D3473756B44D103F1AEDA7BCD3D,
	UnsafeArrayCPUOps_AvgPool2DInnerLoop_m064E2A7E9ED4C9FC8640E56D5AFF6C5A80DA17D2,
	UnsafeArrayCPUOps_GlobalMaxPool2D_mB6756149FB69A9BD66F3F616E6FF7BEB51B0FF67,
	UnsafeArrayCPUOps_GlobalAvgPool2D_m84F919367153F1271A8249136FABAC3B917435F8,
	UnsafeArrayCPUOps_Conv2D_m407582E3F361C8786F7803E5B23107A063A6C884,
	UnsafeArrayCPUOps_Conv2DUsingIm2Col_m57BC22A3D7859E6499ED8749EC3A19D00BC53AC5,
	UnsafeArrayCPUOps_Im2ColInnerLoop_m01896319D9191E8EF3B121CA21C1FD09F91AEC72,
	UnsafeArrayCPUOps_SafeIntDivCeil_mD0CFEF18BC6FDCA7F5959116BE4D4BEAE45FB067,
	UnsafeArrayCPUOps_Conv2DUsingIm2ColSliced_mF89E53696B580D52E074715DE02F96924324B58B,
	UnsafeArrayCPUOps_DepthwiseConv2D_m5B362A14A8D273D9095914094F2A84D1EF951291,
	UnsafeArrayCPUOps_DepthwiseConv2DInnerLoop_m743760D6C562B69C7F905F7665B5040243A8613F,
	UnsafeArrayCPUOps_ApplyPadding_mEE1D60F1039324B8430D0BE762E09CC257AF75F5,
	UnsafeArrayCPUOps_Border2D_m53180B19CFB6B6492255D57EF6C18B1E08EBF1C8,
	UnsafeArrayCPUOps_Pad2DEdge_mA68AD7E1E3C843308BB2BC8F922BD4EB8F417141,
	UnsafeArrayCPUOps_Pad2DReflect_m3774F5E26DE00327A80EFF86CA7A1B1ADE32FA45,
	UnsafeArrayCPUOps_Pad2DSymmetric_mAE5D890278A36856D5620D5CBE4A4F358DACC5C2,
	UnsafeArrayCPUOps_CopyAndReshape_mCDC52A8321D69CB8E7353840AC254F20C820638A,
	UnsafeArrayCPUOps_ScaleBias_m5E958C5A3F2C4627AF9B77D41E9D4E07FC5C93C0,
	UnsafeArrayCPUOps_ScaleBiasInnerLoop_m30DC84BA2AA0CCE920B009C54A0A576C7E28A2C5,
	UnsafeArrayCPUOps_Prepare_mC7692C61F90385F380E00D99FDA30E98D23DA6E0,
	InnerLoop__ctor_mB039E08E634C24879F3BE8DCCD6327953D53ACF4,
	InnerLoop_SetState_m681EE94172F7AFC7EEF4C0404C39F6D6EE7FD779,
	InnerLoop_SetState_m8DAE182E899330EE4661F80B99BC54A7A2E9C3F5,
	InnerLoop_SetState_m2F4D8CB7D354D3BECE72F12EEEEBC3D8A341ED57,
	InnerLoop_SetState_mEFF6D449C7EBAB864B19843DED16C68F3757168E,
	InnerLoop_SetState_mEFC6454611B4E2AE1BF2E1FBA5008E406B3A05D5,
	InnerLoop_SetState_mD6D7AD4E5BBC65513C1186A28C953701A4C3506F,
	InnerLoop_SetState_m51E185F41E3939AD71002AD91306150DF107716D,
	InnerLoop_SetState_mCC07499C24A3E4C16E2BC93A04BD5037932A3CED,
	InnerLoop_SetState_m53D152994136955708F70EE892BF26D30D7704E1,
	InnerLoop_NegInnerLoop_m481A135C28DE6D764A0DC3E1AF750F2E3D0B8228,
	InnerLoop_ReluInnerLoop_m63180FFF3CC54112F82DF1994CD9F8C50CC2C71A,
	InnerLoop_Relu6InnerLoop_m4DBF13DDC352CEBB5A84D07BCCB2AF5E8250CFE1,
	InnerLoop_LeakyReluInnerLoop_m651BB9EE455FD83E9825C9314D9D78D7091E30E8,
	InnerLoop_EluInnerLoop_mB58BD4F5B4375F9B28513892439742933EBE1582,
	InnerLoop_PReluInnerLoop_m434A8472D19A7F8464E2AA28EDD59B78DD1108B4,
	InnerLoop_SigmoidInnerLoop_m8AD679F2714FFA56E02A241A03B4EF3C8EA177C1,
	InnerLoop_SwishInnerLoop_m952B06B5F86E96A078FC9AEB06A803685A856F24,
	InnerLoop_ExpInnerLoop_mCBDC7B879B6F40DC2E662130092684388882C7E7,
	InnerLoop_SqrtInnerLoop_m89108009981B72D5EA6A1DFC6C0C5B6CB46195FE,
	InnerLoop_TanhInnerLoop_m92EFDA27B266B9844EFE528D47DF68E434D30BE3,
	InnerLoop_AddInnerLoop_mCC72950361C94601E14C1D842FE0009C91C8D517,
	InnerLoop_SubInnerLoop_m0D149B61E5F92118A9E09CBC07D0BB3B12357EFE,
	InnerLoop_MulInnerLoop_mF2966B039631C3F83D58C14A2602BF74681E733F,
	InnerLoop_DivInnerLoop_m3CF04B4743573258C1D3024B0DD44E08623EF48E,
	InnerLoop_MinInnerLoop_mDB867D67568161FC885FB8A1C15CCAC67C7E8700,
	InnerLoop_MaxInnerLoop_mB1833678D9442A1C5AC0F8A5EB2AFAFF802D0F0B,
	InnerLoop_GreaterInnerLoop_m171881737E2BBEE99F36AF50FD4142E5EB464FF9,
	InnerLoop_GreaterEqualInnerLoop_mD68F7CD3E7E8A9D44946012682802CB206BAEC77,
	InnerLoop_LessInnerLoop_m7819C18D9E24A32C1EAB686D58D2CB1CA521E20D,
	InnerLoop_LessEqualInnerLoop_m3C51F5943DC6F348B6AF3C74F7AE46CF301247EE,
	InnerLoop_EqualInnerLoop_mF6D190F57084921F179E93BA93641C706A82F3EF,
	InnerLoop_LogicalOrInnerLoop_m8B5E75F1587185A822900432A809524417D57D75,
	InnerLoop_LogicalAndInnerLoop_m9381EF4B98D3122F6A0009B4DDB5A442DE974E61,
	InnerLoop_LogicalXorInnerLoop_m9C5CE255FAF69DC9EAB8BECF1C983659340DF19F,
	InnerLoop_AddInnerLoopNoBroadcast_m77A1E67E3A35CAAF81B1D3EAE6C193FEFED42780,
	InnerLoop_SubInnerLoopNoBroadcast_m5DBE9FF71C71A0D6A0156D81DEC93F65B4BFAA57,
	InnerLoop_MulInnerLoopNoBroadcast_m60EEA3F7FE00D19314D182C2940A6E1393346ADF,
	InnerLoop_DivInnerLoopNoBroadcast_m1E5A803A3932AC8A9B31DB6BFAB5FFD87FD86D64,
	InnerLoop_MinInnerLoopNoBroadcast_m21C0A308BB600E4F26448D78EDE009C72103980A,
	InnerLoop_MaxInnerLoopNoBroadcast_mE3063A8360BA92ABFBF4B1E32B62CC2E8663403F,
	InnerLoop_GreaterInnerLoopNoBroadcast_mA93745B07D3148A4788B78BEA548C8A611D00D6F,
	InnerLoop_GreaterEqualInnerLoopNoBroadcast_m3DB7AD0D04279DA7CEA5840779C5C4320E3D832F,
	InnerLoop_LessInnerLoopNoBroadcast_m4ED37B7AF3BDEA945F8D7D0AE6D2B466EBDF3B25,
	InnerLoop_LessEqualInnerLoopNoBroadcast_m23BE76E171F0CFA7CBF2282C1B43A3E149050476,
	InnerLoop_EqualInnerLoopNoBroadcast_m0432EE33A0CF7ACD2893486EEC80F430302862AB,
	InnerLoop_LogicalOrInnerLoopNoBroadcast_mB5AF989DC1D49FE3820FADF27D8F0F9E648A2371,
	InnerLoop_LogicalAndInnerLoopNoBroadcast_m655FBFBF9AF0DCF9EFCF68960491F4C8AB33C690,
	InnerLoop_LogicalXorInnerLoopNoBroadcast_m10BA57E05BC8222DBBD4092F423643B21FCF29CA,
	InnerLoop_LogicalNotInnerLoop_mEE46675172507DAC63089E5612C57C5A336725C7,
	InnerLoop_ClampHWToTensorShape_mB986266215052B0B045D0D1D4B9F04304BBB3D2A,
	InnerLoop_Border2DInnerLoop_mE944DE5A1E5CF7978D208194D9FD7B9173C517A0,
	InnerLoop_Pad2DEdgeInnerLoop_m00FB78B4598E355379B508B4183C1EA0DDA2D292,
	InnerLoop_Pad2DReflectInnerLoop_mC42A5E2CC4499AFA10A33201D7FF381A64D987A6,
	InnerLoop_Pad2DSymmetricInnerLoop_mAE775C4156BD6103FB1248FE0FE3843C034BE130,
	InnerLoop_ScaleBiasInnerLoop_m8CEC56810B07E101F54462BB4192A3AAA79A660F,
	InnerLoop_Add_m6CE5A35EFBFAF0B0787BCB3E90D235958673712D,
	InnerLoop_Sub_mD32CBAAE90EAF3FDDAC623EF045E65803537BF2A,
	InnerLoop_Mul_m627C80BA5B8A2E68C4BCFC1FF0D0981988DB9E62,
	InnerLoop_Div_m58B275BFBE93264F62639A321447875A1A5666E3,
	InnerLoop_Min_mDE58800F4D137041F0ABFFE7FEC4BE67BC6D3803,
	InnerLoop_Max_m4B3ED6B7CB26CB9AE84431BEA9ACEF30353F5A74,
	InnerLoop_Greater_m773474E33A1DA96988A44426762F4787B4D5AFEF,
	InnerLoop_GreaterEqual_m8425BDF77E962AD3BED9D0D50423F4D0150141F8,
	InnerLoop_Less_m825C4D7027A719E0D967F8244F7DFEE0DC415ED8,
	InnerLoop_LessEqual_mEC07F6D8E485F19A7BCF9D6FB7AB353F46F691E9,
	InnerLoop_Equal_m27774D798A0917B7E5FDD4520AD81B6DB8622D7C,
	InnerLoop_LogicalOr_mEE8EF0F19D86A0245051CCC58E3F2E84E1244E64,
	InnerLoop_LogicalAnd_m508D50D748B25125B3000DE8492EF294E5E8D0BF,
	InnerLoop_LogicalXor_m8E5ADC2EB9D7BBF45D4B5F7D35C054D4F75B400B,
	InnerLoop_LogicalNot_m6FB54F2F6BF3DB2789E4BE949EE39F87502F58CF,
	CompareOps__ctor_mF10617D0089E412C5BDD5AF3E5ABB12CC280ABD0,
	CompareOps_PrepareModel_mE0E65E9FA6BBCDF99C482B6673922507F880FCCF,
	CompareOps_PreExecuteLayer_m3103D06DB2F104E5D7B0FD10AC248C2546E93E36,
	CompareOps_Unity_Barracuda_IOps_MatMul_m68F44A5384BBE6870953AF57E7F292CC092DE464,
	CompareOps_Unity_Barracuda_IOps_Dense_m08C19D5F9AE9251038F3941AB6A057DD726BC865,
	CompareOps_Unity_Barracuda_IOps_Conv2D_m7DCAD4AEAAC70DF9E0040758BD5E55C28EF92287,
	CompareOps_Unity_Barracuda_IOps_DepthwiseConv2D_mDE75A626B0B79800D3EBA4B9F5C6B413C9676F5B,
	CompareOps_Unity_Barracuda_IOps_Conv2DTrans_mE836BEE8497025F433289850AAE65A4EAC8433E1,
	CompareOps_Unity_Barracuda_IOps_Upsample2D_m67B1FDC472E8A4444946B5909FBF4D638A7D8741,
	CompareOps_Unity_Barracuda_IOps_Resample2D_m3581220FE6F11BE8368407147C78273C6AA5D04C,
	CompareOps_Unity_Barracuda_IOps_DepthToSpace_m7D20485EB05B02E36555E828661B59B883B85537,
	CompareOps_Unity_Barracuda_IOps_SpaceToDepth_m94D426BC5F02CED0FF565C4BECA3964EF7BE6929,
	CompareOps_Unity_Barracuda_IOps_MaxPool2D_mE5F4D6FE5F735F3D06E2C6180854C839B6B1230B,
	CompareOps_Unity_Barracuda_IOps_AvgPool2D_mBAEB450112EAC9EF1EC5755EDB6BDD0A6EC2B042,
	CompareOps_Unity_Barracuda_IOps_GlobalMaxPool2D_m589C342424A7B06972ACA901268D4DD4640AA52E,
	CompareOps_Unity_Barracuda_IOps_GlobalAvgPool2D_m93F4547EBB671B9F1D7B3A8EB6BC5B24C12D2558,
	CompareOps_Unity_Barracuda_IOps_GlobalAvgVariancePool2D_m459073A09343BFDB89E5AFA28723CF06B4F55982,
	CompareOps_Unity_Barracuda_IOps_Border2D_m4805F511748275A4A720043756C72F9AFE713BDF,
	CompareOps_Unity_Barracuda_IOps_Pad2DReflect_m6F7F7AFC107781BB148FA9C72B543914941B7C5A,
	CompareOps_Unity_Barracuda_IOps_Pad2DSymmetric_m381FBEB7393ADDAA2FE08F1EFE0C686BB388EF0C,
	CompareOps_Unity_Barracuda_IOps_Pad2DEdge_m0E4BDF9E40E69D66577224E372B34B5685109367,
	CompareOps_Unity_Barracuda_IOps_ScaleBias_m5C7918C2C91B7D6D9A9EC67E2D5E68376DF30CE2,
	CompareOps_Unity_Barracuda_IOps_Normalization_m2A8D998E0D6AF789DEAD7A816E05B265B1E6E1F8,
	CompareOps_Unity_Barracuda_IOps_LRN_m76302081147EC2B1BBFE154B3460953BAA54F46E,
	CompareOps_Unity_Barracuda_IOps_Dropout_m32128A452965B3B243F81070139502F1B0AC34FE,
	CompareOps_Unity_Barracuda_IOps_RandomNormal_mFA771DF48372DE838C1A8F6CB1F8E755B152C13C,
	CompareOps_Unity_Barracuda_IOps_RandomUniform_m07A8CBDDBC6E4FFDE2FBC2ED645B329291D4682B,
	CompareOps_Unity_Barracuda_IOps_Multinomial_m8B3310FB4FA55C481F5CDF3541B5C24A92F2E050,
	CompareOps_Unity_Barracuda_IOps_OneHot_m4BEA1F3E8044974D2AE379EA442C5E1B5AA9B1C7,
	CompareOps_Unity_Barracuda_IOps_Relu_m4A6FB05C4BCA6A6BE8EA52DE83E6C9B24CA169C0,
	CompareOps_Unity_Barracuda_IOps_Softmax_mDBF30ACFB18BAB93993B1C73B50E9722A0772D4C,
	CompareOps_Unity_Barracuda_IOps_LogSoftmax_mE89CBB03412F2451B32149A7C11F1C667C27FD19,
	CompareOps_Unity_Barracuda_IOps_Tanh_m3275D1B0BC1D6B1DB880BF1C850A32772B6F94C3,
	CompareOps_Unity_Barracuda_IOps_Sigmoid_mFDA61EA9956C2835977726FCE929E0DF7D1614D1,
	CompareOps_Unity_Barracuda_IOps_Elu_m55777969C0280AE369D7C1E64CA66907830C8C29,
	CompareOps_Unity_Barracuda_IOps_Relu6_m74A10007DEF16C78246776E9DE2EF1CA3122A970,
	CompareOps_Unity_Barracuda_IOps_LeakyRelu_m73AB8008A1E71C594A2C1AFA74E0A988B8AC3B20,
	CompareOps_Unity_Barracuda_IOps_Selu_mFAC0CEEF98D465837F771CDD24B3BAA9FB0953BE,
	CompareOps_Unity_Barracuda_IOps_PRelu_m0E63F096B3B41B39C463A0D71030B232C8B9A88B,
	CompareOps_Unity_Barracuda_IOps_Swish_mD9FD1F083BE7B020242AB3E9FE6FC2CF927DC648,
	CompareOps_Unity_Barracuda_IOps_Abs_m1F13ACE56A4C7E73D63A54DEF8A42016D7820478,
	CompareOps_Unity_Barracuda_IOps_Neg_mA40FFB39943B09B6713E4E1EF921E5EDBD8B5429,
	CompareOps_Unity_Barracuda_IOps_Ceil_m75046621BD59C57C05148831CFA1E71E2DE8605A,
	CompareOps_Unity_Barracuda_IOps_Clip_m17C5C0A8B3B254E0AF2DA6A48706A6C2CB21A80D,
	CompareOps_Unity_Barracuda_IOps_Floor_m9530B7E1A2AC8629DAA39911C41926A00AE432B3,
	CompareOps_Unity_Barracuda_IOps_Reciprocal_mE75B1182D359292C95A95CE6E33C658F477D0927,
	CompareOps_Unity_Barracuda_IOps_Pow_m2B6B368E04A25ABF31662B6DA2A5E17E5C8F1D6E,
	CompareOps_Unity_Barracuda_IOps_Exp_m9D27B05566ADBEE06905BA86E647C349A728939C,
	CompareOps_Unity_Barracuda_IOps_Log_mD24A84BBA075856AE56369239ABF4931DAABFA43,
	CompareOps_Unity_Barracuda_IOps_Sqrt_m242C469D62CEFAB7171908999499ED88EC26E209,
	CompareOps_Unity_Barracuda_IOps_Add_m1FA781DE74205C426C9FDFE4DD7299BF0CC72807,
	CompareOps_Unity_Barracuda_IOps_Sub_mB7D37D9C0C542010409C47D6D6650428FEB694AF,
	CompareOps_Unity_Barracuda_IOps_Mul_m28FB7C47E26EB6D3885B0CBC789BE81B3BF09AD1,
	CompareOps_Unity_Barracuda_IOps_Div_mEB85105D426B5C27A8E82136A6C7A2998FD700A7,
	CompareOps_Unity_Barracuda_IOps_Pow_m3225837C52C672E18CCD0ECEF8D0CFA0DECE8557,
	CompareOps_Unity_Barracuda_IOps_Min_m65D83B977E12701660CDC3F891462CB2CF8E4C5E,
	CompareOps_Unity_Barracuda_IOps_Max_mCDAA6D52167D23A9F5AD6B56667A932BD88EC647,
	CompareOps_Unity_Barracuda_IOps_Mean_m97451FCCA9EAB9CE7745E9F7FFB50D27824882A9,
	CompareOps_Unity_Barracuda_IOps_ReduceMax_m85768299E9EA9B72D610950C70B84F5102680BA9,
	CompareOps_Unity_Barracuda_IOps_ReduceMean_mA8E7AFBF048B7FF22E4C661C6ED25060E5E7DBBF,
	CompareOps_Unity_Barracuda_IOps_ReduceMin_m966C8492CF79C4BB85F688D2EC733682E9F3565D,
	CompareOps_Unity_Barracuda_IOps_ReduceProd_mC37B01B8CC0EAB32292C606C917B5E23DEC18C05,
	CompareOps_Unity_Barracuda_IOps_ReduceSum_m7B23F0F1B6461BEB54B6A8B7F6DAAAC771CFB30A,
	CompareOps_Unity_Barracuda_IOps_Greater_m02B76F1B27F5B82CB8709A21D6B6D0E0F0482898,
	CompareOps_Unity_Barracuda_IOps_GreaterEqual_m6A5C5F1572B30ECF77607DC9F6DA4922B27205C1,
	CompareOps_Unity_Barracuda_IOps_Less_mC2B8F09EA311C27FD96B694B97A3060B6C850F61,
	CompareOps_Unity_Barracuda_IOps_LessEqual_m6685241DD92CFECD2963E880BF0ABB8658674CAA,
	CompareOps_Unity_Barracuda_IOps_Equal_m76ADF3006091B380F7561432BCA9E8473F10C0BC,
	CompareOps_Unity_Barracuda_IOps_LogicalOr_mC58BB8256FED6F1C2ADF8700EC5CE723FA5C3234,
	CompareOps_Unity_Barracuda_IOps_LogicalAnd_m992BA743AE9E28057B4949A422E0FDF85A4148F6,
	CompareOps_Unity_Barracuda_IOps_LogicalXor_mEBD1D0F7695CA1D718A5C11A59E8608855EAD9FA,
	CompareOps_Unity_Barracuda_IOps_LogicalNot_mA029BC00B852B3F7644D3F4E81D6CC7FEC7614CB,
	CompareOps_Unity_Barracuda_IOps_Flatten_m148CB5A20C659C44173B6BF29324DED213D8FD9F,
	CompareOps_Unity_Barracuda_IOps_Reshape_mC097F0DE8C3183E6DCA7A3FC8414AEA30F08325B,
	CompareOps_Unity_Barracuda_IOps_Expand_mB51F531DDF6CF6EA8FA70AC3650AFFA5776AE3A1,
	CompareOps_Unity_Barracuda_IOps_Transpose_mB6EAE408FA2E0F03B61354EFD60441933DD9ADBF,
	CompareOps_Unity_Barracuda_IOps_Gather_m34C29B02FD437CA549C659C0A1821AF56B96A63B,
	CompareOps_Unity_Barracuda_IOps_Concat_m07237E535C07AF0E9F59B8D7464F6F52C7939945,
	CompareOps_Unity_Barracuda_IOps_StridedSlice_m20D5270BF23448CE2E685185AAE3825D05D9A96D,
	CompareOps_Unity_Barracuda_IOps_Tile_m5477262A1026EA57F3FD6889B7AAECBC15833CA0,
	CompareOps_Unity_Barracuda_IOps_Copy_m09785E6A1B97BF1F303B6E9ECA32E23E1FA0B9E1,
	CompareOps_Unity_Barracuda_IOps_Prepare_m3DBD6FE62BF91321134ABBED93F0D1981AC32A05,
	CompareOps_Unity_Barracuda_IOps_ResetAllocator_m6D4D7F3780D8A455CB2B5213B64CB1B0B7A3AE89,
	CompareOps_CheckSame_mFE19292E773DBAC256F0CB78124B0CF3BFF3689D,
	CompareOps_CheckSame_m79C34BBECF56995EEF60B0CA65270B3302EE1F19,
	CompareOpsUtils_CheckSame_m6A982E9AD32F4E7DFE619E70BF00100D3550E4F8,
	CompareOpsUtils_CheckSame_m1F769D021C170E9984A5AB463076DA1827E397E0,
	CompareOpsUtils_CheckApproximately_m6FFA9C5C1803F562CE3E5968536EF269DE5009FA,
	CompareOpsUtils_CheckApproximately_mAFDE7A4BD3F3F161DA15AC17D669853F362B0E94,
	CompareOpsUtils__ctor_mE9749E8495C403B2396E2147EE25F5F9184CDB17,
	ComputeInfo__cctor_m94E2934EF07E37C2EF20706B601887D9AEC2C0B8,
	ComputeInfo__ctor_m2A7E9E569A01AA289888FF1C98848F6161B8D65B,
	ComputeShaderSingleton__ctor_m07D417B40D54701EDBCB6102C3D91036D7DB3F55,
	ComputeShaderSingleton_get_Instance_m7C86E3474506EA4F77C61E9D450AFE5C2AD282F6,
	ComputeShaderSingleton_LoadIf_m44C1A1E3E3540D62C5D2B0AC4118AA8D19D8C4CD,
	ComputeShaderSingleton_LoadIf_mE007C23118BF8E1305F2D75CC8160C0BA39DD959,
	ComputeShaderSingleton_get_supported_m38DD5FD18CB37B87A1D44D5E39BE519DA8E65C13,
	ComputeShaderSingleton__cctor_mC5EE3111E820B32F908EC7A3E21F91293E92F776,
	GenericWorker__ctor_mA61AA5C78E34546D44BA40E71238ED04FFE9149F,
	GenericWorker_Finalize_mC2C7AF277C8D6E2862AED29CDA707237F5CF9003,
	GenericWorker_ResetAllocatorIfRequested_m672767EB92B4E925E8FEDA1A61EB4657F12119A0,
	GenericWorker_Dispose_m0012E0F90F7943D8B48CCBE440C3EF0F0ABA6887,
	GenericWorker_PrepareForInput_mFF97EA7831B4442C5AF12EC8172915BDB8D561A4,
	GenericWorker_SetInput_m0ECD3877EE3E576C147BDE1FC09D354F6E3D4148,
	GenericWorker_SetInput_m0F009C8D6399199283370E9EAEF8069CCF1E2CB4,
	GenericWorker_Execute_m70808DE2B4D49EAFF6D3F26FD155CBBBCF86DD46,
	GenericWorker_Execute_m83570CD8870A9B8A1338B41511EF70C475B4103B,
	GenericWorker_Execute_m0234B735C8B89D86EFA2FE0378595AFAA9C15F35,
	GenericWorker_StartManualSchedule_mE4D226041AFAEC4CF73C1D415754973BE0872272,
	GenericWorker_FlushSchedule_m6D000F9328A8417DD50169BC650FB115B6D1E77E,
	GenericWorker_StartManualSchedule_m33B9557D045CECCFF2176046921F8052B0052FFA,
	GenericWorker_get_scheduleProgress_m52465FD5AF1BE85D2BA102F908206B56DB3C8E41,
	GenericWorker_GetAndVerifyFusedActivation_mB30FD926881EB401DC4C983C601DB148DBE0512E,
	GenericWorker_StartManualSchedule_m64CD73BD09915B2A9CB546BA09E3AD28CC74AEEA,
	GenericWorker_PeekOutput_mBC5159E45AA8BD8C46CD0C185AEAE3AFE883E9E3,
	GenericWorker_PeekOutput_mC1C9D68B18BA6A28CA148A2633A0FC17E6475965,
	GenericWorker_PeekConstants_mF67A9BB775ADD2D7109F260B68738E8BC7130B49,
	GenericWorker_Summary_mC9D66934193647FB1660032D240810F1372907DC,
	GenericVars__ctor_m359BBEF245EE8DC058F6CF2F6A15C4B8B0FCFAE4,
	GenericVars_Finalize_mA4865EBF81A697001F9636BF1C156952B62E0A47,
	GenericVars_Dispose_mE7050043DE27B9D47060A327A11F339D67C595DA,
	GenericVars_GetAllocator_m0E51B888B68ECE6F35630D1E8EA55865ED89EE63,
	GenericVars_IsTensorOwnedByInternalAllocator_mCDB2FB1E2D87FFD0297FDB2A86CF15DBBB2B1344,
	GenericVars_ValidateGlobalInputs_mEADF37A0DD9E04064DE686752C19F90B90FEC74A,
	GenericVars_PrepareLayerInputTensors_m3A0ECE08557DC09B8F6EE00624CD745929980CA6,
	GenericVars_SetInput_m122195CA13EC3892E455807B356BE0E791E69779,
	GenericVars_PrepareStorage_m0F1725C429DA6084A94DB6D69251BECDB95D65A5,
	GenericVars_GatherInputs_mAEEB32416086F3C3473DDED621DC070A5D6A5CE1,
	GenericVars_PrepareStorage_m88DE3DA0764AA9703F647452CFE32707E4B975E7,
	GenericVars_Store_mA5B3AC94D3A7D77C0827D1289F09B69013049E41,
	GenericVars_PeekOutput_m32B08629D49696F79F608D77AD7B73E6EBD9890F,
	GenericVars_PeekConstants_mEB394CAD8AAE4B5D76DE897B8D4202D5602F6B6A,
	GenericVarsWithReuse_get_layerRequiresStorage_m8CB7867BAD67928AD2EB78BEF5D4B8678F0318B3,
	GenericVarsWithReuse_get_temporary_m5F3908491AA1794209E98B252EBA1F303E1130D7,
	GenericVarsWithReuse_ReleaseTemporary_m4BE582B8B7831CE984A66696919DA8B5C18A9DC3,
	GenericVarsWithReuse_PrepareStorage_mD3225A00D691825B9582EAD8095E2B66CCBD8E7D,
	GenericVarsWithReuse_PrepareStorage_mED97C5FF62931FE218760EDF25982B3F67E01D19,
	GenericVarsWithReuse_Store_m151184B8E2837E31C03B670E26F7D86E5600C374,
	GenericVarsWithReuse_PeekOutput_m8381549A997B0295CFC5E79DF50D2716FD72C560,
	GenericVarsWithReuse__ctor_mDE564D7B04BDEE3E9F409DD140481C90131398F6,
	GenericVarsWithPreallocation_PrepareStorage_m4EA12544BCE827064FB7FF374CEDB7B562D7EE9F,
	GenericVarsWithPreallocation_GetAllocator_m0727DE0BD21408427491E4EB1598FA06F50F0262,
	GenericVarsWithPreallocation_IsTensorOwnedByInternalAllocator_mE37DB6740C46E044C8F260DF7BE98065C66EDC74,
	GenericVarsWithPreallocation_Alloc_m2DA2269D59121A4FABB68DED42ECFE6F5B7BE934,
	GenericVarsWithPreallocation_Alloc_mFA7672B65CD493AC6D12CFCA2BE168F9DA76C87B,
	GenericVarsWithPreallocation_MoveToDevice_m736B58D9A8F58F8974DEDDE0825F77E3E22961BA,
	GenericVarsWithPreallocation_Release_m2BBEA86BCCF68918CB0C5154EE3CCC7D2D34EF3D,
	GenericVarsWithPreallocation_WaiveOwnership_m859808E1A32808B1D47BB9DF5A2EFCEFA905BA13,
	GenericVarsWithPreallocation_Reset_m891F0531A72EA8B5ECCDC594CF41516D57F331AB,
	GenericVarsWithPreallocation_get_busyBytes_m4274AF083E69DE442084BD0F397A93AF04D2D898,
	GenericVarsWithPreallocation_get_freeBytes_m2B0FBE05370072561F71328AC71D8B3E952349EB,
	GenericVarsWithPreallocation_get_totalBytes_m7386DBC7F780DD714E8E1E9C0855974DF4A62809,
	GenericVarsWithPreallocation_ToString_mE9F559205693584E5CE9B9DA3218B4C0244CFB19,
	GenericVarsWithPreallocation__ctor_mF5E7C203E1353206502BC76C96D45ECA14092B71,
	DefaultTensorAllocator__ctor_m02BB93916A2F215C7D4B9B5D719C27BAC9DA0407,
	DefaultVars__ctor_m0946FAC7C2518D0AFD57B4A291E6FB0CAFFA79F7,
	CSharpBLAS_IsNative_mD936616694C05F485448817DEDC7EE473182E33B,
	CSharpBLAS_IsCurrentPlatformSupported_mAD942F5299F6C4B2322D69FAAD75C71EA5A4CE4E,
	CSharpBLAS_SGEMM_m160DCB41EC366C9A8AAF388D80A2B45054B9421C,
	CSharpBLAS_ScheduleSGEMM_mBB647E816096ADB22CB6E0D7209C549A76D28948,
	CSharpBLAS__ctor_m86D98BD73574625E21FB27A0C4B0604DC6C8709A,
	MatrixUtils_CopyBlockWithPadding_m571D7CA6044FDDF57EB327E41DC591D3FD2717E5,
	MatrixUtils_ClearFloatArray_m4AD0E453EF0991C609CF45F01E801537AB829B6E,
	MatrixUtils_CopyFloatArray_mCAADFCEDE7EDCD43C6F2251077A3872DD30237D8,
	MatrixUtils_CopyBlockWithPadding_mC7AAADA9729C21C8AEB58E89B702A612F7FC144D,
	MatrixUtils_CopyBlockWithPadding_m393C81C0135E913F99C34B3D01868D3A47F95C67,
	MatrixUtils_CopyBlockWithPadding_m0E3DFD626D920AAB0DE14AD9DF78B0338DF39CBC,
	MatrixUtils_MultiplyBlockUnroll8xhPadded_m25CB75341F75FAC6943C8F4610E6A2EB12FE26FB,
	MatrixUtils_MultiplyBlockUnroll8xhParallelWithPadding_m537A0B0024935707AC7073B3A97E427A5F835DD2,
	MatrixUtils__ctor_m10D2065DA7E23D8BF71C1A636B783DE6AEE53E84,
	ModelAnalyzer_GetDefaultInputName_mFE8E46CB022C9FB9C4ED28B7195ED80CC0E5D3FD,
	ModelAnalyzer_GetDefaultOutputName_m1638CE1FEE4D473C01F734AA8103B6EEEDA37199,
	ModelAnalyzer_ListTemporaryTensorShapes_mF5D661D9139DDDB7BF4D343728325C03E6ABF3F3,
	ModelAnalyzer_ListTemporaryTensorShapes_m4BAA8B94D344F016B86A80DC8D38A1F5600D19A9,
	ModelAnalyzer_TryGetOutputTensorShape_m8BDBABB0BA3143236C9A9C9B1BC18074F6D19397,
	ModelAnalyzer_TryGetOutputTensorShape_mBB67AFB73BD815EC3837050DB2FF378CA6B15247,
	ModelAnalyzer_FindLayersThatRequireStorage_mE5D15FCEC8610CDA46B474CC6A09126B6C675500,
	ModelAnalyzer_FindUpstreamLayers_mB12100AA1E98B0BDE06F572D3676C73B17728AE5,
	ModelAnalyzer_FindLargestNecessaryTensorShape_m54384215DA2835280E08F9118245CCEC3D8D12E9,
	ModelAnalyzer_FindLargestArgumentTensorShape_m58A13F9D3C190C363301C153E857C3441B9C49BF,
	ModelAnalyzer_FindUnusedLayers_m357AF932EE5FC83F8FA3BFCCFBBA61357C4CC357,
	ModelAnalyzer_FindBrokenLinks_m722A85BA1F1C34ED18F2AA17F70CCEC78AC4DDC0,
	ModelAnalyzer_FindBrokenLinks_m8752905799BBA32E404EA4E392F91F34A954F9F3,
	ModelAnalyzer_FindBrokenLinks_m3E14E14E662B8242E5C175633763012E6B224EB8,
	ModelAnalyzer_FindUnconnectedInputs_m4FA70EF34CC380A1DF10818B426BD2D4BC0101B7,
	ModelAnalyzer_FindUnconnectedOutputs_m6B8907096ADAEF450D4C3E0330B09E82F7EFBA7A,
	ModelAnalyzer__ctor_m88FE2357A55BDD665398550040EE3D4F80FDBA1F,
	ModelOptimizer_Optimize_mF791D15501091568FB389A0A8D94FC9953A06C78,
	ModelOptimizer_IsLayerSupportingActivationFusing_m77F5078AB7BF2020E89C54D218FD437A2E17D978,
	ModelOptimizer_IsActivationFusable_mDF6BB9778FCD33C76630690DB720050AB73A5C2B,
	ModelOptimizer_FuseActivation_m80B948FE0F9027EA40AC09036E642E9414A9FB68,
	ModelOptimizer_FuseActivations_mE9AF59F0E1F77FE0FBC58A50C64D35D1884FCF8D,
	ModelOptimizer_RemoveNoop_mEDD1143D57B872CFC969581DBA7EE4400D7CED54,
	ModelOptimizer__ctor_m5049C263A64C1404BB4DE92189876019FF9163EF,
	StatsOps__ctor_m11128EA88F9E1F33A044669BDC982B3793B90ED2,
	StatsOps_PrepareModel_m9CE208C40BD221E8988FA9F72A3635A089CDCF31,
	StatsOps_PreExecuteLayer_mED284B9D6B5F72D487063A1D1BA3C613A169DBF2,
	StatsOps_Unity_Barracuda_IOps_MatMul_m149966A0CFF60A17A050DB8E954910ED091E6666,
	StatsOps_Unity_Barracuda_IOps_Dense_m76426964D111B2F2D754BC75604141EA3CA743D8,
	StatsOps_Unity_Barracuda_IOps_Conv2D_m29352D0BE7505AF9A867C94E2A0497A2A5046303,
	StatsOps_Unity_Barracuda_IOps_DepthwiseConv2D_m9B9A89C0C8EF15BF713E6A5C01542F3680260A27,
	StatsOps_Unity_Barracuda_IOps_Conv2DTrans_m6B32E5944D336F64090B74EF1639C07142C7102A,
	StatsOps_Unity_Barracuda_IOps_Upsample2D_m9BD4D55E72333690001D0C43B4E5C17CDA46AE31,
	StatsOps_Unity_Barracuda_IOps_Resample2D_mDC5E5FB061684FA581B3141F7372B103E6E1CCC4,
	StatsOps_Unity_Barracuda_IOps_DepthToSpace_mF6F54C6C1C2C882ACEF46A9292C21CD3CF31EE7D,
	StatsOps_Unity_Barracuda_IOps_SpaceToDepth_m86C747AA52B12B502D5EAA97950360F075F38C3B,
	StatsOps_Unity_Barracuda_IOps_MaxPool2D_m3B51F3B2DEF12DF067D0A1821CE096F6FDCEB5D5,
	StatsOps_Unity_Barracuda_IOps_AvgPool2D_m603786B2CC76D935C27E72C3FDE4492913ADC1B7,
	StatsOps_Unity_Barracuda_IOps_GlobalMaxPool2D_m70C7E3E08BB23597791495996DD7D2592F44B8E1,
	StatsOps_Unity_Barracuda_IOps_GlobalAvgPool2D_m6E1B4C05A3A2819EA8E0E06D512F1A2A1E239E39,
	StatsOps_Unity_Barracuda_IOps_GlobalAvgVariancePool2D_m6C17592226018CF04C2683A2AE787EC193068D05,
	StatsOps_Unity_Barracuda_IOps_Border2D_m8DC26927DC9814E9FCED55A9A8D96E4475D61715,
	StatsOps_Unity_Barracuda_IOps_Pad2DReflect_mBDFBD9B1F4F1B3F756F25BC416F8BDEA84264A4A,
	StatsOps_Unity_Barracuda_IOps_Pad2DSymmetric_m1C020F71B23440D142D02811BC351257CFABB426,
	StatsOps_Unity_Barracuda_IOps_Pad2DEdge_m90EE950681E42A054F2896A8A0AE829E59833F1E,
	StatsOps_Unity_Barracuda_IOps_ScaleBias_m5C96E9FC2A834745A49E847F580FEE00D2DEC023,
	StatsOps_Unity_Barracuda_IOps_Normalization_mF7888182342A4364D32C68BC240A765E05DCB409,
	StatsOps_Unity_Barracuda_IOps_LRN_m4D489B3C9DD95C810F1950D140D9CF35D1836511,
	StatsOps_Unity_Barracuda_IOps_Dropout_mC5463983C4E9C691DA8800863590EC750D69A695,
	StatsOps_Unity_Barracuda_IOps_RandomNormal_m7DFB0D89B07A19F5308889F1CBC51A2D3226A262,
	StatsOps_Unity_Barracuda_IOps_RandomUniform_mE1E32CFF0DA41D1368144D6705FAC530F9051DDF,
	StatsOps_Unity_Barracuda_IOps_Multinomial_m6CA270F6ACD879AD5F6D5C1FE400BA676274165F,
	StatsOps_Unity_Barracuda_IOps_OneHot_m680CBBB3DBDF78C698B0F0BC8C7624F715611373,
	StatsOps_Unity_Barracuda_IOps_Relu_m6E3C8E5C650A2E76086406E651F61F7F74DA74E5,
	StatsOps_Unity_Barracuda_IOps_Softmax_m5FE15974D76BF2B3E4E8A99AF6DCBC96165370DA,
	StatsOps_Unity_Barracuda_IOps_LogSoftmax_m01A5CE3453D6D4D740E521CAC20FC1B97DA8FCEC,
	StatsOps_Unity_Barracuda_IOps_Tanh_mE2806923A39B6C058F38A56539509E459765E70B,
	StatsOps_Unity_Barracuda_IOps_Sigmoid_mF06924CFE2F956BB606DAF12F025C9327507E449,
	StatsOps_Unity_Barracuda_IOps_Relu6_mEE3AB2BBC65BDBC48BCD1162FFB03278F8672647,
	StatsOps_Unity_Barracuda_IOps_Elu_m2DAF0E07A8D533430CF169E0A456E815B394CCC2,
	StatsOps_Unity_Barracuda_IOps_LeakyRelu_m3DCC7E21626518DC4D28203F0A53EF7E4BCFCF11,
	StatsOps_Unity_Barracuda_IOps_Selu_mFCA233E6AB524BE84689933CF4607F5E17A22D8B,
	StatsOps_Unity_Barracuda_IOps_PRelu_mD927DED752D5BAE9B299FD7CF168EE3AEA4849EC,
	StatsOps_Unity_Barracuda_IOps_Swish_mA2313A49E8780EBEB803E0200E92BEAF9DA5F530,
	StatsOps_Unity_Barracuda_IOps_Abs_m3E68AF18D8328366C177AB33BD79BF37E1205108,
	StatsOps_Unity_Barracuda_IOps_Neg_m474DA50401D54D50B2F5D380007B43025BCDBBFC,
	StatsOps_Unity_Barracuda_IOps_Ceil_m9AAF300C7D4C069E223353F2DFEA0FCE3E752001,
	StatsOps_Unity_Barracuda_IOps_Clip_m491E62AEA60B1480FB740F1A23AF1F1B7E4B2353,
	StatsOps_Unity_Barracuda_IOps_Floor_m1891311F2BE02DD1B40BBFF50BB98EC4BF711A38,
	StatsOps_Unity_Barracuda_IOps_Reciprocal_m7684263844076BBFFA568987016FA17FCA25DEB5,
	StatsOps_Unity_Barracuda_IOps_Pow_m51CE0E35B6D9E16256004D0F45F260ACCFF3BE5A,
	StatsOps_Unity_Barracuda_IOps_Exp_m574B645C38F15B3FC8EAA81D823C9C7378E8B204,
	StatsOps_Unity_Barracuda_IOps_Log_mF05E93CEA4F259A0D631E77DD73B4FDE53FD9CAA,
	StatsOps_Unity_Barracuda_IOps_Sqrt_mE535631123DF74B6D824EDF015760FFAB34419F8,
	StatsOps_Unity_Barracuda_IOps_Add_m5D8A69C6EA201B4EC8E5EB8F5840D36505A33EFA,
	StatsOps_Unity_Barracuda_IOps_Sub_m2C01470A6719FC0A485CDCFA2379872255ABA5D9,
	StatsOps_Unity_Barracuda_IOps_Mul_mC8A5657B98B854B54374BD84D86DA04C47407F98,
	StatsOps_Unity_Barracuda_IOps_Div_m8FCC5405EC4B3A5486093A03A492BB3D72315869,
	StatsOps_Unity_Barracuda_IOps_Pow_m84B89B1DE6A8EA3457538BDE81E6EC80F3DF433A,
	StatsOps_Unity_Barracuda_IOps_Min_m8E8679726E62A1419BA2100996E94CE81509C6E6,
	StatsOps_Unity_Barracuda_IOps_Max_m8EA3A524E83AA38C16F7AFC2EDF83B5C9604193B,
	StatsOps_Unity_Barracuda_IOps_Mean_m6F45DCC72556C2A1397B9CF1B7C461A2E7C6EF2C,
	StatsOps_Unity_Barracuda_IOps_ReduceMax_mA2EA57046736AF053A24281CD222A854A986D4E4,
	StatsOps_Unity_Barracuda_IOps_ReduceMean_mDD57CC86AE0B4FA6C8A18D559EDAB7F18F96ABB1,
	StatsOps_Unity_Barracuda_IOps_ReduceMin_mC107E5577EEE1659993A48CFA4891AF9E7EB1081,
	StatsOps_Unity_Barracuda_IOps_ReduceProd_mC18617F07309077A8FA8AAEE403B0AD6084373D3,
	StatsOps_Unity_Barracuda_IOps_ReduceSum_mCDE1A5FB7ADDC6830BD41A6443E418A6CCC8DE4F,
	StatsOps_Unity_Barracuda_IOps_Greater_mED16EBD991ED0E0D399C881F614DB551757B4F75,
	StatsOps_Unity_Barracuda_IOps_GreaterEqual_m6D5FAE35F19B4148883A8CF13C84FBC48319613D,
	StatsOps_Unity_Barracuda_IOps_Less_m634CA0FF6BA29D6E1907D457EF0E123C2A6C541E,
	StatsOps_Unity_Barracuda_IOps_LessEqual_m9131A4598E95FB8E274CA63F35C8E83867725212,
	StatsOps_Unity_Barracuda_IOps_Equal_m6B8C6D59189F3299460870ECBBF35AB45F88DA79,
	StatsOps_Unity_Barracuda_IOps_LogicalOr_m0262B8AC01535FFE4040C77793AA6D49A31D9961,
	StatsOps_Unity_Barracuda_IOps_LogicalAnd_m1C8FAECF81268EDD6FAFBAF68885B5AA2DC2C3DD,
	StatsOps_Unity_Barracuda_IOps_LogicalXor_m3CDBE47421A54C0E1015903948DCF4D98F94320E,
	StatsOps_Unity_Barracuda_IOps_LogicalNot_m8655FD7F5AD9353138EC18DCB44A78CB3210ECAB,
	StatsOps_Unity_Barracuda_IOps_Flatten_mC253899ABCABA0A50BFE3B7FAC6AA8F1523346DD,
	StatsOps_Unity_Barracuda_IOps_Reshape_mAEF701AF80D0EAEFB7DA3BE9B3F7AAAE1BBF8F6B,
	StatsOps_Unity_Barracuda_IOps_Expand_m8623A97C88463712030455A424D0542CA00699F5,
	StatsOps_Unity_Barracuda_IOps_Transpose_m27286718B8441E54E6E05D92619E36C7A6A4AC2B,
	StatsOps_Unity_Barracuda_IOps_Gather_m6478DBA6328BBEC5CE19096F9A6388E9E9888B5A,
	StatsOps_Unity_Barracuda_IOps_Concat_mD130F424990B553030329C5E63A770DF2E8F5582,
	StatsOps_Unity_Barracuda_IOps_StridedSlice_mFA155EE168F80BC414721DDC3635608D0B5BD0AF,
	StatsOps_Unity_Barracuda_IOps_Tile_m3C00A261AFC458584BA0E2A02114008B7FBE67F6,
	StatsOps_Unity_Barracuda_IOps_Copy_m5850F4EFEB2000972C099BB813BCE9C91491AB62,
	StatsOps_Unity_Barracuda_IOps_Prepare_mBA4A001EA8E29CF7D7B9C079ACB46970815855E1,
	StatsOps_Unity_Barracuda_IOps_ResetAllocator_m8ED0DBFB646CA6B5F07562B4538B7FC91B7B39C5,
	StatsOps_ToString_m03ECB637985FB687D2B4020C77F256B0747DCA7F,
	StatsOps_Elementwise_m14250D94D0C0703748DBB0A0885F1A6DCA3AC721,
	StatsOps_ElementwiseBroadcast_mE175BD9C5B583DDEF66AE9A6A8CDD22A32C9769D,
	StatsOps_Reduce_mC82086F6903F5FE652F1A033D312D3F15D7F7776,
	TensorOperatorNewAllocator__ctor_m1B27EDD5592463FE46175A5D9618621D75F67DF6,
	TensorOperatorNewAllocator_Finalize_mCED4E4E92FB88B78AB3068E45694078DCA0E7C7F,
	TensorOperatorNewAllocator_Alloc_mF6D6AB72551F4F07AD443672BFAC138F73925F22,
	TensorOperatorNewAllocator_Alloc_m4C67AF28633F913B4EFBF5B7332BEF2DF390BB8E,
	TensorOperatorNewAllocator_Release_m0967ADB7817527006C211643347E8443E7BC3D0A,
	TensorOperatorNewAllocator_MoveToDevice_mFA42BC72F730F1D2CFD31B822054446D7E3479A6,
	TensorOperatorNewAllocator_Reset_m983116FFB138AF5EADC25414AD2ED0B29EB53C7E,
	TensorOperatorNewAllocator_WaiveOwnership_m3AFC873AB560C7C2F76623B56691BDFCFD4E13D5,
	TensorOperatorNewAllocator_Dispose_m3CF2652A86AA7712CF7C71AB12ECAA0CE4AD42A9,
	TensorOperatorNewAllocator_get_busyBytes_mDB60805065344FDB89C68C222FA1683FBB883856,
	TensorOperatorNewAllocator_get_freeBytes_m7ECD7A690216BE3D429B36413ABCB8BCE838F82E,
	TensorOperatorNewAllocator_get_totalBytes_m8516F22439EBDC3F0A6DCACD58B51977514A0C67,
	TensorOperatorNewAllocator_ToString_m0A15C6058616B14EBFFAB2388843E54A35E95728,
	TensorCachingByShapeAllocator__ctor_mFD70839B277C39A5F009586D306438AD236BF1A3,
	TensorCachingByShapeAllocator_Finalize_mE9D202CA743D6E32D378E375AB94BB233C5B327C,
	TensorCachingByShapeAllocator_AddRef_m977A2A75E2D66BDD5560EF639148737A2096D6B7,
	TensorCachingByShapeAllocator_DecRef_m13BBD1F3EF8FF7FD775574A4104D6F8F5A3A9C7A,
	TensorCachingByShapeAllocator_AdoptFreeBuffer_m6AAB2E6A27FDA13DA2C66721C47D5B943744D25A,
	TensorCachingByShapeAllocator_Alloc_m3B3BDD02CB74644BBAA28D696F880EFE4D698C92,
	TensorCachingByShapeAllocator_Alloc_mE2A3F4BF7EDFBD97F740571B5B961F0E3E411B7A,
	TensorCachingByShapeAllocator_Release_mAD835AC755BFA82F40320434A5D88ECD2E94643B,
	TensorCachingByShapeAllocator_MoveToDevice_m99768180EE544FF9DA19810AD0DBF6838342C16B,
	TensorCachingByShapeAllocator_Cast_mD7C2FD149280BEF74AB5071BE7B19F193A21F179,
	TensorCachingByShapeAllocator_Reset_mEEBEC3BCDB8D3B64143CDC69940FAC6F68B45554,
	TensorCachingByShapeAllocator_WaiveOwnership_m06363819AB922A18B7AAB91AB2A35AD3572F50EA,
	TensorCachingByShapeAllocator_Dispose_m75F35E5467F44B274725FEC294828C810243A4C8,
	TensorCachingByShapeAllocator_get_busyBytes_m572207AB267F382C7A0C30A2AB2DA5931F201AE0,
	TensorCachingByShapeAllocator_get_freeBytes_mB24A8A976B6AFDF8AF143FA2EEA199C18AC4CC68,
	TensorCachingByShapeAllocator_get_totalBytes_mD2526843EE1111D4E7F4F046B5225DA0A42B78CF,
	TensorCachingByShapeAllocator_ToString_mB3DE53A609C1690765BEB02B6112D04B028F4591,
	TensorCachingAllocator__ctor_m8024661B747C6305D0B65C523A9B13A191BDF85D,
	TensorCachingAllocator_Finalize_m040AEB9D32AD6B7492C04037CD840F6B2757B968,
	TensorCachingAllocator_GetAllocationMaxCount_mD246D59F3C9B25199FD2EC717D94FD9FC3327D64,
	TensorCachingAllocator_AddRef_mCA5021C5FA3BA6C60A9D4D5F176CA2129F8E459E,
	TensorCachingAllocator_DecRef_mD05245B93653E5F2B169634D2550868F39EC729A,
	TensorCachingAllocator_AdoptFreeBuffer_mA610F30E8FD8ED27A52EF85727EA690CB2D43ECF,
	TensorCachingAllocator_DisposeAllocatedBuffer_m9869BBE9A5366D12CA8DE11E5AD87589BA13A759,
	TensorCachingAllocator_Alloc_mDA47CBE7F8193AD096E86D8FD2A9E13F96B96908,
	TensorCachingAllocator_Alloc_mBDA900CFE596D67BB2B5290FA4B1553D38419345,
	TensorCachingAllocator_Release_m8603826E9519C51A60DC4773A6AD14FF275E1B48,
	TensorCachingAllocator_MoveToDevice_m2A876C44BBB533472329CD8B6A3B111C2FB0ACE0,
	TensorCachingAllocator_Cast_m86FB4BF51D80E026CE20FE284DA06B5462F68D41,
	TensorCachingAllocator_Reset_mF2F5AE0E47DD77196AD85506346F220ED3E4975D,
	TensorCachingAllocator_WaiveOwnership_m00BCB974D35238D09A191CB0F5C69AB59F047F83,
	TensorCachingAllocator_Dispose_mA1733E8C06735F28DF15B0D309C9F483D6845768,
	TensorCachingAllocator_get_busyBytes_mB52FDE433BEB1430A222F31820AB3D0243E6F5BD,
	TensorCachingAllocator_get_freeBytes_m69C3E7F8322D50E89E4423182AD95DC725347E5A,
	TensorCachingAllocator_get_totalBytes_m677EE2111D40A65475349634F192F97B16C29F21,
	TensorCachingAllocator_ToString_mF965FD8D478CB05D70BE2EB31BB8AD103CA69E68,
	VerboseOps__ctor_m2670D4AB27F2F7872B0B4E0761DBB0F855F22B3E,
	VerboseOps_PrepareModel_mC1B85D5E764A5BBEE7AAFFF293C610DBB1CFDEC2,
	VerboseOps_PreExecuteLayer_m49DA87F0A93BA3A263E9F6A89986FD9BB4201574,
	VerboseOps_Unity_Barracuda_IOps_MatMul_m7A89F3270825CE8E45A8BA4A5CC9957F0A9FE9FA,
	VerboseOps_Unity_Barracuda_IOps_Dense_m78BC00235177E15A8DC296B0E8001269252513E8,
	VerboseOps_Unity_Barracuda_IOps_Conv2D_m3EB29F2D68ABDB51A8322C4EAF07E7EE01F64B82,
	VerboseOps_Unity_Barracuda_IOps_DepthwiseConv2D_m399EF38C7A6E268215F1962030DC0AE95C5AAB7E,
	VerboseOps_Unity_Barracuda_IOps_Conv2DTrans_m041DA5CDF28F6A01046BB3B56ACEFF4764928055,
	VerboseOps_Unity_Barracuda_IOps_Upsample2D_m3AF50C5106C7DE9100883501F2689F4EE75211F5,
	VerboseOps_Unity_Barracuda_IOps_Resample2D_m336E0192938A0C3904F8B5319ADF30C81E070B29,
	VerboseOps_Unity_Barracuda_IOps_DepthToSpace_m644529E384F324BC945397F1CF8D9D8FA153084A,
	VerboseOps_Unity_Barracuda_IOps_SpaceToDepth_m12669A03933CA34D6E1E12A9166CFDDFD895925A,
	VerboseOps_Unity_Barracuda_IOps_MaxPool2D_mE6C753CBA372A260F835ACC8009029E8BEFC8144,
	VerboseOps_Unity_Barracuda_IOps_AvgPool2D_m070F9E89552C2B0F25D1D7FED170A1C76A0990E6,
	VerboseOps_Unity_Barracuda_IOps_GlobalMaxPool2D_m24908796315CFD40B9FAB9597EC13E5514A9F123,
	VerboseOps_Unity_Barracuda_IOps_GlobalAvgPool2D_mA70342D79A2CCCD7E6695C055318E7D89D95D751,
	VerboseOps_Unity_Barracuda_IOps_GlobalAvgVariancePool2D_m6A3E7C6061EFF6F4432B4CF4F313BD580148E708,
	VerboseOps_Unity_Barracuda_IOps_Border2D_m1FB9E255B1F33D0816E5E97C4EAFF8CFFA72ED21,
	VerboseOps_Unity_Barracuda_IOps_Pad2DReflect_mC68329424DE87D76C44B24A04232D2242841A6A6,
	VerboseOps_Unity_Barracuda_IOps_Pad2DSymmetric_mE6BE2E27C73D6290A9B8A8D61E138C9D3DA042E6,
	VerboseOps_Unity_Barracuda_IOps_Pad2DEdge_m64EE9A5BCF9321EBF393ECDD7ACCBAD52492AB8F,
	VerboseOps_Unity_Barracuda_IOps_ScaleBias_m31DBF13443142504E551A0A76B2452D41B96C48F,
	VerboseOps_Unity_Barracuda_IOps_Normalization_mD0AE784779D0130EEAC001E813586081374BEC7D,
	VerboseOps_Unity_Barracuda_IOps_LRN_m12843CF6A692B9696A481CEA7DF2E21D8021DB90,
	VerboseOps_Unity_Barracuda_IOps_Dropout_mB1B7AC81B11D7B2EFDEB24D029A1B03A08B06F4D,
	VerboseOps_Unity_Barracuda_IOps_RandomNormal_m0B5DDE58818AF20768B39AEC0C134414F5649037,
	VerboseOps_Unity_Barracuda_IOps_RandomUniform_m40CB33FAF87E4CF711603468E54CC45A1C133EE2,
	VerboseOps_Unity_Barracuda_IOps_Multinomial_m07487F7E7FFF57C9AEC83819325D44C12BA64649,
	VerboseOps_Unity_Barracuda_IOps_OneHot_m625B1B55BCAF3466D14B1C0DF617EE1C0ADA0921,
	VerboseOps_Unity_Barracuda_IOps_Relu_m21A01DE1B18B891831328821D24ECB7D0DE8278E,
	VerboseOps_Unity_Barracuda_IOps_Softmax_m6D25599A95CBC7F7A455DC631289B9210E1494E5,
	VerboseOps_Unity_Barracuda_IOps_LogSoftmax_m77F5C059CD8D70047E0EB8BA9395B4021228B381,
	VerboseOps_Unity_Barracuda_IOps_Tanh_mB23921925030565CCA9A568363C39A81BABA1820,
	VerboseOps_Unity_Barracuda_IOps_Sigmoid_m3E78CE5688864E61CADD249AD97E7886E4951E29,
	VerboseOps_Unity_Barracuda_IOps_Relu6_m5FFFF118C497832F78B52D95438065A20581F2EF,
	VerboseOps_Unity_Barracuda_IOps_Elu_mB016AAB714EE07E8C81E260C174A458D3E5253E9,
	VerboseOps_Unity_Barracuda_IOps_LeakyRelu_mA569F4E8CBA2D9C2E324607B25696FF95E598746,
	VerboseOps_Unity_Barracuda_IOps_Selu_mF4C4C4592F9F3B33D14FB41E002C8092916F8E49,
	VerboseOps_Unity_Barracuda_IOps_PRelu_m1C65655653C9BF252E356AF534BD4845D3EF64A1,
	VerboseOps_Unity_Barracuda_IOps_Swish_m8B03599100F0D720CA63E4150633033532217183,
	VerboseOps_Unity_Barracuda_IOps_Abs_mFE9A9F9D7501CBB2F3B6A7B40CAFA734AE0269EB,
	VerboseOps_Unity_Barracuda_IOps_Neg_m97BCE5E41B2CF243C83C483C27450B0EEFE7B255,
	VerboseOps_Unity_Barracuda_IOps_Ceil_m78321D16E44F3CC79190B4EF6EDD3856308C35FC,
	VerboseOps_Unity_Barracuda_IOps_Clip_m968A6EF3FECCCF7EE643AD3B9A1806A52D4ADA77,
	VerboseOps_Unity_Barracuda_IOps_Floor_m02E633B156143C502C0AD95A1645CCB23F13153B,
	VerboseOps_Unity_Barracuda_IOps_Reciprocal_mB0A527BD27EF1C91F037274E067AE214074B5CCE,
	VerboseOps_Unity_Barracuda_IOps_Pow_m2AE3C9470DCEC592CB4550235FCB15FAAC6DEE09,
	VerboseOps_Unity_Barracuda_IOps_Exp_m0505D19C9602DDB91E826570D15E364F35AA78AE,
	VerboseOps_Unity_Barracuda_IOps_Log_m42D57310BCF5F7B47ADC49A8F01E1A28E265E58D,
	VerboseOps_Unity_Barracuda_IOps_Sqrt_m9044C0AD69C791E62D8FE3DFC4CE31A21D648A43,
	VerboseOps_Unity_Barracuda_IOps_Add_m29905A0F7E9E705D77611E1482052FDB930D15EB,
	VerboseOps_Unity_Barracuda_IOps_Sub_m527CC6E40A2FB2C5E97FD724C29546CB3B313EBE,
	VerboseOps_Unity_Barracuda_IOps_Mul_mD49C76528AA2C540502D8EC1E3AE40644E9A02F4,
	VerboseOps_Unity_Barracuda_IOps_Div_mD355E53249D083575CF01BE4AAAD9FCF8831F278,
	VerboseOps_Unity_Barracuda_IOps_Pow_mAA05ACCC1E71D28701F7B3DF21D8B5D74C0F2F10,
	VerboseOps_Unity_Barracuda_IOps_Min_mCDC13254E80EE2CAA6B44EC3CD1082791F56DAE6,
	VerboseOps_Unity_Barracuda_IOps_Max_mD00DCEEF8CA2DD20A3543133C3CD134FBD094F94,
	VerboseOps_Unity_Barracuda_IOps_Mean_mA372ABADAC113E8F4CF7CD01EFB7B99907FD353C,
	VerboseOps_Unity_Barracuda_IOps_ReduceMax_mB66A4C094D8C573BD79EA74A6B8AAC03AEC620FB,
	VerboseOps_Unity_Barracuda_IOps_ReduceMean_m93DBFA131EA66DE927927CAA6B1E5DFA4F92CE70,
	VerboseOps_Unity_Barracuda_IOps_ReduceMin_m229B08671A40C916A6657073B9B7406130C7C36F,
	VerboseOps_Unity_Barracuda_IOps_ReduceProd_mF990157B5EE16C9ECEFC4703EB0ACA9716E8AAC4,
	VerboseOps_Unity_Barracuda_IOps_ReduceSum_mD400A3E75254CB83302451555639D9D30B954BA5,
	VerboseOps_Unity_Barracuda_IOps_Greater_m1665D1DC73215289055436BFA6C779949D536200,
	VerboseOps_Unity_Barracuda_IOps_GreaterEqual_m39E7DF88C3B8FB080035C45DC63B322F713580AE,
	VerboseOps_Unity_Barracuda_IOps_Less_m2F0AB390F31B8EF6230B5537AB1F7B670DE3D376,
	VerboseOps_Unity_Barracuda_IOps_LessEqual_m0CAAD321A9E8CA079E350C2C14A989398DEE81A1,
	VerboseOps_Unity_Barracuda_IOps_Equal_m812D73F469BE04A1F9A1158961CF8FD37B12645A,
	VerboseOps_Unity_Barracuda_IOps_LogicalOr_mBF82787771AE8777EA83B01733B39653DF661DE5,
	VerboseOps_Unity_Barracuda_IOps_LogicalAnd_m7C6070D7382C82A2A917BAD68521E92070D41CDC,
	VerboseOps_Unity_Barracuda_IOps_LogicalXor_m411FF0FEBCE625558AF6CD0CCECFD5FEF858E05D,
	VerboseOps_Unity_Barracuda_IOps_LogicalNot_mC6F6585113BCBCB7CF87F94A74050AABE7FF7E4D,
	VerboseOps_Unity_Barracuda_IOps_Flatten_mDCD336CDECB1CE103BC77C357D7E5C285096C64A,
	VerboseOps_Unity_Barracuda_IOps_Reshape_m1C88373D00FD769A3352CDFCEFD9CEE1000CE399,
	VerboseOps_Unity_Barracuda_IOps_Expand_m1F1202EC26D6CC8371B459890D361E91672500BA,
	VerboseOps_Unity_Barracuda_IOps_Transpose_mE9799C421E88A6D392FCA69AEFC61683C0A5BAEA,
	VerboseOps_Unity_Barracuda_IOps_Gather_mE2E65FEFA022E80298CB571E2B1BC3CBEDAF7963,
	VerboseOps_Unity_Barracuda_IOps_Concat_mC36E9B81EBB934CC22A03CB0B5B456B56F9BBDEC,
	VerboseOps_Unity_Barracuda_IOps_StridedSlice_m580BF1E77BBC24CA261237AC8AAFEC5132665C61,
	VerboseOps_Unity_Barracuda_IOps_Tile_mAFFD4C7F6654AB124867648DE2447C5F0A5BAD4B,
	VerboseOps_Unity_Barracuda_IOps_Copy_m588767D25EFAE40F21A75765BDC6BC5D465F8FF1,
	VerboseOps_Unity_Barracuda_IOps_Prepare_m03500CDF6D4ABC8651DC6D2B3F80630B15D26985,
	VerboseOps_Unity_Barracuda_IOps_ResetAllocator_mF8E2E7E0D0EAAFF4DFDE5768B5845185972EAA70,
	DeprecatedTensorExtensions_PinToDeviceAndUploadToIt_mF55AD0337BBCB366A7D9EEF08E6BEFCC066BC929,
	DeprecatedTensorExtensions_PinToDeviceAndDownloadFromIt_m5F87759D29776966AAD11576A3C6B86A9DF3D160,
	DeprecatedTensorExtensions_Unpin_m1D0B1D98FFDE1FE3BE6AFE72529C5CBA8E1EAF59,
	DeprecatedTensorExtensions_CastOnDevice_m170EE51F8C2079DB1756F714415241D1E5197F10,
	DeprecatedTensorDataExtensions_GetMaxCount_m1966682CF84DBF0415A68C6A7255F1D1616A516B,
	DeprecatedWorkerExtensions_AddInput_mC46AC4D5439B00B5970742CC912B3C2E6CF3FB37,
	DeprecatedWorkerExtensions_AddInput_m1B38290A8DDF7F82B3F6A8FB75A8EB68BFA334B7,
	DeprecatedWorkerExtensions_Peek_mDDF958AC326CEC256894B3BDE04D16C41AEE2700,
	DeprecatedWorkerExtensions_Peek_m01248A0B72DED9E1C6E0D5DDC718C76C7014C150,
	DeprecatedWorkerExtensions_ExecuteAsync_m0719C64D9FB8DD93887E2885844286B504AF4F08,
	DeprecatedWorkerExtensions_ExecuteAsync_mA5B0816C9E9FBB49DE293678FD8BF0AB5B894C34,
	DeprecatedWorkerExtensions_ExecuteAsync_m2867BB24FA67F8EA1CE115E67CBF3DFEE32668DD,
	DeprecatedWorkerExtensions_WaitForCompletion_mF1A91212428EA60825D6AFBA07AEF17F798E541D,
	DeprecatedWorkerExtensions_GetAsyncProgress_mA1188A83E04723AB65CC95ADEAA6B4F2C2D930CF,
	DeprecatedWorkerExtensions_ExecuteAndWaitForCompletion_mA433D87323B43A84DE42B66C54D074A141F58D76,
	DeprecatedWorkerExtensions_ExecuteAndWaitForCompletion_m8CB819E908C70310D54F1989909523180BA6D06E,
	DeprecatedWorkerExtensions_FetchAndTakeOwnership_m588E1ABFE92AFA909AF440E329171F49CB6E13AB,
	DeprecatedWorkerExtensions_FetchAndTakeOwnership_m1A654B3B40DAF05A812BEF10E529E09FB135031D,
	DeprecatedWorkerExtensions_Fetch_mCCE672631D4E62901B77B005E0AF733F0697C1FE,
	DeprecatedWorkerExtensions_Fetch_mCDB2DF7913EA99EF49C0AF88D3CF3760428DD8A1,
	BarracudaWorkerFactory_IsType_mC6675C4A6C5473F085A86B3ADD0DE3AA0DB16CEE,
	BarracudaWorkerFactory__ctor_m83387F76C19A4385B3A4CD264BE6D412E0C9C277,
	BarracudaTextureUtils_TensorToRenderTexture_m6585BBA0A40D5DAEC469A92ED7D03AA81E8B40BE,
	BarracudaTextureUtils_TensorToRenderTexture_mBCFF25633EE63C16B5D47CEB7BE4EB7EA9494CB6,
	BarracudaTextureUtils__ctor_m6FC37178C36F7DA858973C68CD4EE26766279258,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	WorkerExtensions_CopyOutput_mB8A566F60F3F334C9752F334554C6A1017CD25F5,
	WorkerExtensions_CopyOutput_m30DC88BF257396FAA1C595854AEBBD298A551626,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	RecurrentState_InferBatchSize_mD0C8CDF60F09421B04C5CFB5B7EC254D6DD142E5,
	RecurrentState__ctor_mC57D0F3841A448F18060B39A2C7742B5ABF479CE,
	RecurrentState_Finalize_mA0F36A51A63A2E40687AD6414FB0CBE68552FDF2,
	RecurrentState_Dispose_mE7585AB7189449B613CB333121FFD836A5931E64,
	RecurrentState_GetBatchSize_m7D1F5CB73184CB5D0F0E870616FE199836700765,
	RecurrentState_BeforeExecution_m04ADFD7B864120B2DA09F8B634D772C9ECF41724,
	RecurrentState_AfterExecution_mE7D4EE4929F801F1A7C770FC35AEF55396A3765E,
	WorkerFactory_CreateWorker_m1CCB263E79A5A508C10E94BDAEAB5F75C38C8C99,
	WorkerFactory_CreateWorker_mF911C768864D34E5F89B7B5A0B0814AA6EDAC978,
	WorkerFactory_CreateWorker_m75F17D507AEE7D693A094B4667CDBD8582FAA011,
	WorkerFactory_CreateWorker_mF83C9DEA6284364E9DBB0BF13E8B898C8CD04DF6,
	WorkerFactory_CreateWorker_mB8AC25DD65EB32B7E2B5A8E576D6FDAF7E20C7C4,
	WorkerFactory_CreateWorker_mBFB091E02E5A2A989D692F3E287CAA7FFF14B293,
	WorkerFactory_CreateWorker_m8BDD146243B89037E8AE7010D09D2A4E08FDF0FF,
	WorkerFactory_CreateWorker_mAE742B72619535E96404DAAB3437F855CE0BA6FF,
	WorkerFactory_CreateWorker_mEF6CEF64E5732E9EA400E7AA36818DC9B7C38B9F,
	WorkerFactory_CreateWorker_mACD3BFB985D98EF816E15DC3498D3596FF8D2E40,
	WorkerFactory_CreateWorker_m52CA6326D58304069A92F2E577523F699C431209,
	WorkerFactory_CreateReferenceCPUWorker_mCC0EFAF8FC1997E87B62D241375A6C8239841462,
	WorkerFactory_CreateReferenceComputeWorker_m30873C1A0A1CF9EFD76A236228BDC13BDAB7E0AE,
	WorkerFactory_CreateComputeWorker_m6DD71BDBC9443007C596D3798EC6FFCAEE88056D,
	WorkerFactory_IsType_mD24DDA68E52E252C756BD086446FF7653683E010,
	WorkerFactory_GetBestTypeForDevice_mF7271EDB2EBF45A6EDE7E9855B4FA26A838E5B04,
	WorkerFactory_ValidateType_m72021C7029E9FC26063FB82795EA677B5F4CC69C,
	WorkerFactory__ctor_mBAA741A2B4F59995B291B24DBBACE1550CA38A90,
	WaitForCompletion_get_keepWaiting_m47E56787D677F9686F5CA4DAF7C1B5969F30A917,
	WaitForCompletion__ctor_m9C0040F681E6480E57C086B51A4AF5D619B2FD44,
	ModelExtensions_CreateWorker_m5419525AB16370BA02A6CFE7379BC26B02C8BC6A,
	ModelExtensions_CreateWorker_m3D4587AB7B9F2395E5880E3DA378EC1615721084,
	NNModelExtensions_CreateWorker_mD023324851ED4B695BBEB698AA91775807EF09A9,
	NNModelExtensions_CreateWorker_m9268667E7670CD11C703A302A7BFFD3B2EFFAABE,
	D_LogWarning_m56D60027B24AB88A33A77143D00D238576CCEC3D,
	D_LogWarning_m439B0EDE21F37A4BCD6BF84E4F665EB16EF3D009,
	D_LogError_mC33CAB8D2CC984E834BF95F1A8A6FDD3F4763EB2,
	D_LogError_m17FC481CF8E2E1926469F1FC038544BA1A2D4090,
	D_Log_m693C3FC3A3B6D906FCC855F9055D21CE42AB3E6C,
	D_Log_m3986C6136106FBCE882D82981F04BC17746FEA12,
	D__ctor_mE81A2265961A8E14145096310A466895D4B3BFEC,
	D__cctor_m5925A91B859C6C31105143CE1E6720E33EFFE0ED,
	Debug__ctor_m8B495455BBD8775E5755C483FC39A9E336813743,
	NNModel__ctor_m2028EFFF4642EA8E86E1FFC61E555F77EA2160CE,
	NNModelData__ctor_m1151DE5B545429CAD547BA5CC0397A4DFD77FE5B,
	StringStringPair_Equals_m7D012DC50D9474D5BD80E079A4466ED876ADF5E8_AdjustorThunk,
	StringStringPair_Equals_mF3FFEE92C231910A795A1961DDDD06D50A209DCF_AdjustorThunk,
	StringStringPair_GetHashCode_m2253F757CE9072E6D5B787F9EE94134B571D35D1_AdjustorThunk,
	StringStringLongTriplet_GetHashCode_m0DAD6512DF920A708A0BF6E68C8BE09CCF1939EE_AdjustorThunk,
	StringStringLongTriplet_Equals_m8BCD5BF702D5A133753D068658447A160E864ECE_AdjustorThunk,
	StringStringLongTriplet_Equals_m6844DD6550E7413E85F73100B5FBF39731C81C46_AdjustorThunk,
	StringCache_Lookup_m238C10DB2D1A56F2E53D9ADB3FAC3DDD7E72542D,
	StringCache_Lookup_m9BCC2DD34D4BF67CDA8C6C94E8E439A8D1F61950,
	StringCache_Clear_mD6AC51027976151CDDF2086B7CE967EEDB7CFFC1,
	StringCache__ctor_mB736B4E038E47626263896A007D480B871969C12,
	TestSet__ctor_m71CF71FFEC980C89A8AC6D83144CF5CF3F639E10,
	TestSet__ctor_mC16DF260773D40C208F2261C807F75C6B05877A3,
	TestSet__ctor_m543D88CA6DBEDF13EDBB1120FC96422B6174597F,
	TestSet_SupportsNames_m757AE4CDFD818A8051C1569A2D9726D3C0D372C6,
	TestSet_GetOutputCount_mC04D9CD2E215617ED1D49E91344895585361EF30,
	TestSet_GetOutputData_mAEE0FB06850CB8E3C68579C45AB80B4FF68394A3,
	TestSet_GetOutputName_m5880A3A73AB4ABC801EEAD39B785E42A271DE321,
	TestSet_GetInputCount_m03EC2C249D3062306F199FD65D071400DEB5D895,
	TestSet_GetInputName_m192C42B0DF7E697883E8F4867B7D2AE023679087,
	TestSet_GetInputData_mBD1A3E4E4377E0725489B22D7921F0BA49F220DC,
	TestSet_GetInputShape_m47B13A4DA8F1987768EC1238D94BAF11A1CDA571,
	TestSet_GetOutputShape_m3BDF8616AF9DF58A595A1D078C24AC4F9F4270FC,
	TestSet_GetInputsAsTensorDictionary_m36DAAE89E408198CD021D8483EDE506682926E29,
	TestSet_GetOutputsAsTensorDictionary_m68EB153C9D640DCD831165ECA1A176F0EAAD7515,
	TestSet_GetInputAsTensor_mB57080D10DFADF6688929888C9501BFB2A7C070E,
	TestSet_GetOutputAsTensor_m13A2320ADB04C28E46E2ECA13F747F1E231B85E0,
	RawTestSet__ctor_m5AEE7FAB05DE51464F35265EE85B4379AE5B296E,
	JSONTestSet__ctor_m6C431AADADD57CE2C00B15A7AC4514B3EE341C15,
	JSONTensorShape__ctor_m945E852B3801000FA7F77FA2CB3F8A795C0C7448,
	JSONTensor__ctor_mD294CB63AA714E86E8CEB3F15D0DFCFDBC47C432,
	TestSetLoader_Load_mD98CF3853DCB35AF13BB2C498F7685A8CCA19DFA,
	TestSetLoader_LoadJSON_m04E369BD9B8EBF812D915676388138BACAEC276A,
	TestSetLoader_LoadRaw_m18414B84B82AC5F2EA5EDA893E8A5FEA0344B6E2,
	TestSetLoader_LoadImage_m7A03F32F2E4A719AE23EB7A5ABDAB0661976738B,
	TestSetLoader_LoadFloatArray_m3E86DCFF8735EF81150A28672CF3E3DE8F5B93F6,
	TestSetLoader_Open_mE785C76CDE8B5240B45729C20AAD370C4F5C1289,
	TestSetLoader__ctor_m28A932BDA9E3C117D5B8FCB5B5B171BDF96322FA,
	Layer__ctor_m0113B1EF77D9F6F56CA31666809F5A21010B46BC,
	Layer__ctor_mE9AD6E4FBBE90CDC1A842E8BD17E60E665E0D2C8,
	Layer__ctor_mAE102D0049A8C1C45F21A0D6C0DBD48E9277D16A,
	Layer_ToString_mCA808A7B1C379C7F48D42005A82EE23BA73C1B8E,
	Model_get_Warnings_m8D1A5B18F207686B74DB2DC5D4AF04A68259851E,
	Model_ShallowCopy_m94698A04C5D0E3E54FF37E351306E6AA2EEF7B29,
	Model_ToString_m882688E531F8E1E4C3C43EC6C33700B239484ABD,
	Model__ctor_m568A74FF783B366528B569149E19F22A3070DFEB,
	ModelMetadataExtensions_GetTensorByName_m573DE9BA45DC6B9A10A58A47B8EB04C0F7E4181F,
	ModelMetadataExtensions_GetShapeByName_mDC4B400A6E210E71459451E110A53D2709716292,
	ModelBuilder_get_model_m2EC44622D90519F901EBF52230A60608E0192424,
	ModelBuilder__ctor_m0419DC0550766B26DF7D5B66ABAE252384B9AD6D,
	ModelBuilder_Input_mAC404919844166213C636A14AD237A9EB70427AE,
	ModelBuilder_Input_m2ECE20E332036C4D5FAAD6C53B1CF05C259D7647,
	ModelBuilder_Input_mCCAB6DCA685384E4980429B61A89E6A2F5D987AE,
	ModelBuilder_Input_mA333BE257B22454794AC7CCB87E8CE866D68B46D,
	ModelBuilder_Output_m385A4E78839175058DB2A3A67EA867A3272EDD39,
	ModelBuilder_Memory_m76CBA7D4BD1CD59649CEBC3178AC4051A09DB813,
	ModelBuilder_ResolveInput_m663256D944518DC5F04DD888757B0E57EC884B2E,
	ModelBuilder_Const_mD2BE02BE238EB6A3361719B67A7C07FDCB07EE08,
	ModelBuilder_ScaleBias_mEB0D1A3122C0C214CB8A999B16503CFB517D659A,
	ModelBuilder_LRN_m1B583D6B8ACB27E5553C18AA778C0E2DF6612BCF,
	ModelBuilder_Normalization_m1E25391C4F307C3009EC0B5E46F43E1B7A678CB4,
	ModelBuilder_Dense_m8520C8EEEE62932644804706FC73A335345DEBB5,
	ModelBuilder_Conv_mEAF08959DEB3F9BD0EA45F090393AA517FC65235,
	ModelBuilder_Conv2D_m80135444AC52D1CADF78E15072971940F574E70C,
	ModelBuilder_DepthwiseConv2D_m7F7E348E1FBF402177E492C0510DC718162C326B,
	ModelBuilder_Conv2DTrans_m234ED626112398E565B120B6CB568DBE86B83569,
	ModelBuilder_Pool_m9CF31B2F6D0526DC1130CD436E61DCB098CCF406,
	ModelBuilder_AvgPool2D_m9E81A66FBBA2C38B8E5D2D17C47E9835A3DE7066,
	ModelBuilder_MaxPool2D_m4C783DA659A9DF75B408516A70A523EBB17AA5B0,
	ModelBuilder_GlobalAvgPool2D_mF6933A81F3D8D38BE1C846F10E37357C445AAD17,
	ModelBuilder_GlobalMaxPool2D_m093CE1CBCDFA4A92453B8789500F5459FAA87EF1,
	ModelBuilder_Upsample2D_m4E970748516DFB4C9FDD5C5A226333ED1589851C,
	ModelBuilder_Upsample2D_m8E9EC95A91C9558E1A9E5B02F0D3C75926E62253,
	ModelBuilder_Resample2D_m14A72326103EC89A6823BA38968C65FE8E372CBA,
	ModelBuilder_DepthToSpace_m2260873CC481500A731A754D0B00C538426EE16A,
	ModelBuilder_SpaceToDepth_m1AB61D72E9C8F141FDF05FA4DC22D31F6D0DE479,
	ModelBuilder_Reshape_mFA4F81B0D0F75884EF7245723871B4974B4FCA61,
	ModelBuilder_Reshape_m5A6E53DEE4BA34054D72FBE9CDB808593FA7D70B,
	ModelBuilder_Reshape_m1ED2D394475D370E1D82975A0B27C27CE44F8E87,
	ModelBuilder_Expand_m2172CEFB25C5B45A8E06F7E1EC2670E429A2D173,
	ModelBuilder_Flatten_m33B41BDD6545E9A73DA472B9988FD5813D079FA3,
	ModelBuilder_Concat_m93E9D8FBB9101FF143C41D191242100AE3C3596A,
	ModelBuilder_StridedSlice_m199025259DC16F2B06E6E89878BCAE9867C4A270,
	ModelBuilder_OneHot_m14F8C5157083AE855B7CA6BA7A2D03F25E4E2C03,
	ModelBuilder_Activation_mCE56F9ECEF9AD8C5D98B1E1883A60525B980F8DD,
	ModelBuilder_Identity_m888EE257C8D81EBBBDF0D75C9DAC55FD88B07DD7,
	ModelBuilder_Relu_m2EDCFCEDEE61B3A7F1A3CA16D348998A191288D8,
	ModelBuilder_Softmax_m076F3CCB8DC0B551C1D2F855616B2C8AE318F3C8,
	ModelBuilder_LogSoftmax_m6A0A0A0E7D97BCDC7BD75D10AA63A5149E0A0752,
	ModelBuilder_Sqrt_mE1E8D59681639D18DDE6869B6233602553F3133B,
	ModelBuilder_Tanh_m9043B0C082E96EA5784276885AC09335CE4C8E85,
	ModelBuilder_Sigmoid_mFE1D7E573F027A0D42E13A7935014E1DD5D56756,
	ModelBuilder_Elu_m1036DFD33F816C7601D1181BE99484A97C9B2850,
	ModelBuilder_Relu6_mB46D89A24EA06AADB461947E28FC5696D52962C3,
	ModelBuilder_LeakyRelu_m65123086ECC85F430646F3890E6566FED6F043CB,
	ModelBuilder_Selu_m4F4F7331F99FDFB33C1FD587964AEE0513409E81,
	ModelBuilder_PRelu_m8EC6521E8B25E07280F85F24CB21C3FE7DB1E741,
	ModelBuilder_Swish_m0E8DEB8109442C24B65A1A50D9E2C8D8213B4179,
	ModelBuilder_Clip_m7659EF6E0D899BB1AA816DF5208BCEC0FF91BA2F,
	ModelBuilder_Exp_m16F29AEF5C816F6F0C403F6B5513D5D2998A02EC,
	ModelBuilder_Log_mF207E4ED144B4B95373CB910CEDA4D6048B1E582,
	ModelBuilder_Neg_mF1721A430ACC32A3FF72D5991E580B59FFE4CBD9,
	ModelBuilder_Reciprocal_m6DCE8C21AE33302EBA1427505E5568D971E8317F,
	ModelBuilder_Abs_m9AD3BA646CA31298839E252F148E844E864886BE,
	ModelBuilder_Ceil_mF89167CAAD2523B86B82047CC38079BDA9A9CAFF,
	ModelBuilder_Floor_mD8E9C5B49790C74931A24CA110551496584459E3,
	ModelBuilder_Round_mB5B20118CBF9038F5C248DB3BA890B38631812B0,
	ModelBuilder_Broadcast_mE5E8D8F335A3ACC22CA3C1E6053A8C5BBDB6F1C0,
	ModelBuilder_Add_mD062A14CBA5A6AD1C05B090B150C3F7D05B7AF13,
	ModelBuilder_Sub_m3B1CA4A1B8A19BDFDAB098CCC98104F87306BF0C,
	ModelBuilder_Mul_mD919B0BD204D3D94C94471696066973A66291722,
	ModelBuilder_Div_m510635BBF640ABF2019814159115B763FCF7F60D,
	ModelBuilder_Pow_mFB02C03C48CBE00C6424320D73267A7915F81E8F,
	ModelBuilder_Min_mA7A9043F9758064A419B3A3F4032B4F54DF73956,
	ModelBuilder_Max_m4A44FF85A8D77663762648BA3263269A04416C3A,
	ModelBuilder_Mean_m89C07FDEC4C22CB631AE701E452A45018BD87BAB,
	ModelBuilder_Greater_mE14E0AAC222F4F212E6C30897D977DFBB3A4E65F,
	ModelBuilder_GreaterEqual_m7424B03560A8DEC4270BD6F335CCC9E15BA33FAD,
	ModelBuilder_Less_m6E2EF46610B483ABADEEFCAA617EEFD076D75506,
	ModelBuilder_LessEqual_m6093A63B1B0E29A523D724D54EB44FB47B39C045,
	ModelBuilder_Equal_m90DA43175A84ACBC3BB5D407FED7BBAB909EEA9D,
	ModelBuilder_LogicalAnd_m891343C695F482E04C6173E0F354006F7BFEBE21,
	ModelBuilder_LogicalOr_m85B41937C2C3F7ED57191F765263DEF8EB95A0C8,
	ModelBuilder_LogicalXor_m1F29E168F998690D6FE6D0E62A55DFFC395EC97A,
	ModelBuilder_LogicalNot_m2847D81F190E26561E4DCB4619055C04CA42AE24,
	ModelBuilder_Pad_mF05082ED3993BAC19446B8A0E482B485D0186F91,
	ModelBuilder_Border2D_m20C9CB1A82B07A0534D8D995465F50BE31E220CF,
	ModelBuilder_Pad2DEdge_m49B21509624F180887F8BF659A65FEAE99B0B52C,
	ModelBuilder_Pad2DReflect_mA22FF2C1F8BC424D7BAA9168498093261AA5D6DF,
	ModelBuilder_Pad2Symmetric_mE6F19427BEBCD323A49617F0C8B440ECFBE1D62C,
	ModelBuilder_RandomNormal_mCBCCA4A6B784CACAD44EF6BB597CAB23AFB064FF,
	ModelBuilder_RandomNormal_m4CB46E27D5B8820CECC8B0500800B2D767911567,
	ModelBuilder_RandomUniform_m143739905393D3EFE812496BE2BBBABE8B362E56,
	ModelBuilder_RandomUniform_m1E3BA2DD86E3B58B49A175516FCE523210336993,
	ModelBuilder_Multinomial_m6637E3702FC9DB64D3688BDA319916879026E6ED,
	ModelBuilder_Reduce_m33AC8BE567E702176750909B3DF72F75BFA418AC,
	ModelBuilder_Gather_m068BD1DBF4B9C8D3F2EA6B7F3EDC8873BE0FE613,
	ModelBuilder_U3CConcatU3Eb__35_0_m314187E5887EB280573AFF38C0CDFD6E3D607B86,
	ModelBuilder_U3CPReluU3Eb__50_0_m2B777C7F75BC631C9E286AC90932DD1157DD2AB8,
	ModelBuilder_U3CBroadcastU3Eb__61_0_mFE8693E24211D45DE902741B6225283A3D8578D7,
	ModelBuilder_U3CGatherU3Eb__90_0_m7CC4CFB690770A3BBC348B853943749B3CF4BF4B,
	ModelLoader_Load_m9375DAD92EAE6E4B2625514328BC2D68DD53C159,
	ModelLoader_LoadFromStreamingAssets_m22EC31BA7FE964BB3F5B72C2CE84429A2DEFAE1C,
	ModelLoader_Load_mD2D753F3DF9F42F25108D9AE8F1A91A8D8B32DB8,
	ModelLoader_Load_m8DF324632A6F815C6307D055FEFD76CB0A5C4E63,
	ModelLoader_Load_mB0A0BFDABD7D672C4CE712F2E43FC7977D68D1B4,
	ModelLoader_Load_m95795739442147807B0E92DB56FE1C4F5A9CD96F,
	ModelLoader_PatchLayer_m9FF020F9C143C2A86354831E2567D31232139F88,
	ModelLoader_ReadInt32Array_mF73CE26F70C79B81BD89ECFEA4FDCAB025587F43,
	ModelLoader_ReadString_m7798E612AA638016C9D580339B0874B4A04E4B0C,
	ModelLoader_ReadStringArray_mF254A17722EFE36EFD9542990137EF89516CF219,
	ModelLoader_Open_m579C886FFF13A6587F9D03D2EF52E9F36A4E4F63,
	ModelLoader_Open_m7DC5D3D6AC2618EC40AA24DFDA296120E32828FB,
	ModelWriter_Save_mB7CCBA8973CA37926B51271919C595E44E540E7F,
	ModelWriter_Save_m2B184065F3BB2EC19F0AA585DD4115A6ACE8DD9D,
	ModelWriter_WriteInt32Array_mE6F7083F1DBB8896683AF1319642407791DC14E4,
	ModelWriter_WriteString_m0C4C15BD1132B04B0E13AA7A48A154AEB07276BD,
	ModelWriter_WriteStringArray_m579E453A70E4F4AFA17F05A925468077A591736D,
	ModelWriter_WriteStringArray_mE61469BC3046895E36DDDD5199B3C75345347B8C,
	ModelWriter__ctor_m53545E764BF9627070D578DD075F713570B376E9,
	NULL,
	NULL,
	NULL,
	NULL,
	BLASPluginFactory_CreateBLASPlugin_m33C51D0609037137512CCEBF23CF4DE272F0CD4E,
	BLASPluginFactory__ctor_m9237A7B0880050BACC2BC7698F8080175D82E7FD,
	TensorShape__ctor_m0BF4DC124E1A4A580C0BB3E4A40AB2DD6A3F8A79_AdjustorThunk,
	TensorShape__ctor_m8BA4D972B76A2C61A1C8FE09FC156EFE1FE972DF_AdjustorThunk,
	TensorShape__ctor_m653A60810E4A6757EAF73F4592E581BBD3253F51_AdjustorThunk,
	TensorShape_get_kernelHeight_m99A770D3402514DA6CF1BB3C3B403B912DF0F953_AdjustorThunk,
	TensorShape_get_kernelWidth_mB241B0ADE1C641FC5520A1CDC2917B64B414F9B7_AdjustorThunk,
	TensorShape_get_kernelDepth_mE3E515992DBB628776822C33B8BA42E62EC38B6C_AdjustorThunk,
	TensorShape_get_kernelCount_m8AB275FAD017EEAA741A7152DF36CB85FE79935E_AdjustorThunk,
	TensorShape_get_flatHeight_m9136DFB5E1E912782CFC6FA483ACDF5D6994E4D9_AdjustorThunk,
	TensorShape_get_flatWidth_m4759D8299FBD8EB77429CB6B730D725FB8C32232_AdjustorThunk,
	TensorShape_get_length_m0E6EFF741AB7E81FBFE9036BD444767F592C2D50_AdjustorThunk,
	TensorShape_get_rank_m9DD3ECB30E340748B5098BE3167C9C646AFCED19_AdjustorThunk,
	TensorShape_get_dimensions_mBE0CEFAC9C56E05AF97DB593418081A95BD77AD8_AdjustorThunk,
	TensorShape_Axis_mB502AFDE16F4B3B47EC870253D47CAB30A0FF17E_AdjustorThunk,
	TensorShape_GetPositionsFromIndex_mFC3960C13C1FD45EFB95763088DB152D1ECCB323_AdjustorThunk,
	TensorShape_GetPositionsFromIndexNCHW_m01F54F07E0F58FC91EA59223C66E4A3FF420D192_AdjustorThunk,
	TensorShape_IndexWithBroadcast_mCF08E6F108761DBEEFD731D45870097BE887D9A5_AdjustorThunk,
	TensorShape_IndexWithClamp_mD87181593B5BAFBAAF787EA18180E82B05AEECFB_AdjustorThunk,
	TensorShape_Index_mA2BB56A2FDD49915D0DCAB8056CFEC4CEB692AB8_AdjustorThunk,
	TensorShape_IndexNCHW_m397497F324AB9A6A33816AC7E244C6DA28723503_AdjustorThunk,
	TensorShape_Index_m8DCA420C3AD6CD866DFCF5142CC058FBF87A9FA3_AdjustorThunk,
	TensorShape_get_Item_m6314C15D1EF0C24B83411E2CDFBBA763FD8FAE56_AdjustorThunk,
	TensorShape_set_Item_mFD5E4C43387CF7708B7891EB7974D934CAB97132_AdjustorThunk,
	TensorShape_ToArray_mC5BF49C3EB56F65A04BBBB44A245BD067749FEAC_AdjustorThunk,
	TensorShape_Squeeze_mDC3AF39B0250207B46FF4D2B3AAA9BDA3525718A_AdjustorThunk,
	TensorShape_Flatten_m1A167E251B9A7B4538CB4FF3DD5D52D5EF7F8C57_AdjustorThunk,
	TensorShape_op_Equality_m6C0B53F31FAAB7FE3B04377B188B2FA95AF99FD9,
	TensorShape_op_Inequality_m6D065987D38A681AC5EB5DFF43CD69D156F4453F,
	TensorShape_Equals_mFF90A000D379ABFBEFFEDB4CACFBBB6E66860146_AdjustorThunk,
	TensorShape_GetHashCode_m33766A681B772D9331BE531C8F263CAFB9016ED9_AdjustorThunk,
	TensorShape_ToString_m26063FE7AAE8CB3A04DA0987CF28E65BE41BD6AF_AdjustorThunk,
	Tensor_get_disposed_m2314E029F0F5F2F3D831ECB61B61957E6DFFBB70,
	Tensor_get_allocator_mB0DF138994207FAE4FC8B7E4BED9808EC5186E62,
	Tensor_get_batch_m3C2CEC86B81F6BF7810D20AF3C324216CCD5E88B,
	Tensor_get_height_mDB4C4767608AB9E40711DDECCC68538FFDCA4244,
	Tensor_get_width_m34429D2D4C0A14B92CA30BE0BFE5CD2B5FC439B0,
	Tensor_get_channels_m07EAC8516BE7DE624692F4F26B8B2046E8FA06FE,
	Tensor_get_kernelWidth_mFF29DB714CABDD33BFA1B5311D1F4255AB768D4E,
	Tensor_get_kernelHeight_m6B8EAB2AA107A983175935733274EACB0B0BF5CD,
	Tensor_get_kernelDepth_m0CD2678A17B0EF4BC64D3ABF0A7A85FF4914C5F9,
	Tensor_get_kernelCount_m913D297D51F3503F19C53706F779167463948B5A,
	Tensor_get_flatHeight_mD4F983BA8D994F5ABD49ABF09C6D7FEC1181C8FA,
	Tensor_get_flatWidth_m8A615A6EF86BF779B545DF9CB128ABFB2608C043,
	Tensor_get_length_m66D9F2D6E1BF4DE201FF4118D5B3B3C000A59A2A,
	Tensor_get_dimensions_mEFBBEDD4BCB05BF033CF2E80871D27B64FA62A85,
	Tensor__ctor_mF814112783D5C5379B0596ED5127CF0A5678F170,
	Tensor__ctor_mC1C625B12BD86D136AB8AB9C3BF1A6CF84B2492B,
	Tensor__ctor_mB684544555A5095209E9D448C5C48CFF76225396,
	Tensor__ctor_m9509D977FF1BBC96D335E5EB0D9B89C8BACDB45B,
	Tensor__ctor_m8256CF21EB915EE65A521DA61FC5DB118C1B3BC4,
	Tensor__ctor_mD7453E954B6933301428784E1AEAC7461C23A5B2,
	Tensor__ctor_m730DE4F410F7F4C8ECBC82B0C7E7CA28FD11BFDB,
	Tensor__ctor_m2BBF8AC3E11563EAF06B233F692C3B46BAA643D2,
	Tensor__ctor_m89D584D9C54B7D73C8C826CE165BC77A80EDF9F6,
	Tensor__ctor_mE40292E15E10599F41A887A053DDC5ACE847E2FF,
	Tensor__ctor_m0C146DCFA8B6D11494FBBAF138BDB4B6B1705BF4,
	Tensor__ctor_mB22A921C21D0945DB816FDEF8C23E0CE6A372A51,
	Tensor__ctor_m442A3D8D493AD21ABE63804D05AC9FB5230C1FA2,
	Tensor__ctor_mB0C0926C826F017E5D5BD2AD2E44B9FCD2776641,
	Tensor__ctor_m1FCE7D65854283285CF18B3F6B8A33187A40F109,
	Tensor__ctor_m33B07B865D18CED9F7B946128F02FAD3F9131A1B,
	Tensor__ctor_m98E694828026DB17027AB90B44636F47F217CB83,
	Tensor__ctor_mACAA9BDDDEF8473560F86DD212A03FE1BC6A2E41,
	Tensor__ctor_m3358F696C6415544092A04E529760A83B85C5DCA,
	Tensor__ctor_m065C1CE4052681575B69C58254E1AD8D296029EF,
	Tensor__ctor_m9E64DF4160E86CDB1206D89477810ED92E855FAA,
	Tensor__ctor_m8C1A727EA6863806053406EC07E564DC9E0224BE,
	Tensor__ctor_m9C2133EF0B9ACE97EE8F90D5FA6A52F651CC2606,
	Tensor__ctor_mA171ECB870E1A37329F8C5F72A71667F9C491936,
	Tensor__ctor_mA251D48CA9E807A783BC21C4C6A3991D2348351C,
	Tensor__ctor_mC57D06AAD06D7E4D6ACEBCDAFAFEECB75E4F519D,
	Tensor__ctor_mF4837EC21202C330A05E4AA19A3957E338FDC98C,
	Tensor__ctor_mE8C574CED324311041FB8438CA5DE76B1B84A034,
	Tensor__ctor_mD860688BFC9EC4A4E58F49F6C1BAD193F0B404D2,
	Tensor__ctor_mD81F8204154D1A5F4CFEDE9251B415141F9E9B52,
	Tensor__ctor_mA1FB07675C8D5604A541EF3731D529756773C080,
	Tensor__ctor_m2294349BDD3F0405E7D634AB3FFCA27E5A3576B7,
	Tensor_Finalize_mC69FB70D2635F237A1B25BA2E89306520EBA6759,
	Tensor_PinToDevice_m7C25626FC768541FB9CDD4C94A711F2D4473A4B9,
	Tensor_UploadToDevice_m106B2A3D50A560C61CA5979F36D340DFC5DD6AA6,
	Tensor_AttachToDevice_m703AFF9FDD0360C8F223BFAEAE4621B5BD782BB1,
	Tensor_DetachFromDevice_m622650E9178A033D15E2D58A9EE95DDFA7862DB9,
	Tensor_UploadIfDirty_m78D7EDD8E38537DBAA621FD6D82C2F511ED709ED,
	Tensor_UploadAndInvalidateCache_m9AC419F6CC5D97879CDF82EC6D469AFD3500E2BF,
	Tensor_PrepareCacheForAccess_m6FA524DBE3DA8AEB89B6039F86531B62795C0EEE,
	Tensor_FlushCache_mC2A078E318B86F311C4F912C36F4C54DBED98AEC,
	Tensor_ShallowCopy_m43A1EE06E701067155C9C1530293EC7384EC6BF2,
	Tensor_ShallowCopy_mEE41B1692B0646CAFAF2EF109262F41A1985F91C,
	Tensor_Flatten_m26C61D3F6AC6B9EBD5929B9781FEE359871E48CD,
	Tensor_Reshape_mBA7A63C711459999A2A4C288C345333022BA9C72,
	Tensor_DeepCopy_m0E16718FD34D7430ABAA336E2EFBFBB4272C935C,
	Tensor_TakeOwnership_m0C443822D19557C486E213CA09450BCE8A3FF8FC,
	Tensor_Invalidate_mA5121907ACB248D0FB85AA02F96B88400D0E5EFC,
	Tensor_Dispose_m3824B6BE208447241DB5021717586F1D35CB4623,
	Tensor_ToRenderTexture_m265100943C02842A9F067D1EEA1E2520F8188D51,
	Tensor_ToRenderTexture_mC3068786FAD4542612419B8254F7560671ABA4B5,
	Tensor_ToRenderTexture_mE9CDC69F94AC04DDB0C52055BB69F97E301EF07B,
	Tensor_ToRenderTexture_m9F02151FC631896EBA4287A26D85F1056CA171D4,
	Tensor_Axis_mB2E6968EEC9A716252DB7EAB68AB7075DB5876E9,
	Tensor_Index_m0464FE8122A34FCD3B8B4DAAFAAF92D26800EA86,
	Tensor_IndexWithClamp_mCE8E0BBE040711BB6EA05A4DD99FF43AC9843526,
	Tensor_IndexWithBroadcast_m6A2AA97C2CADD175375676D8DD9C396C5E412CC6,
	Tensor_Index_m35D8876AC058D7F39B5DF2F24D2F12B64B200DBC,
	Tensor_get_Item_mF946C4DC829FBD72D2EE2FB8F40482812B058BA7,
	Tensor_set_Item_m250981F1526FA6D55AABEC0EFBB26960EA3467DB,
	Tensor_get_Item_mE75F5EECD0AA4BE3CE54BD49F802665897D92505,
	Tensor_set_Item_m9276BC5144FD6E7A091471F1E7696FEF5AA3497F,
	Tensor_get_Item_m1375C224B74F6F8FC1480D6B6A344B393047BAE8,
	Tensor_set_Item_m5A60AB58C770B92AB8B257B7EF0BB84D16025004,
	Tensor_ToReadOnlyArray_m6F7D897AF4134C58583DE0B254800C751A1A9422,
	Tensor_get_tensorOnDevice_mAFF055D842399BC250E160EA44A7171341578548,
	Tensor_get_data_mC956AFA85D5D9E67A50388BB27842584B2BBEE21,
	Tensor_ToString_m117C71559F4B5756B648D20F13AD47566207CBA7,
	Tensor_UnpinAndDisposeTensor_m7ED7B1BE134835A00E47F8EA2189ED7968E82A55,
	Tensor_get_readonlyArray_m6DC30563034900F9320B5EE16627CDEA457E19A6,
	Tensor_get_readonlyArrayOffset_m4414B1DFFEBC2B427DA12E8634D4F394DAFA87F7,
	TensorExtensions_TestInit_mB54CBCE0906F012508F1C9AB2E9B28854EE72023,
	TensorExtensions_TestInitCos_m00A33FC2EB6490B0A93A593DE42E5E9AA668CC30,
	TensorExtensions_TestInitValue_m648E80CF2A515CDB1B140439A0B9164C0851CE49,
	TensorExtensions_AsFloats_m8AF01B7D45FE3D9750ABEC76493F34215A970569,
	TensorExtensions_AsInts_mBD47E2973CF2C7F0F026ED223914AE4BAAD890A1,
	TensorExtensions_AsLongs_m96E304B31759C101F9BD26B493B1E4E4DE044934,
	TensorExtensions_DataToString_m0F6FB99394BE4CB829B5CA192D580FE732948DB4,
	TensorExtensions_Print_m926C9372A74F3ECABAB1B1111FDCB57EEA18A40A,
	TensorExtensions_PrintDataPart_mA2BDBC50C001B03A4DAE849C3879568F17DA5137,
	TensorExtensions_Equals_m46A4DE7ED2D84AF1CA7668D90A2E07B0F546FBFB,
	TensorExtensions_Approximately_mB657A4523BD91150B880E8D76D3701A69BAD8E0A,
	TensorExtensions_MaxDifference_m19DAC00A8DC17F60331EB6A113505E84A20495A2,
	TensorExtensions_ArgMax_mB69952F88189927B0D7B4F36BB4C4A4214CBE659,
	TensorExtensions_Reshape_m01D02376F371273A88AC5EB621EFA2C986756F2A,
	TensorExtensions_ArgSort_m7F7C468AFB20A1CDD01E20EBAD25C781AE18EE23,
	TensorExtensions_Gather_m5B1609EA72FE213F1C2D142712A48127F091E5A9,
	TensorExtensions_Concat_m0408047AA93B8F2F862E2A579AC4EE7DD9976ECC,
	TensorExtensions_Concat_m6FF6A772E6ACF08A9EE1D06A02B0B6120AB1B4FE,
	TensorExtensions_Max_m4E61C6B8771F58EBE00335C2A26535301B97B894,
	TensorExtensions_MaxShape_m743562E980B7A6D5C106EF22F1025D21DAD8A7EB,
	TensorExtensions_Scale_mBC1BCBB5C806E86A77BB8988C89619DE0E97637C,
	TensorExtensions_Scale_m7153D8026F8FDF7AEB82ED06E799A5E6956B7085,
	TensorExtensions_Reduce_m717B4E5E44A94055ACAFEA166F721329182FABBF,
	TensorExtensions_Reshape_mC516B6211A650D0CBC0E6AC9B1B9A8B14D4BF6EA,
	TensorExtensions_ApplyBorder_m3D502CBDF981A70F6883374BA2F4BFE66355C46E,
	TensorExtensions_AdjustPadToKernel_m4182C2AF06298C98E89DD29A4DD8830B72534600,
	TensorExtensions_AdjustPadToKernel_m48BEDA0BA6790364B0F53E0D8AAADBF0BD5F6722,
	TensorExtensions_AdjustPadToPool_m9BACB2D375C674FA759102497CAA135567FC8348,
	TensorExtensions_AdjustPadToPool_mBE9862221131D1FC6C15B38F423D651DE97DB59E,
	TensorExtensions_AdjustPadToPool_mEBBB072E10E6737EDE929127893AF2A6C7F7E3EB,
	TensorExtensions_AdjustPadToPool_mF42D2AB242CECE952D97EE1A0C60725D2C82D651,
	TensorExtensions_ApplyPool_mF3FCABB1DF8325D12DA2BD5A2C341ED0DD1E4F37,
	TensorExtensions_ApplyPool_m13729C74897BAE7218B2F2559CCD74C56A455F78,
	TensorExtensions_ApplyKernel_m702E9F6A59F7F1B44013CC7649417315719F6D34,
	TensorExtensions_ApplyKernelInverse_mA6D360297B225668E86CC01BCBD78D978569CE21,
	TensorExtensions_WrapIndex_m45728DB1BA1926FAE9BD83DA83B5622E1A37974F,
	TensorExtensions_ApplyStridedSlice_m776373FA31EF4E41DD2B440AE199B82F513BF4AD,
	TensorExtensions_CreateFromTexture_m19861D9BCA4AFCDEE94A5B67CFECDC51FCDA56A2,
	U3CU3Ec__cctor_m5B07384FDE5FCBD3B8AFCF2EA83E866CE8EDEBD6,
	U3CU3Ec__ctor_mCF3EAA1A3FCCE2BA0C90F76330FE55205AF93C16,
	U3CU3Ec_U3CPatchModelU3Eb__5_1_mCB533DB36C991D9244F7524AEC2E2436E7534E87,
	U3CU3Ec_U3CPatchModelU3Eb__5_0_mB5902275E2C57D83BA6719E3977F36BDB185AC61,
	U3CU3Ec_U3CValidateModelU3Eb__6_0_mC90F0E8F0B12CBE3C261426640B486165EB20ECB,
	U3CU3Ec_U3CValidateModelU3Eb__6_1_mA79AD3369EA6EC67DB9ECA4B89D13E8F9A1B968B,
	U3CU3Ec_U3CValidateModelU3Eb__6_2_m31BDA037DA096C9A0E6AB31C3DBE2ABF5750B5B9,
	MatrixMultiplyJob_Schedule_mE2613020C0407F07FA2D787E6E3A74776DC78F85_AdjustorThunk,
	MatrixMultiplyJob_Schedule_mB2F50A367C64B8081EED57973869EC4C2E8CB902_AdjustorThunk,
	MatrixMultiplyJob_Execute_mEE40FA3261F247A90DC34B5331B711BACA972F37_AdjustorThunk,
	MatrixMultiplyJob_AllocBlock_m83C0F5EB9B444FA621A2D1E73C69526FE4E78846,
	MatrixMultiplyJob_FreeBlock_m471663DEEE869D9997A7D211BDD679E8F9FBED22,
	MatrixMultiplyJob_MultiplyBlockUnroll16xh_mBB8BC7CF8808071DD31ED3B7E8F57E0E4C6CD04B,
	Im2ColSliceJob_Execute_m068978FC796FEB60AC0F3C4C3FE9346C13DEC6DC_AdjustorThunk,
	MaxPool2DJob_Execute_m305DAAB86187BB89159F20FA79426003D4E9735C_AdjustorThunk,
	AvgPool2DJob_Execute_m1474F116369A3229CF64A76ECCCDDEF0C9C153DC_AdjustorThunk,
	DepthwiseConv2DJob_Execute_m0A16D289D5F4475D98988A34B93DB1766689C602_AdjustorThunk,
	PReluJob_Execute_m49FF3A5D67CBBF6772FE4FA98BFBBB4245B18752_AdjustorThunk,
	PReluJob_PRelu_m5717B1FD912CA3BE2672E74B010109D14C89E47A,
	ReluJob_Execute_m896640BBD7838BCBDB2AD2CFE6D57D367AD10E8E_AdjustorThunk,
	Relu6Job_Execute_m2FCB4F1A670B9C398E234824540EF15395A6A010_AdjustorThunk,
	LeakyReluJob_get_alpha_m3A42525C33B40A6AFC8711C7A3F232D15EFE64B3_AdjustorThunk,
	LeakyReluJob_set_alpha_m18B4264DB85C330CAAA616400EEEACA717A821C7_AdjustorThunk,
	LeakyReluJob_Execute_m9465B110C31D1B5D3ABADB6CB4F04CAD17BE9CAF_AdjustorThunk,
	TanhJob_Execute_mD9E8B9DE894C3BE90516FDF2339F4547B4F75DDC_AdjustorThunk,
	SigmoidJob_Execute_mC7D32A0910499A087B6E23C5BC8382A9F5B96ECF_AdjustorThunk,
	EluJob_Execute_m51B9BC9B8C2FCAA2E3E81AFE16E56E2160FBE2D9_AdjustorThunk,
	SeluJob_Execute_m8F2BBC73D90D656BA0DD2705F6D7B70C82973321_AdjustorThunk,
	SwishJob_Execute_mA0A2ED0B660595166CFE67A9B60FD5E388AF6D42_AdjustorThunk,
	SoftmaxJob_Execute_mECA5DBB10755824D2F00F9D07CF1DA5FFC8F3805_AdjustorThunk,
	AbsJob_Execute_m8EFD87B3C09435CFF6E891B2379643775D2191FE_AdjustorThunk,
	NegJob_Execute_mC17D281BC46597ABCC699049F9B2609A92EF3F9B_AdjustorThunk,
	CeilJob_Execute_m70E0EA81F9B3A800E0A2D9B875915543BBC47D24_AdjustorThunk,
	ClipJob_Execute_m407AE0F9ED9458C42576D98F190D87AA07F64ED7_AdjustorThunk,
	FloorJob_Execute_mF97FE27A1064C69B3DB6F28AFB3938E8121CACB8_AdjustorThunk,
	ReciprocalJob_Execute_m718A114B7929540CD6B5C192A02BBBB3E29581AE_AdjustorThunk,
	PowJob_Execute_m7E25960614C9F28535BEB4683EFC761A6437892F_AdjustorThunk,
	ExpJob_Execute_m3E98BB7DB835C9F87F4B60B75E9E689B78CB8287_AdjustorThunk,
	LogJob_Execute_m5A807FACC2F4D7A4DF0CD978F2AC33D23B1E4969_AdjustorThunk,
	SqrtJob_Execute_m45AB0BB94FE8BACB72CB4BD31F72AF958E2B6D02_AdjustorThunk,
	ElementwiseAddJob_Execute_mA0A8F5BE86173D2F01728281DC97AC85D04F726C_AdjustorThunk,
	ElementwiseMulJob_Execute_mD315BBC50DAE0336688A23DEFDBAD8356EA8054C_AdjustorThunk,
	ElementwiseDivJob_Execute_m0E3C427C4BEC8DB219329F5A0BE3B8AE080B95DD_AdjustorThunk,
	ElementwisePowJob_Execute_m4A54FEB4A8BB236FE0B90800BC67937559405C09_AdjustorThunk,
	ElementwiseMaxJob_Execute_mB3FE315E4EDAAC824572A50F2A7B3FB2948B255F_AdjustorThunk,
	ElementwiseMinJob_Execute_mEB0B401774CA2919753DEF2BBDC78AD487678E3D_AdjustorThunk,
	ZeroBroadcastJob_Execute_m5D809D2CDB62F94CAF3DF6073B421D9C05729A17_AdjustorThunk,
	CopyJob_Execute_m252DCAFAFDBF626F4F61DB3866ED19F23BFE0AA1_AdjustorThunk,
	VectorBroadcastJob_Execute_m5EF9B733B0B983A74C205F7DD1426C73372A06EC_AdjustorThunk,
	ScalarBroadcastAddJob_Execute_mE915062A0BEE3CCE0F3AD88157CD43A3C8C1C9F7_AdjustorThunk,
	ScalarBroadcastMulJob_Execute_mE3A135A4D0E0E922803AD84AEB5DD0F61383ABC2_AdjustorThunk,
	ScalarBroadcastDivJob_Execute_mEEAA71283BC212FE67208857D06ED387BEF4D16F_AdjustorThunk,
	ScalarBroadcastBiasedExpJob_Execute_m069A0B0EF112BCF21F7C8E3DF6D7176636C78A16_AdjustorThunk,
	GenericBroadcastJob_Execute_m901DB49B0F51D6C1DC9CE709A97DDDA7F1880BD5_AdjustorThunk,
	GenericBroadcastAddJob_Execute_m9E34CA1671E641B9315DAD68AD94AEA2CCF0C1AB_AdjustorThunk,
	GenericBroadcastMulJob_Execute_mAFAF12884554340AEFA062E6DBAC7DBC8B3F7D34_AdjustorThunk,
	VectorBroadcastScaleBiasJob_Execute_mBBF4B3413D79E8186F9EFE1C11EFBD05290CB58D_AdjustorThunk,
	ChannelReduceMaxJob_Execute_m9270F49010885407E731F7B43A3E14CC5BF497D1_AdjustorThunk,
	ChannelReduceSumJob_Execute_mD3A4964931D6C104CE5F6394A1C94DD010CACCBF_AdjustorThunk,
	Entry__ctor_mA0FEB6FCAAD06C2C898F704CF9059FC04585756D_AdjustorThunk,
	Entry__ctor_m3827CF3A55EFC67C2D734CBB168016FB15932E86_AdjustorThunk,
	Entry__ctor_mD7FFBB06D1DE7626581FC2F405B6965AA1FBE3D8_AdjustorThunk,
	Entry__ctor_mC54D9235FFA6397072665C7E2C3AA8FC10E555E3_AdjustorThunk,
	KernelAssertInfo__ctor_mD376D97C167175B1BC9902A2D1F1BE5ECAC7E34F_AdjustorThunk,
	CompiledLayer_get_kernel_m17FFFBB46A2B31B0C1F1554965FDD12090999E6F_AdjustorThunk,
	Seed__ctor_m6EEB43C4AE8DB1FA805D295AA07011CED05971B5,
	Seed_Dispose_m8B59728B01B258F8F38700D1071E9DA88C097E15,
	U3CU3Ec__DisplayClass25_0__ctor_mF57F4C52B19A78E0C4E8F707AEEEC3495235CFEF,
	U3CU3Ec__DisplayClass25_0_U3CBorder2DU3Eb__0_mA3EA5491818A758FD8516BE607D2609165A73E5B,
	U3CU3Ec__cctor_m9A4B02D75A7797E4E5278F18B68C52D15466FDD9,
	U3CU3Ec__ctor_m37C9701C3ECF9D2509B1635248758FF1E2B4089F,
	U3CU3Ec_U3CPad2DReflectU3Eg__GetReflectPaddingU7C27_0_m8D8DC9B6D557C54EED01131E60F229064E41BC72,
	U3CU3Ec_U3CPad2DSymmetricU3Eg__GetSymmetricPaddingU7C28_0_mD54F530F07171F2E6990D8FAE985FB4606DF01EA,
	U3CU3Ec_U3CPad2DEdgeU3Eg__GetEdgePaddingU7C29_0_m5A76868CE04352D7CE0F0691B429E871F499B7F0,
	U3CU3Ec_U3CConcatU3Eb__66_1_mA8AFAF892555DCA7EE65C61559A7FC21E197D1C5,
	U3CU3Ec_U3CConcatU3Eb__66_0_m93012D8063453FF4BC20C6ADF5F183C784D220D8,
	U3CU3Ec_U3CAddU3Eb__70_0_mBB5D0DFB38627CBB7BCAEB6000F4B133380A5263,
	U3CU3Ec_U3CSubU3Eb__71_0_mFBC97FBF64960134FC688A778283FB666B8D50EE,
	U3CU3Ec_U3CMulU3Eb__72_0_m98523AD8C2DE543B8AC859EB672EC7D5AEEBD13F,
	U3CU3Ec_U3CDivU3Eb__73_0_m9E557DA7B3188DE3D3D9A4F117A82366395815EF,
	U3CU3Ec_U3CPowU3Eb__74_0_mC54424F5BC9D6A8BA76BE0F9E2A458CB2BB68B3F,
	U3CU3Ec_U3CMinU3Eb__75_0_mC692926492AE7F595656F87604A217FCE5A78606,
	U3CU3Ec_U3CMaxU3Eb__76_0_mE6F74C9519C6135C901E2EB9E8300F45C2CE0F7C,
	U3CU3Ec_U3CMeanU3Eb__77_0_m9CE6A3071B3C1A89A26B2888139FD0158678E1CA,
	U3CU3Ec_U3CGreaterU3Eb__84_0_m7378FA7F37457025D37895F9558F9D9F797EA29C,
	U3CU3Ec_U3CGreaterEqualU3Eb__85_0_m31F0006E10C84DAAE1B550A722232CA570E7D22C,
	U3CU3Ec_U3CLessU3Eb__86_0_mD1EBFE2FA3F31426A9146F206E5057840DBFD23D,
	U3CU3Ec_U3CLessEqualU3Eb__87_0_mA6343E5A85EC178B588582573F1E2BF444984B17,
	U3CU3Ec_U3CEqualU3Eb__88_0_mAAAFA2A2314B0EAB2F89B532578B7C0F2EC5E713,
	U3CU3Ec_U3CLogicalOrU3Eb__89_0_mA659F291E3664E4E59B1D4D02F60B48AF46995A5,
	U3CU3Ec_U3CLogicalAndU3Eb__90_0_mDB322FD83D95F64FBF5DBC65973035167F8BF66F,
	U3CU3Ec_U3CLogicalXorU3Eb__91_0_m8726755E8D12E451C4B5225AFDAFF31DBECD2155,
	ConvertFromOnDeviceFormatHelper__ctor_m9FA0081379836182468CF54391AE6B64CB610572,
	ConvertFromOnDeviceFormatHelper_GetNHWCData_mB8B33A403D596FD3FAADB212D5E570738623435D,
	ConvertFromOnDeviceFormatHelper_ApplyConversion_mAC951352CE0FA64E5BD022B4B9D2272184FCA949,
	ConvertFromOnDeviceFormatHelper_UnrolledInnerLoop_mCCD55EAB3A8B607F5287456B2DE313C5BF6F5117,
	TensorDecl_get_ShapeId_m219F763483893522AB17A26DDE0FDD448656CD90_AdjustorThunk,
	TensorDecl_get_InfoId_m1F475A3A72CA490C404DCB65CFD1784D765F60B5_AdjustorThunk,
	TensorDecl__ctor_m575F79E34DB659B1EB06F693452E4A688BF58F09_AdjustorThunk,
	U3CU3Ec__DisplayClass52_0__ctor_m0EF0971FF08780E2ACA63B4E3868DAAD75C8E5D1,
	U3CU3Ec__DisplayClass52_0_U3CMaxPool2DInnerLoopU3Eb__0_m615EBB1F2F4334C08438917B61121519D8B3D9A8,
	U3CU3Ec__DisplayClass54_0__ctor_m625A68BE48D48496004C01383DEFDAE3DDC805E9,
	U3CU3Ec__DisplayClass54_0_U3CAvgPool2DInnerLoopU3Eb__0_m2B7D889712B3A51D39306887A23CA48C92666A4A,
	U3CU3Ec__DisplayClass59_0__ctor_m1C5C87C1DAD3B904B51E436691D8FC7146A5E2F8,
	U3CU3Ec__DisplayClass59_0_U3CIm2ColInnerLoopU3Eb__0_m661AD58227E23CA7E2BE4B90198D29DB1193650B,
	U3CU3Ec__DisplayClass63_0__ctor_m07EF5AF69AB65FE2CD49362469B6A814ADB403AB,
	U3CU3Ec__DisplayClass63_0_U3CDepthwiseConv2DInnerLoopU3Eb__0_m784F3D79942B703939C984EDDA9CCA318786994B,
	U3CU3Ec__DisplayClass64_0__ctor_m3A0099FF1674B30451F7762D9BAD3DE9DC577EB3,
	U3CU3Ec__DisplayClass64_1__ctor_m1CC5970283E95A9690E4DBAAC9D91CF52A631F86,
	U3CU3Ec__DisplayClass64_2__ctor_mA1A889F9E01CE53BBF12C3460C6CA55EDC7DD950,
	U3CU3Ec__DisplayClass64_2_U3CApplyPaddingU3Eb__0_m04E25A7B3CE5722A89879310A4D3BFBC90A7D6C9,
	U3CStartManualScheduleU3Ed__29__ctor_m04FBF5CB992E934F312DE78BA76B0DF46E7AE071,
	U3CStartManualScheduleU3Ed__29_System_IDisposable_Dispose_m4AE1C75EFD2E22D3BCB41286917BD4B8FEFCF0F6,
	U3CStartManualScheduleU3Ed__29_MoveNext_m9F4165055574686A23F3D2194E8CFF2B07FB7E5A,
	U3CStartManualScheduleU3Ed__29_U3CU3Em__Finally1_m9A3ABE27CADFBCE10A687B3B64FFF807A26EF4BA,
	U3CStartManualScheduleU3Ed__29_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m54113142A59D889A310ADB171BDE09A2B2C3DE91,
	U3CStartManualScheduleU3Ed__29_System_Collections_IEnumerator_Reset_mA43528BC5A74C9EF14C730808E783ADD9E12F215,
	U3CStartManualScheduleU3Ed__29_System_Collections_IEnumerator_get_Current_m50394F4EF46E652BA4F9C935901A81C3E5C00E32,
	SGEMMJob_Execute_mC037183DCBDC59F93F0C6A0735CA57F29E288D76_AdjustorThunk,
	U3CU3Ec__DisplayClass7_0__ctor_m6A94119F585BBC676B9EA8205F61EE81EC7ABA36,
	U3CU3Ec__DisplayClass7_0_U3CMultiplyBlockUnroll8xhParallelWithPaddingU3Eb__0_m97605A1207F269E986BEDE04A6C917D0C6F8443C,
	U3CU3Ec__cctor_mFEDBEC254754C87EFDDFAC8A8716246A4A6C29EF,
	U3CU3Ec__ctor_mEBCD037AD59E1CBF44E5336BD23C6AFCB970EB0F,
	U3CU3Ec_U3CFindUnusedLayersU3Eb__10_0_m31601E7F9ACB5AD52A90B5566250AA147E0B2F8E,
	U3CU3Ec_U3CFindUnusedLayersU3Eb__10_1_m26F730C00EDF8EEF8B9E1FB6C24541F381795201,
	U3CU3Ec_U3CFindUnusedLayersU3Eb__10_2_m42B40FD62C66939CC869176CED417566D3D84705,
	U3CU3Ec_U3CFindUnusedLayersU3Eb__10_3_m3F447717907BB2116187B17586233365BC849A1F,
	U3CU3Ec_U3CFindBrokenLinksU3Eb__11_0_m9A6A869A5139DB77B17BFD37EA61096E46858CAB,
	U3CU3Ec_U3CFindBrokenLinksU3Eb__11_1_m08C4FBCEAC9DB497A8834CF8586B097333993BDA,
	U3CU3Ec_U3CFindBrokenLinksU3Eb__11_2_m8F8ED85C6CAA9D4519D2BB10C69C34B2604771BC,
	U3CU3Ec_U3CFindUnconnectedInputsU3Eb__14_0_mF109714DC6A8BD63B619AC4A5CA97945323912D3,
	U3CU3Ec_U3CFindUnconnectedInputsU3Eb__14_1_m94F53A604F9AD4C85F230A813D184CEE0A8F3001,
	U3CU3Ec__DisplayClass0_0__ctor_mDA29A5CB02D0113178215F5B52AD8421C17965C9,
	U3CU3Ec__DisplayClass0_0_U3COptimizeU3Eb__0_mFD4985B64204AEDCC5322CDEA809B71FC45D9095,
	U3CU3Ec__DisplayClass3_0__ctor_m9C425AF4FECCC4062AB98204C9CA6411F0E9AAC3,
	U3CU3Ec__DisplayClass3_0_U3CFuseActivationU3Eb__0_m62EBC7E063A5BFCE884E662C1A2760FCF2083502,
	U3CU3Ec__DisplayClass4_0__ctor_m7026E44243E7AF6D94C9C42380C17DFABBF1ED5C,
	U3CU3Ec__DisplayClass4_0_U3CFuseActivationsU3Eb__1_m5324934F098E0FFFA7C4795B12C5168EB8A1A016,
	U3CU3Ec__DisplayClass4_1__ctor_m52F25F819E729D3FB5CF817DE7899F0F4747FA03,
	U3CU3Ec__DisplayClass4_1_U3CFuseActivationsU3Eb__2_m5F56DC50304DC0CC525E4AA9436E6B30EB9555E6,
	U3CU3Ec__DisplayClass4_1_U3CFuseActivationsU3Eb__3_mA0A7DBE94249FCAA824D52131D5D71FE41ECEB22,
	U3CU3Ec__cctor_m9A072FFF48F54FCE88AB7A44320BD90689B5899D,
	U3CU3Ec__ctor_m63B547872A78B701626DAB8BEC00403CC4F472B1,
	U3CU3Ec_U3CFuseActivationsU3Eb__4_0_mF9BCF5D8CBDF1F0008E7DD7CF2EF8BF89D464F1A,
	U3CU3Ec_U3CRemoveNoopU3Eb__5_0_m4132BFF8A80F0E371D01DFFAE86ABF957B0E9442,
	U3CU3Ec_U3CRemoveNoopU3Eb__5_1_mACDD844808FD70BEDF6BB7D204722A025FBB9482,
	U3CU3Ec__DisplayClass5_0__ctor_m21286BCAA40E25F13D9A366FD55AB36951872B2C,
	U3CU3Ec__DisplayClass5_0_U3CRemoveNoopU3Eb__2_m432A69B4B4DAE787A1767D5BEC0B1115B8F4CC77,
	U3CU3Ec__DisplayClass5_0_U3CRemoveNoopU3Eb__3_mD767E48C57D4858FE091FD8F18CB93CAAB212052,
	Transcendental__ctor_mBBFECB43C56057C8D62CDA82C88F7068A3954A65,
	U3CU3Ec__DisplayClass13_0__ctor_mED8B6C682C0F100ABCDFE23AFCC0091FDEFECD24,
	U3CU3Ec__DisplayClass13_0_U3CMoveToDeviceU3Eb__0_m9F536E5392BBF946ADFEAD451ABAE8D7385B99B0,
	WorkerConfiguration__ctor_mDFB06370060E0E4FAFCF44D15D9C83F95ECC4E98_AdjustorThunk,
	U3CU3Ec__cctor_m43BDF84A3F87CF72B905BD18CAF7EB614D747032,
	U3CU3Ec__ctor_mEAF1C3F046DF2D5BDFAD30CA44E3F1482234A8BB,
	U3CU3Ec_U3CToStringU3Eb__21_0_m754A3F76D388EC042BA9B1E02EAAD0DE4BEAE255,
	Input_WithName_mA9601A1037ACC905A60E664CB346B446D5D4E584_AdjustorThunk,
	ImporterWarning_get_Message_mBB9D010875563A94AA62ED8BDEB0BC3B16985774,
	ImporterWarning_get_LayerName_mE728E2C1B9D35B7A5B0CD0AC66F7D60F6DFB00EC,
	ImporterWarning__ctor_m9B473CD8123AA755C32A040D0F77709907D98475,
	U3CU3Ec__cctor_m64A78FF8A355D4BCCBC24214E897178BE5E0315E,
	U3CU3Ec__ctor_m52444A81E80441CDAED98D3431553FA2A344983D,
	U3CU3Ec_U3CToStringU3Eb__15_0_m9190D0695EB080CEC9C82993AF3EC6247B586D20,
	U3CU3Ec_U3CToStringU3Eb__15_1_m7A99CBBCF52075516E15039F7AE411CF432624DB,
	U3CU3Ec_U3CToStringU3Eb__15_2_m3119E6A3128C28A05C9E7C00C14C6F7581D7169C,
	U3CU3Ec__cctor_mE034B4A900790C7FD64E5940B772877AEDB3F4AF,
	U3CU3Ec__ctor_m5DC769C3210E64FC139187973063A989C101E8E8,
	U3CU3Ec_U3CAsIntsU3Eb__4_0_m81A645E5046DA6504B4ADF64177990B98A113906,
	U3CU3Ec_U3CAsLongsU3Eb__5_0_mE860A1DE3B9BC63B60D37F2973A416720B4B8521,
	U3CU3Ec__DisplayClass14_0__ctor_mC049C64DCDE734FCF7F3885FD20F5B09E58170F2,
	U3CU3Ec__DisplayClass14_1__ctor_mB7429C454FEFEE85B1885E95D8333A4E6BF8D39B,
	U3CU3Ec__DisplayClass14_1_U3CArgSortU3Eb__0_mFB192EB9036F5F53B6FBD359F1516E8DF5798181,
};
static const int32_t s_InvokerIndices[1713] = 
{
	2274,
	144,
	1071,
	1071,
	2275,
	143,
	143,
	102,
	105,
	125,
	125,
	28,
	28,
	28,
	2276,
	105,
	105,
	105,
	205,
	2277,
	2278,
	2279,
	2280,
	2280,
	54,
	2281,
	28,
	28,
	28,
	28,
	28,
	2279,
	28,
	2279,
	2282,
	105,
	28,
	28,
	28,
	28,
	2282,
	28,
	28,
	2279,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	58,
	58,
	58,
	58,
	58,
	105,
	105,
	105,
	105,
	105,
	105,
	105,
	105,
	28,
	28,
	2283,
	2283,
	28,
	58,
	125,
	105,
	58,
	28,
	28,
	31,
	27,
	27,
	27,
	198,
	28,
	26,
	27,
	28,
	28,
	14,
	2284,
	2285,
	960,
	448,
	26,
	31,
	21,
	21,
	21,
	2286,
	2287,
	2,
	0,
	23,
	2288,
	2289,
	2288,
	2289,
	32,
	2290,
	26,
	26,
	26,
	23,
	23,
	23,
	32,
	2291,
	2284,
	490,
	30,
	14,
	26,
	0,
	28,
	2292,
	2293,
	2274,
	144,
	1071,
	2294,
	125,
	125,
	28,
	28,
	1071,
	205,
	28,
	28,
	2279,
	28,
	28,
	2279,
	2282,
	28,
	105,
	28,
	28,
	28,
	28,
	28,
	2282,
	28,
	28,
	2279,
	28,
	28,
	28,
	2283,
	2295,
	2296,
	2296,
	2296,
	2296,
	2296,
	2296,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	2283,
	2301,
	2302,
	2302,
	2303,
	2304,
	2304,
	2305,
	2306,
	2306,
	2306,
	2306,
	2307,
	2305,
	2305,
	2305,
	2305,
	2306,
	2306,
	2308,
	2305,
	2305,
	2309,
	269,
	2310,
	2311,
	23,
	3,
	14,
	2316,
	2317,
	2318,
	2319,
	2320,
	27,
	62,
	23,
	2321,
	2322,
	960,
	2323,
	2324,
	144,
	2275,
	1071,
	1071,
	2275,
	143,
	2294,
	28,
	28,
	143,
	28,
	105,
	205,
	205,
	2277,
	2325,
	105,
	28,
	28,
	2280,
	2280,
	58,
	2284,
	105,
	2326,
	28,
	2283,
	2283,
	23,
	205,
	473,
	23,
	2327,
	3,
	154,
	23,
	3,
	960,
	54,
	31,
	41,
	105,
	105,
	27,
	27,
	136,
	144,
	1071,
	1071,
	2275,
	143,
	2294,
	205,
	28,
	28,
	28,
	2277,
	2325,
	105,
	28,
	28,
	105,
	58,
	3,
	14,
	32,
	2290,
	23,
	23,
	32,
	2291,
	30,
	2284,
	490,
	10,
	14,
	14,
	10,
	10,
	35,
	23,
	23,
	32,
	2291,
	30,
	2284,
	490,
	10,
	14,
	26,
	2285,
	28,
	28,
	2191,
	2329,
	31,
	2117,
	2274,
	144,
	1071,
	1071,
	2275,
	143,
	143,
	102,
	105,
	125,
	125,
	28,
	28,
	28,
	205,
	2276,
	2330,
	105,
	105,
	105,
	205,
	2278,
	2277,
	1405,
	2331,
	2279,
	2280,
	2280,
	54,
	2281,
	28,
	105,
	28,
	28,
	28,
	28,
	28,
	2279,
	2279,
	2282,
	28,
	28,
	28,
	28,
	2282,
	28,
	28,
	2279,
	28,
	28,
	28,
	58,
	125,
	105,
	105,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	58,
	58,
	58,
	58,
	58,
	205,
	105,
	105,
	105,
	105,
	105,
	105,
	105,
	105,
	28,
	2283,
	28,
	28,
	2283,
	2283,
	58,
	28,
	28,
	432,
	23,
	168,
	14,
	10,
	2333,
	2334,
	23,
	23,
	32,
	2291,
	30,
	30,
	30,
	2285,
	2284,
	490,
	10,
	14,
	2334,
	46,
	46,
	46,
	46,
	46,
	46,
	114,
	114,
	114,
	114,
	94,
	2336,
	2337,
	23,
	2338,
	14,
	10,
	10,
	10,
	10,
	749,
	749,
	32,
	2291,
	30,
	2284,
	490,
	10,
	23,
	27,
	28,
	2339,
	2340,
	2341,
	105,
	2342,
	2343,
	30,
	2274,
	144,
	1071,
	1071,
	1071,
	2275,
	143,
	143,
	102,
	105,
	2294,
	125,
	125,
	105,
	28,
	28,
	28,
	2326,
	2276,
	105,
	105,
	105,
	205,
	2277,
	2278,
	2279,
	2325,
	28,
	105,
	28,
	28,
	28,
	28,
	28,
	2279,
	2279,
	2282,
	28,
	28,
	28,
	28,
	2282,
	28,
	28,
	2279,
	28,
	28,
	28,
	2283,
	105,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	102,
	58,
	58,
	58,
	58,
	58,
	105,
	105,
	105,
	105,
	105,
	105,
	105,
	105,
	28,
	2283,
	2283,
	28,
	2283,
	28,
	58,
	125,
	105,
	58,
	28,
	28,
	3,
	10,
	10,
	10,
	10,
	2344,
	94,
	4,
	4,
	4,
	1306,
	27,
	1306,
	27,
	2317,
	2318,
	2317,
	2319,
	2320,
	27,
	62,
	27,
	2345,
	38,
	168,
	1088,
	3,
	32,
	2290,
	26,
	26,
	1484,
	23,
	23,
	32,
	2291,
	2284,
	14,
	14,
	26,
	0,
	2346,
	28,
	666,
	28,
	666,
	28,
	666,
	2279,
	2347,
	2279,
	2347,
	105,
	2348,
	28,
	666,
	28,
	666,
	28,
	666,
	28,
	666,
	28,
	666,
	2349,
	2350,
	125,
	28,
	28,
	28,
	28,
	28,
	28,
	105,
	105,
	105,
	105,
	105,
	105,
	105,
	105,
	28,
	2294,
	2274,
	144,
	58,
	125,
	2351,
	125,
	2351,
	28,
	28,
	1071,
	2294,
	2352,
	168,
	2294,
	1071,
	2353,
	2354,
	2276,
	105,
	105,
	105,
	2283,
	205,
	2355,
	28,
	23,
	2356,
	2357,
	2358,
	2359,
	2360,
	2361,
	1626,
	2362,
	2363,
	200,
	200,
	200,
	200,
	200,
	200,
	200,
	200,
	200,
	200,
	200,
	200,
	200,
	200,
	200,
	200,
	200,
	200,
	200,
	200,
	200,
	200,
	200,
	200,
	200,
	200,
	200,
	200,
	200,
	200,
	200,
	200,
	200,
	200,
	200,
	200,
	200,
	200,
	200,
	200,
	2330,
	200,
	200,
	200,
	200,
	200,
	2331,
	2331,
	2331,
	2331,
	2331,
	2331,
	2331,
	2331,
	2331,
	2331,
	2331,
	2331,
	2331,
	2331,
	1405,
	2364,
	27,
	27,
	2274,
	144,
	1071,
	1071,
	2275,
	143,
	143,
	102,
	105,
	125,
	125,
	28,
	28,
	28,
	2276,
	105,
	105,
	105,
	205,
	2277,
	2278,
	2279,
	2280,
	2280,
	54,
	2281,
	28,
	28,
	28,
	28,
	28,
	2279,
	28,
	2279,
	2282,
	105,
	28,
	28,
	28,
	28,
	2282,
	28,
	28,
	2279,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	58,
	58,
	58,
	58,
	58,
	105,
	105,
	105,
	105,
	105,
	105,
	105,
	105,
	28,
	28,
	2283,
	2283,
	28,
	58,
	58,
	125,
	105,
	28,
	28,
	31,
	1304,
	435,
	2365,
	2366,
	2367,
	2368,
	23,
	3,
	23,
	23,
	4,
	2369,
	1432,
	89,
	3,
	960,
	23,
	23,
	23,
	26,
	27,
	26,
	28,
	28,
	14,
	28,
	31,
	28,
	721,
	94,
	14,
	14,
	28,
	28,
	14,
	23,
	23,
	23,
	14,
	9,
	90,
	205,
	27,
	198,
	28,
	26,
	27,
	28,
	28,
	89,
	14,
	23,
	198,
	26,
	27,
	28,
	23,
	198,
	14,
	9,
	2284,
	2285,
	960,
	448,
	26,
	31,
	173,
	173,
	173,
	14,
	23,
	23,
	23,
	89,
	89,
	2370,
	2371,
	23,
	2372,
	2373,
	228,
	2374,
	2375,
	2376,
	2377,
	2378,
	23,
	0,
	0,
	1,
	711,
	2075,
	384,
	0,
	1,
	2379,
	2380,
	0,
	1,
	1,
	0,
	0,
	0,
	23,
	1300,
	46,
	46,
	187,
	154,
	0,
	23,
	26,
	27,
	27,
	2274,
	144,
	1071,
	1071,
	2275,
	143,
	143,
	102,
	105,
	125,
	125,
	28,
	28,
	28,
	2276,
	105,
	105,
	105,
	205,
	2277,
	2278,
	2279,
	2280,
	2280,
	54,
	2281,
	28,
	28,
	28,
	28,
	28,
	28,
	2279,
	2279,
	2282,
	105,
	28,
	28,
	28,
	28,
	2282,
	28,
	28,
	2279,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	58,
	58,
	58,
	58,
	58,
	105,
	105,
	105,
	105,
	105,
	105,
	105,
	105,
	28,
	28,
	2283,
	2283,
	28,
	58,
	58,
	125,
	105,
	28,
	28,
	31,
	14,
	172,
	2387,
	2387,
	23,
	23,
	2284,
	2285,
	448,
	960,
	31,
	26,
	23,
	173,
	173,
	173,
	14,
	23,
	23,
	26,
	27,
	2388,
	2284,
	2285,
	448,
	960,
	198,
	31,
	26,
	23,
	173,
	173,
	173,
	14,
	23,
	23,
	94,
	26,
	27,
	26,
	26,
	2284,
	2285,
	448,
	960,
	198,
	31,
	26,
	23,
	173,
	173,
	173,
	14,
	26,
	27,
	27,
	2274,
	144,
	1071,
	1071,
	2275,
	143,
	143,
	102,
	105,
	125,
	125,
	28,
	28,
	28,
	2276,
	105,
	105,
	105,
	205,
	2277,
	2278,
	2279,
	2280,
	2280,
	54,
	2281,
	28,
	28,
	28,
	28,
	28,
	28,
	2279,
	2279,
	2282,
	105,
	28,
	28,
	28,
	28,
	2282,
	28,
	28,
	2279,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	58,
	58,
	58,
	58,
	58,
	105,
	105,
	105,
	105,
	105,
	105,
	105,
	105,
	28,
	28,
	2283,
	2283,
	28,
	58,
	58,
	125,
	105,
	28,
	28,
	31,
	109,
	137,
	153,
	137,
	94,
	137,
	187,
	0,
	1,
	0,
	1,
	1,
	154,
	265,
	1,
	1,
	0,
	1,
	0,
	1,
	53,
	23,
	2389,
	2390,
	23,
	26,
	26,
	27,
	14,
	28,
	28,
	14,
	28,
	28,
	31,
	721,
	14,
	28,
	28,
	14,
	0,
	1,
	32,
	2291,
	30,
	2284,
	490,
	10,
	2288,
	2189,
	107,
	23,
	23,
	10,
	26,
	26,
	2391,
	2287,
	2392,
	2286,
	2393,
	2394,
	2395,
	2396,
	153,
	690,
	1319,
	153,
	153,
	153,
	53,
	21,
	21,
	23,
	89,
	26,
	690,
	2392,
	690,
	2392,
	154,
	137,
	154,
	137,
	154,
	137,
	23,
	3,
	23,
	23,
	23,
	2398,
	9,
	10,
	10,
	2399,
	9,
	105,
	2400,
	23,
	23,
	26,
	26,
	23,
	89,
	10,
	34,
	34,
	10,
	34,
	34,
	34,
	34,
	54,
	54,
	192,
	192,
	23,
	23,
	23,
	23,
	0,
	0,
	0,
	0,
	0,
	0,
	23,
	26,
	35,
	130,
	14,
	14,
	14,
	14,
	23,
	1,
	2403,
	14,
	26,
	2404,
	2405,
	2406,
	2407,
	28,
	2408,
	28,
	102,
	125,
	2409,
	2410,
	125,
	469,
	1032,
	1032,
	2265,
	2411,
	2294,
	2294,
	105,
	105,
	1335,
	1335,
	1335,
	103,
	102,
	205,
	2412,
	205,
	205,
	105,
	102,
	2294,
	2413,
	585,
	105,
	105,
	105,
	105,
	105,
	105,
	105,
	2276,
	105,
	2276,
	2325,
	205,
	105,
	2325,
	105,
	105,
	105,
	105,
	105,
	105,
	105,
	105,
	585,
	105,
	105,
	105,
	105,
	105,
	105,
	105,
	105,
	205,
	205,
	205,
	205,
	205,
	205,
	205,
	205,
	105,
	2414,
	2326,
	205,
	205,
	205,
	2415,
	2416,
	2415,
	2416,
	2417,
	2418,
	144,
	28,
	28,
	28,
	28,
	566,
	566,
	566,
	566,
	2419,
	2419,
	137,
	0,
	0,
	0,
	0,
	0,
	109,
	109,
	137,
	137,
	137,
	137,
	23,
	89,
	89,
	2370,
	2371,
	4,
	23,
	335,
	129,
	26,
	10,
	10,
	10,
	10,
	10,
	10,
	10,
	10,
	10,
	37,
	2361,
	2361,
	2420,
	2420,
	2420,
	2420,
	56,
	37,
	129,
	14,
	2338,
	2338,
	2421,
	2421,
	9,
	10,
	14,
	89,
	14,
	10,
	10,
	10,
	10,
	10,
	10,
	10,
	10,
	10,
	10,
	10,
	10,
	198,
	2422,
	965,
	2423,
	198,
	2422,
	965,
	2423,
	198,
	2422,
	965,
	2423,
	107,
	107,
	198,
	2422,
	965,
	2423,
	26,
	27,
	2424,
	607,
	2388,
	198,
	2422,
	965,
	2423,
	26,
	27,
	2424,
	607,
	2388,
	23,
	448,
	448,
	26,
	123,
	23,
	23,
	215,
	23,
	2285,
	28,
	28,
	2285,
	14,
	23,
	14,
	23,
	2425,
	2426,
	2427,
	2428,
	37,
	2420,
	2420,
	2420,
	56,
	1537,
	1020,
	1703,
	1544,
	2429,
	2430,
	14,
	14,
	14,
	14,
	14,
	14,
	10,
	367,
	2431,
	2432,
	0,
	0,
	0,
	119,
	137,
	488,
	135,
	2433,
	266,
	0,
	1,
	0,
	2434,
	2434,
	2434,
	2380,
	2380,
	2435,
	2436,
	2437,
	2436,
	2436,
	353,
	2438,
	353,
	2439,
	2440,
	2441,
	2442,
	2443,
	2444,
	2445,
	168,
	2446,
	2447,
	3,
	23,
	28,
	28,
	28,
	9,
	28,
	2297,
	2298,
	32,
	2299,
	17,
	2300,
	32,
	32,
	32,
	32,
	32,
	434,
	32,
	32,
	721,
	331,
	32,
	32,
	32,
	32,
	32,
	32,
	32,
	32,
	32,
	32,
	32,
	32,
	32,
	32,
	32,
	32,
	32,
	32,
	32,
	32,
	32,
	32,
	32,
	23,
	23,
	23,
	32,
	32,
	32,
	32,
	32,
	32,
	32,
	32,
	32,
	32,
	2312,
	2313,
	2314,
	2315,
	26,
	2328,
	64,
	23,
	23,
	2332,
	3,
	23,
	2332,
	2332,
	2332,
	733,
	733,
	2331,
	2331,
	2331,
	2331,
	2331,
	2331,
	2331,
	2331,
	2331,
	2331,
	2331,
	2331,
	2331,
	2331,
	2331,
	2331,
	23,
	2335,
	23,
	200,
	10,
	10,
	129,
	23,
	32,
	23,
	32,
	23,
	32,
	23,
	32,
	23,
	23,
	23,
	32,
	32,
	23,
	89,
	23,
	14,
	23,
	14,
	23,
	23,
	32,
	3,
	23,
	28,
	9,
	2381,
	2382,
	28,
	2383,
	2384,
	2383,
	2385,
	23,
	9,
	23,
	2386,
	23,
	9,
	23,
	2386,
	9,
	3,
	23,
	9,
	2384,
	2384,
	23,
	9,
	9,
	23,
	23,
	26,
	2397,
	3,
	23,
	2401,
	2402,
	14,
	14,
	27,
	3,
	23,
	2383,
	2384,
	28,
	3,
	23,
	479,
	2448,
	23,
	23,
	56,
};
extern const Il2CppCodeGenModule g_Unity_BarracudaCodeGenModule;
const Il2CppCodeGenModule g_Unity_BarracudaCodeGenModule = 
{
	"Unity.Barracuda.dll",
	1713,
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
