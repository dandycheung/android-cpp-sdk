/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.os.BatteryManager
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_OS_BATTERYMANAGER_HPP_DECL
#define J2CPP_ANDROID_OS_BATTERYMANAGER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace os {

	class BatteryManager;
	class BatteryManager
		: public object<BatteryManager>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)
		J2CPP_DECLARE_FIELD(5)
		J2CPP_DECLARE_FIELD(6)
		J2CPP_DECLARE_FIELD(7)
		J2CPP_DECLARE_FIELD(8)
		J2CPP_DECLARE_FIELD(9)
		J2CPP_DECLARE_FIELD(10)
		J2CPP_DECLARE_FIELD(11)
		J2CPP_DECLARE_FIELD(12)

		explicit BatteryManager(jobject jobj)
		: object<BatteryManager>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		BatteryManager();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > BATTERY_STATUS_UNKNOWN;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jint > BATTERY_STATUS_CHARGING;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), jint > BATTERY_STATUS_DISCHARGING;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), jint > BATTERY_STATUS_NOT_CHARGING;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), jint > BATTERY_STATUS_FULL;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), jint > BATTERY_HEALTH_UNKNOWN;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), jint > BATTERY_HEALTH_GOOD;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(7), J2CPP_FIELD_SIGNATURE(7), jint > BATTERY_HEALTH_OVERHEAT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(8), J2CPP_FIELD_SIGNATURE(8), jint > BATTERY_HEALTH_DEAD;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(9), J2CPP_FIELD_SIGNATURE(9), jint > BATTERY_HEALTH_OVER_VOLTAGE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(10), J2CPP_FIELD_SIGNATURE(10), jint > BATTERY_HEALTH_UNSPECIFIED_FAILURE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(11), J2CPP_FIELD_SIGNATURE(11), jint > BATTERY_PLUGGED_AC;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(12), J2CPP_FIELD_SIGNATURE(12), jint > BATTERY_PLUGGED_USB;
	}; //class BatteryManager

} //namespace os
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_OS_BATTERYMANAGER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_OS_BATTERYMANAGER_HPP_IMPL
#define J2CPP_ANDROID_OS_BATTERYMANAGER_HPP_IMPL

