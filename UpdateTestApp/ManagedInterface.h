#pragma once
#using <mscorlib.dll>
#using "CSharpDll.dll"

public ref class ManagedInterface
{
	public:
		CSharpDll::CSharpVersion^ version = gcnew CSharpDll::CSharpVersion();
		
		void callDisplayVersion() {
			version->DisplayVersion();
		}
};