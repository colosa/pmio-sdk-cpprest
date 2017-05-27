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
 * Pagination.h
 * 
 * 
 */

#ifndef Pagination_H_
#define Pagination_H_


#include "ModelBase.h"

#include "Pagination_links.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  Pagination
	: public ModelBase
{
public:
    Pagination();
    virtual ~Pagination();

	/////////////////////////////////////////////
	/// ModelBase overrides
	
    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;
    
 	/////////////////////////////////////////////
	/// Pagination members
	   
    /// <summary>
    /// 
    /// </summary>
    int32_t getTotal() const;
    void setTotal(int32_t value);
        /// <summary>
    /// 
    /// </summary>
    int32_t getCount() const;
    void setCount(int32_t value);
        /// <summary>
    /// 
    /// </summary>
    int32_t getPerPage() const;
    void setPerPage(int32_t value);
        /// <summary>
    /// 
    /// </summary>
    int32_t getCurrentPage() const;
    void setCurrentPage(int32_t value);
        /// <summary>
    /// 
    /// </summary>
    int32_t getTotalPages() const;
    void setTotalPages(int32_t value);
        /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Pagination_links> getLinks() const;
    void setLinks(std::shared_ptr<Pagination_links> value);
    bool linksIsSet() const;
    void unsetLinks();
    
protected:
    int32_t m_Total;
    int32_t m_Count;
    int32_t m_Per_page;
    int32_t m_Current_page;
    int32_t m_Total_pages;
    std::shared_ptr<Pagination_links> m_Links;
    bool m_LinksIsSet;
};

}
}
}
}

#endif /* Pagination_H_ */
