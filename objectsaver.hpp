#pragma once


namespace events::handlers
{
	template<class TSome>
	struct ObjectSaver;

	{
		using TObject = LValue&;
	};

	template<class RValue>
	struct ObjectSaver<RValue&&>
	{
		using TObject = RValue;
	};
}