namespace j2cpp {



android::os::BatteryManager::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::os::BatteryManager::BatteryManager()
: object<android::os::BatteryManager>(
	call_new_object<
		android::os::BatteryManager::J2CPP_CLASS_NAME,
		android::os::BatteryManager::J2CPP_METHOD_NAME(0),
		android::os::BatteryManager::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}



static_field<
	android::os::BatteryManager::J2CPP_CLASS_NAME,
	android::os::BatteryManager::J2CPP_FIELD_NAME(0),
	android::os::BatteryManager::J2CPP_FIELD_SIGNATURE(0),
	jint
> android::os::BatteryManager::BATTERY_STATUS_UNKNOWN;

static_field<
	android::os::BatteryManager::J2CPP_CLASS_NAME,
	android::os::BatteryManager::J2CPP_FIELD_NAME(1),
	android::os::BatteryManager::J2CPP_FIELD_SIGNATURE(1),
	jint
> android::os::BatteryManager::BATTERY_STATUS_CHARGING;

static_field<
	android::os::BatteryManager::J2CPP_CLASS_NAME,
	android::os::BatteryManager::J2CPP_FIELD_NAME(2),
	android::os::BatteryManager::J2CPP_FIELD_SIGNATURE(2),
	jint
> android::os::BatteryManager::BATTERY_STATUS_DISCHARGING;

static_field<
	android::os::BatteryManager::J2CPP_CLASS_NAME,
	android::os::BatteryManager::J2CPP_FIELD_NAME(3),
	android::os::BatteryManager::J2CPP_FIELD_SIGNATURE(3),
	jint
> android::os::BatteryManager::BATTERY_STATUS_NOT_CHARGING;

static_field<
	android::os::BatteryManager::J2CPP_CLASS_NAME,
	android::os::BatteryManager::J2CPP_FIELD_NAME(4),
	android::os::BatteryManager::J2CPP_FIELD_SIGNATURE(4),
	jint
> android::os::BatteryManager::BATTERY_STATUS_FULL;

static_field<
	android::os::BatteryManager::J2CPP_CLASS_NAME,
	android::os::BatteryManager::J2CPP_FIELD_NAME(5),
	android::os::BatteryManager::J2CPP_FIELD_SIGNATURE(5),
	jint
> android::os::BatteryManager::BATTERY_HEALTH_UNKNOWN;

static_field<
	android::os::BatteryManager::J2CPP_CLASS_NAME,
	android::os::BatteryManager::J2CPP_FIELD_NAME(6),
	android::os::BatteryManager::J2CPP_FIELD_SIGNATURE(6),
	jint
> android::os::BatteryManager::BATTERY_HEALTH_GOOD;

static_field<
	android::os::BatteryManager::J2CPP_CLASS_NAME,
	android::os::BatteryManager::J2CPP_FIELD_NAME(7),
	android::os::BatteryManager::J2CPP_FIELD_SIGNATURE(7),
	jint
> android::os::BatteryManager::BATTERY_HEALTH_OVERHEAT;

static_field<
	android::os::BatteryManager::J2CPP_CLASS_NAME,
	android::os::BatteryManager::J2CPP_FIELD_NAME(8),
	android::os::BatteryManager::J2CPP_FIELD_SIGNATURE(8),
	jint
> android::os::BatteryManager::BATTERY_HEALTH_DEAD;

static_field<
	android::os::BatteryManager::J2CPP_CLASS_NAME,
	android::os::BatteryManager::J2CPP_FIELD_NAME(9),
	android::os::BatteryManager::J2CPP_FIELD_SIGNATURE(9),
	jint
> android::os::BatteryManager::BATTERY_HEALTH_OVER_VOLTAGE;

static_field<
	android::os::BatteryManager::J2CPP_CLASS_NAME,
	android::os::BatteryManager::J2CPP_FIELD_NAME(10),
	android::os::BatteryManager::J2CPP_FIELD_SIGNATURE(10),
	jint
> android::os::BatteryManager::BATTERY_HEALTH_UNSPECIFIED_FAILURE;

static_field<
	android::os::BatteryManager::J2CPP_CLASS_NAME,
	android::os::BatteryManager::J2CPP_FIELD_NAME(11),
	android::os::BatteryManager::J2CPP_FIELD_SIGNATURE(11),
	jint
> android::os::BatteryManager::BATTERY_PLUGGED_AC;

static_field<
	android::os::BatteryManager::J2CPP_CLASS_NAME,
	android::os::BatteryManager::J2CPP_FIELD_NAME(12),
	android::os::BatteryManager::J2CPP_FIELD_SIGNATURE(12),
	jint
> android::os::BatteryManager::BATTERY_PLUGGED_USB;


J2CPP_DEFINE_CLASS(android::os::BatteryManager,"android/os/BatteryManager")
J2CPP_DEFINE_METHOD(android::os::BatteryManager,0,"<init>","()V")
J2CPP_DEFINE_FIELD(android::os::BatteryManager,0,"BATTERY_STATUS_UNKNOWN","I")
J2CPP_DEFINE_FIELD(android::os::BatteryManager,1,"BATTERY_STATUS_CHARGING","I")
J2CPP_DEFINE_FIELD(android::os::BatteryManager,2,"BATTERY_STATUS_DISCHARGING","I")
J2CPP_DEFINE_FIELD(android::os::BatteryManager,3,"BATTERY_STATUS_NOT_CHARGING","I")
J2CPP_DEFINE_FIELD(android::os::BatteryManager,4,"BATTERY_STATUS_FULL","I")
J2CPP_DEFINE_FIELD(android::os::BatteryManager,5,"BATTERY_HEALTH_UNKNOWN","I")
J2CPP_DEFINE_FIELD(android::os::BatteryManager,6,"BATTERY_HEALTH_GOOD","I")
J2CPP_DEFINE_FIELD(android::os::BatteryManager,7,"BATTERY_HEALTH_OVERHEAT","I")
J2CPP_DEFINE_FIELD(android::os::BatteryManager,8,"BATTERY_HEALTH_DEAD","I")
J2CPP_DEFINE_FIELD(android::os::BatteryManager,9,"BATTERY_HEALTH_OVER_VOLTAGE","I")
J2CPP_DEFINE_FIELD(android::os::BatteryManager,10,"BATTERY_HEALTH_UNSPECIFIED_FAILURE","I")
J2CPP_DEFINE_FIELD(android::os::BatteryManager,11,"BATTERY_PLUGGED_AC","I")
J2CPP_DEFINE_FIELD(android::os::BatteryManager,12,"BATTERY_PLUGGED_USB","I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_OS_BATTERYMANAGER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
