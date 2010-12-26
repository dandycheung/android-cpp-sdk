/*================================================================================
  code generated by: java2cpp
  class: android.media.AudioRecord
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_MEDIA_AUDIORECORD_HPP_DECL
#define J2CPP_ANDROID_MEDIA_AUDIORECORD_HPP_DECL


namespace j2cpp { namespace java { namespace nio { class ByteBuffer; } } }
namespace j2cpp { namespace android { namespace os { class Handler; } } }
namespace j2cpp { namespace android { namespace media { namespace AudioRecord_ { class OnRecordPositionUpdateListener; } } } }


#include <android/media/AudioRecord.hpp>
#include <android/os/Handler.hpp>
#include <java/nio/ByteBuffer.hpp>


namespace j2cpp {

namespace android { namespace media {

	class AudioRecord;
	namespace AudioRecord_ {

		class OnRecordPositionUpdateListener;
		class OnRecordPositionUpdateListener
			: public cpp_object<OnRecordPositionUpdateListener>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)

			OnRecordPositionUpdateListener(jobject jobj)
			: cpp_object<OnRecordPositionUpdateListener>(jobj)
			{
			}

			void onMarkerReached(local_ref< android::media::AudioRecord > const&);
			void onPeriodicNotification(local_ref< android::media::AudioRecord > const&);
		}; //class OnRecordPositionUpdateListener

	} //namespace AudioRecord_

	class AudioRecord
		: public cpp_object<AudioRecord>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)
		J2CPP_DECLARE_METHOD(6)
		J2CPP_DECLARE_METHOD(7)
		J2CPP_DECLARE_METHOD(8)
		J2CPP_DECLARE_METHOD(9)
		J2CPP_DECLARE_METHOD(10)
		J2CPP_DECLARE_METHOD(11)
		J2CPP_DECLARE_METHOD(12)
		J2CPP_DECLARE_METHOD(13)
		J2CPP_DECLARE_METHOD(14)
		J2CPP_DECLARE_METHOD(15)
		J2CPP_DECLARE_METHOD(16)
		J2CPP_DECLARE_METHOD(17)
		J2CPP_DECLARE_METHOD(18)
		J2CPP_DECLARE_METHOD(19)
		J2CPP_DECLARE_METHOD(20)
		J2CPP_DECLARE_METHOD(21)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)
		J2CPP_DECLARE_FIELD(5)
		J2CPP_DECLARE_FIELD(6)
		J2CPP_DECLARE_FIELD(7)

		typedef AudioRecord_::OnRecordPositionUpdateListener OnRecordPositionUpdateListener;

		AudioRecord(jobject jobj)
		: cpp_object<AudioRecord>(jobj)
		{
		}

		void release();
		cpp_int getSampleRate();
		cpp_int getAudioSource();
		cpp_int getAudioFormat();
		cpp_int getChannelConfiguration();
		cpp_int getChannelCount();
		cpp_int getState();
		cpp_int getRecordingState();
		cpp_int getNotificationMarkerPosition();
		cpp_int getPositionNotificationPeriod();
		static cpp_int getMinBufferSize(cpp_int const&, cpp_int const&, cpp_int const&);
		void startRecording();
		void stop();
		cpp_int read(local_ref< cpp_byte_array<1> > const&, cpp_int const&, cpp_int const&);
		cpp_int read(local_ref< cpp_short_array<1> > const&, cpp_int const&, cpp_int const&);
		cpp_int read(local_ref< java::nio::ByteBuffer > const&, cpp_int const&);
		void setRecordPositionUpdateListener(local_ref< android::media::AudioRecord_::OnRecordPositionUpdateListener > const&);
		void setRecordPositionUpdateListener(local_ref< android::media::AudioRecord_::OnRecordPositionUpdateListener > const&, local_ref< android::os::Handler > const&);
		cpp_int setNotificationMarkerPosition(cpp_int const&);
		cpp_int setPositionNotificationPeriod(cpp_int const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), cpp_int > STATE_UNINITIALIZED;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), cpp_int > STATE_INITIALIZED;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), cpp_int > RECORDSTATE_STOPPED;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), cpp_int > RECORDSTATE_RECORDING;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), cpp_int > SUCCESS;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), cpp_int > ERROR;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), cpp_int > ERROR_BAD_VALUE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(7), J2CPP_FIELD_SIGNATURE(7), cpp_int > ERROR_INVALID_OPERATION;
	}; //class AudioRecord

} //namespace media
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_MEDIA_AUDIORECORD_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_MEDIA_AUDIORECORD_HPP_IMPL
#define J2CPP_ANDROID_MEDIA_AUDIORECORD_HPP_IMPL

namespace j2cpp {



void android::media::AudioRecord_::OnRecordPositionUpdateListener::onMarkerReached(local_ref< android::media::AudioRecord > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

void android::media::AudioRecord_::OnRecordPositionUpdateListener::onPeriodicNotification(local_ref< android::media::AudioRecord > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::media::AudioRecord_::OnRecordPositionUpdateListener,"android/media/AudioRecord$OnRecordPositionUpdateListener")
J2CPP_DEFINE_METHOD(android::media::AudioRecord_::OnRecordPositionUpdateListener,0,"onMarkerReached","(Landroid/media/AudioRecord;)V")
J2CPP_DEFINE_METHOD(android::media::AudioRecord_::OnRecordPositionUpdateListener,1,"onPeriodicNotification","(Landroid/media/AudioRecord;)V")


template <>
local_ref< android::media::AudioRecord > create< android::media::AudioRecord>(cpp_int const &a0, cpp_int const &a1, cpp_int const &a2, cpp_int const &a3, cpp_int const &a4)
{
	return local_ref< android::media::AudioRecord >(
		environment::get().get_jenv()->NewObject(
			get_class<android::media::AudioRecord::J2CPP_CLASS_NAME>(),
			get_method_id<android::media::AudioRecord::J2CPP_CLASS_NAME, android::media::AudioRecord::J2CPP_METHOD_NAME(0), android::media::AudioRecord::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype(), a4.get_jtype()
		)
	);
}

void android::media::AudioRecord::release()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}


cpp_int android::media::AudioRecord::getSampleRate()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

cpp_int android::media::AudioRecord::getAudioSource()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

cpp_int android::media::AudioRecord::getAudioFormat()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

cpp_int android::media::AudioRecord::getChannelConfiguration()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

cpp_int android::media::AudioRecord::getChannelCount()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}

cpp_int android::media::AudioRecord::getState()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>()
		)
	);
}

cpp_int android::media::AudioRecord::getRecordingState()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>()
		)
	);
}

cpp_int android::media::AudioRecord::getNotificationMarkerPosition()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>()
		)
	);
}

cpp_int android::media::AudioRecord::getPositionNotificationPeriod()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>()
		)
	);
}

cpp_int android::media::AudioRecord::getMinBufferSize(cpp_int const &a0, cpp_int const &a1, cpp_int const &a2)
{
	return cpp_int(
		environment::get().get_jenv()->CallStaticIntMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), true>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void android::media::AudioRecord::startRecording()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>()
		)
	);
}

void android::media::AudioRecord::stop()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>()
		)
	);
}

cpp_int android::media::AudioRecord::read(local_ref< cpp_byte_array<1> > const &a0, cpp_int const &a1, cpp_int const &a2)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

cpp_int android::media::AudioRecord::read(local_ref< cpp_short_array<1> > const &a0, cpp_int const &a1, cpp_int const &a2)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

cpp_int android::media::AudioRecord::read(local_ref< java::nio::ByteBuffer > const &a0, cpp_int const &a1)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::media::AudioRecord::setRecordPositionUpdateListener(local_ref< android::media::AudioRecord_::OnRecordPositionUpdateListener > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(18), J2CPP_METHOD_SIGNATURE(18), false>(),
			a0.get_jtype()
		)
	);
}

void android::media::AudioRecord::setRecordPositionUpdateListener(local_ref< android::media::AudioRecord_::OnRecordPositionUpdateListener > const &a0, local_ref< android::os::Handler > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(19), J2CPP_METHOD_SIGNATURE(19), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_int android::media::AudioRecord::setNotificationMarkerPosition(cpp_int const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(20), J2CPP_METHOD_SIGNATURE(20), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::media::AudioRecord::setPositionNotificationPeriod(cpp_int const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(21), J2CPP_METHOD_SIGNATURE(21), false>(),
			a0.get_jtype()
		)
	);
}


static_field<
	android::media::AudioRecord::J2CPP_CLASS_NAME,
	android::media::AudioRecord::J2CPP_FIELD_NAME(0),
	android::media::AudioRecord::J2CPP_FIELD_SIGNATURE(0),
	cpp_int
> android::media::AudioRecord::STATE_UNINITIALIZED;

static_field<
	android::media::AudioRecord::J2CPP_CLASS_NAME,
	android::media::AudioRecord::J2CPP_FIELD_NAME(1),
	android::media::AudioRecord::J2CPP_FIELD_SIGNATURE(1),
	cpp_int
> android::media::AudioRecord::STATE_INITIALIZED;

static_field<
	android::media::AudioRecord::J2CPP_CLASS_NAME,
	android::media::AudioRecord::J2CPP_FIELD_NAME(2),
	android::media::AudioRecord::J2CPP_FIELD_SIGNATURE(2),
	cpp_int
> android::media::AudioRecord::RECORDSTATE_STOPPED;

static_field<
	android::media::AudioRecord::J2CPP_CLASS_NAME,
	android::media::AudioRecord::J2CPP_FIELD_NAME(3),
	android::media::AudioRecord::J2CPP_FIELD_SIGNATURE(3),
	cpp_int
> android::media::AudioRecord::RECORDSTATE_RECORDING;

static_field<
	android::media::AudioRecord::J2CPP_CLASS_NAME,
	android::media::AudioRecord::J2CPP_FIELD_NAME(4),
	android::media::AudioRecord::J2CPP_FIELD_SIGNATURE(4),
	cpp_int
> android::media::AudioRecord::SUCCESS;

static_field<
	android::media::AudioRecord::J2CPP_CLASS_NAME,
	android::media::AudioRecord::J2CPP_FIELD_NAME(5),
	android::media::AudioRecord::J2CPP_FIELD_SIGNATURE(5),
	cpp_int
> android::media::AudioRecord::ERROR;

static_field<
	android::media::AudioRecord::J2CPP_CLASS_NAME,
	android::media::AudioRecord::J2CPP_FIELD_NAME(6),
	android::media::AudioRecord::J2CPP_FIELD_SIGNATURE(6),
	cpp_int
> android::media::AudioRecord::ERROR_BAD_VALUE;

static_field<
	android::media::AudioRecord::J2CPP_CLASS_NAME,
	android::media::AudioRecord::J2CPP_FIELD_NAME(7),
	android::media::AudioRecord::J2CPP_FIELD_SIGNATURE(7),
	cpp_int
> android::media::AudioRecord::ERROR_INVALID_OPERATION;


J2CPP_DEFINE_CLASS(android::media::AudioRecord,"android/media/AudioRecord")
J2CPP_DEFINE_METHOD(android::media::AudioRecord,0,"<init>","(IIIII)V")
J2CPP_DEFINE_METHOD(android::media::AudioRecord,1,"release","()V")
J2CPP_DEFINE_METHOD(android::media::AudioRecord,2,"finalize","()V")
J2CPP_DEFINE_METHOD(android::media::AudioRecord,3,"getSampleRate","()I")
J2CPP_DEFINE_METHOD(android::media::AudioRecord,4,"getAudioSource","()I")
J2CPP_DEFINE_METHOD(android::media::AudioRecord,5,"getAudioFormat","()I")
J2CPP_DEFINE_METHOD(android::media::AudioRecord,6,"getChannelConfiguration","()I")
J2CPP_DEFINE_METHOD(android::media::AudioRecord,7,"getChannelCount","()I")
J2CPP_DEFINE_METHOD(android::media::AudioRecord,8,"getState","()I")
J2CPP_DEFINE_METHOD(android::media::AudioRecord,9,"getRecordingState","()I")
J2CPP_DEFINE_METHOD(android::media::AudioRecord,10,"getNotificationMarkerPosition","()I")
J2CPP_DEFINE_METHOD(android::media::AudioRecord,11,"getPositionNotificationPeriod","()I")
J2CPP_DEFINE_METHOD(android::media::AudioRecord,12,"getMinBufferSize","(III)I")
J2CPP_DEFINE_METHOD(android::media::AudioRecord,13,"startRecording","()V")
J2CPP_DEFINE_METHOD(android::media::AudioRecord,14,"stop","()V")
J2CPP_DEFINE_METHOD(android::media::AudioRecord,15,"read","([BII)I")
J2CPP_DEFINE_METHOD(android::media::AudioRecord,16,"read","([SII)I")
J2CPP_DEFINE_METHOD(android::media::AudioRecord,17,"read","(Ljava/nio/ByteBuffer;I)I")
J2CPP_DEFINE_METHOD(android::media::AudioRecord,18,"setRecordPositionUpdateListener","(Landroid/media/AudioRecord$OnRecordPositionUpdateListener;)V")
J2CPP_DEFINE_METHOD(android::media::AudioRecord,19,"setRecordPositionUpdateListener","(Landroid/media/AudioRecord$OnRecordPositionUpdateListener;Landroid/os/Handler;)V")
J2CPP_DEFINE_METHOD(android::media::AudioRecord,20,"setNotificationMarkerPosition","(I)I")
J2CPP_DEFINE_METHOD(android::media::AudioRecord,21,"setPositionNotificationPeriod","(I)I")
J2CPP_DEFINE_FIELD(android::media::AudioRecord,0,"STATE_UNINITIALIZED","I")
J2CPP_DEFINE_FIELD(android::media::AudioRecord,1,"STATE_INITIALIZED","I")
J2CPP_DEFINE_FIELD(android::media::AudioRecord,2,"RECORDSTATE_STOPPED","I")
J2CPP_DEFINE_FIELD(android::media::AudioRecord,3,"RECORDSTATE_RECORDING","I")
J2CPP_DEFINE_FIELD(android::media::AudioRecord,4,"SUCCESS","I")
J2CPP_DEFINE_FIELD(android::media::AudioRecord,5,"ERROR","I")
J2CPP_DEFINE_FIELD(android::media::AudioRecord,6,"ERROR_BAD_VALUE","I")
J2CPP_DEFINE_FIELD(android::media::AudioRecord,7,"ERROR_INVALID_OPERATION","I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_MEDIA_AUDIORECORD_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
