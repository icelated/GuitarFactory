#ifndef	_STYLE_BEHAVIOR_
#define _STYLE_BEHAVIOR_


class StyleBehavior {

	public: virtual ~StyleBehavior() = 0 {
	};
	public: virtual void perform () const = 0;
};



#endif
