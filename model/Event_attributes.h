/**
 * ProcessMaker API
 * This ProcessMaker Core API provide access to the new generation engine with BPMN 2.0 support. The current Alpha 1.0 version supports  the part of BPM system functionality like process import, process execution, task assignment
 *
 * OpenAPI spec version: 1.0.0
 * Contact: alpha-program@processmaker.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/*
 * Event_attributes.h
 * 
 * 
 */

#ifndef Event_attributes_H_
#define Event_attributes_H_


#include "ModelBase.h"

#include "DateTime.h"
#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  Event_attributes
	: public ModelBase
{
public:
    Event_attributes();
    virtual ~Event_attributes();

	/////////////////////////////////////////////
	/// ModelBase overrides
	
    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;
    
 	/////////////////////////////////////////////
	/// Event_attributes members
	   
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getName() const;
    void setName(utility::string_t value);
        /// <summary>
    /// 
    /// </summary>
    utility::string_t getDescription() const;
    void setDescription(utility::string_t value);
    bool descriptionIsSet() const;
    void unsetDescription();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getProcessId() const;
    void setProcessId(utility::string_t value);
        /// <summary>
    /// 
    /// </summary>
    int32_t getMessageId() const;
    void setMessageId(int32_t value);
    bool message_idIsSet() const;
    void unsetMessage_id();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getType() const;
    void setType(utility::string_t value);
        /// <summary>
    /// 
    /// </summary>
    utility::string_t getDefinition() const;
    void setDefinition(utility::string_t value);
        /// <summary>
    /// 
    /// </summary>
    bool getInterrupting() const;
    void setInterrupting(bool value);
    bool interruptingIsSet() const;
    void unsetInterrupting();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getCondition() const;
    void setCondition(utility::string_t value);
    bool conditionIsSet() const;
    void unsetCondition();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getTime() const;
    void setTime(utility::string_t value);
    bool timeIsSet() const;
    void unsetTime();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getDuration() const;
    void setDuration(utility::string_t value);
    bool durationIsSet() const;
    void unsetDuration();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getCycle() const;
    void setCycle(utility::string_t value);
    bool cycleIsSet() const;
    void unsetCycle();
    /// <summary>
    /// 
    /// </summary>
    int32_t getAttachedToTaskId() const;
    void setAttachedToTaskId(int32_t value);
    bool attached_to_task_idIsSet() const;
    void unsetAttached_to_task_id();
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<DateTime> getCreatedAt() const;
    void setCreatedAt(std::shared_ptr<DateTime> value);
    bool created_atIsSet() const;
    void unsetCreated_at();
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<DateTime> getUpdatedAt() const;
    void setUpdatedAt(std::shared_ptr<DateTime> value);
    bool updated_atIsSet() const;
    void unsetUpdated_at();
    
protected:
    utility::string_t m_Name;
    utility::string_t m_Description;
    bool m_DescriptionIsSet;
utility::string_t m_Process_id;
    int32_t m_Message_id;
    bool m_Message_idIsSet;
utility::string_t m_Type;
    utility::string_t m_Definition;
    bool m_Interrupting;
    bool m_InterruptingIsSet;
utility::string_t m_Condition;
    bool m_ConditionIsSet;
utility::string_t m_Time;
    bool m_TimeIsSet;
utility::string_t m_Duration;
    bool m_DurationIsSet;
utility::string_t m_Cycle;
    bool m_CycleIsSet;
int32_t m_Attached_to_task_id;
    bool m_Attached_to_task_idIsSet;
std::shared_ptr<DateTime> m_Created_at;
    bool m_Created_atIsSet;
std::shared_ptr<DateTime> m_Updated_at;
    bool m_Updated_atIsSet;
};

}
}
}
}

#endif /* Event_attributes_H_ */
