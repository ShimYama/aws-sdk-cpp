﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/iot/model/PackageVersionStatus.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace IoT
{
namespace Model
{
  class CreatePackageVersionResult
  {
  public:
    AWS_IOT_API CreatePackageVersionResult();
    AWS_IOT_API CreatePackageVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API CreatePackageVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) for the package.</p>
     */
    inline const Aws::String& GetPackageVersionArn() const{ return m_packageVersionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the package.</p>
     */
    inline void SetPackageVersionArn(const Aws::String& value) { m_packageVersionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the package.</p>
     */
    inline void SetPackageVersionArn(Aws::String&& value) { m_packageVersionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the package.</p>
     */
    inline void SetPackageVersionArn(const char* value) { m_packageVersionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the package.</p>
     */
    inline CreatePackageVersionResult& WithPackageVersionArn(const Aws::String& value) { SetPackageVersionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the package.</p>
     */
    inline CreatePackageVersionResult& WithPackageVersionArn(Aws::String&& value) { SetPackageVersionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the package.</p>
     */
    inline CreatePackageVersionResult& WithPackageVersionArn(const char* value) { SetPackageVersionArn(value); return *this;}


    /**
     * <p>The name of the associated package.</p>
     */
    inline const Aws::String& GetPackageName() const{ return m_packageName; }

    /**
     * <p>The name of the associated package.</p>
     */
    inline void SetPackageName(const Aws::String& value) { m_packageName = value; }

    /**
     * <p>The name of the associated package.</p>
     */
    inline void SetPackageName(Aws::String&& value) { m_packageName = std::move(value); }

    /**
     * <p>The name of the associated package.</p>
     */
    inline void SetPackageName(const char* value) { m_packageName.assign(value); }

    /**
     * <p>The name of the associated package.</p>
     */
    inline CreatePackageVersionResult& WithPackageName(const Aws::String& value) { SetPackageName(value); return *this;}

    /**
     * <p>The name of the associated package.</p>
     */
    inline CreatePackageVersionResult& WithPackageName(Aws::String&& value) { SetPackageName(std::move(value)); return *this;}

    /**
     * <p>The name of the associated package.</p>
     */
    inline CreatePackageVersionResult& WithPackageName(const char* value) { SetPackageName(value); return *this;}


    /**
     * <p>The name of the new package version.</p>
     */
    inline const Aws::String& GetVersionName() const{ return m_versionName; }

    /**
     * <p>The name of the new package version.</p>
     */
    inline void SetVersionName(const Aws::String& value) { m_versionName = value; }

    /**
     * <p>The name of the new package version.</p>
     */
    inline void SetVersionName(Aws::String&& value) { m_versionName = std::move(value); }

    /**
     * <p>The name of the new package version.</p>
     */
    inline void SetVersionName(const char* value) { m_versionName.assign(value); }

    /**
     * <p>The name of the new package version.</p>
     */
    inline CreatePackageVersionResult& WithVersionName(const Aws::String& value) { SetVersionName(value); return *this;}

    /**
     * <p>The name of the new package version.</p>
     */
    inline CreatePackageVersionResult& WithVersionName(Aws::String&& value) { SetVersionName(std::move(value)); return *this;}

    /**
     * <p>The name of the new package version.</p>
     */
    inline CreatePackageVersionResult& WithVersionName(const char* value) { SetVersionName(value); return *this;}


    /**
     * <p>The package version description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The package version description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The package version description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The package version description.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The package version description.</p>
     */
    inline CreatePackageVersionResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The package version description.</p>
     */
    inline CreatePackageVersionResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The package version description.</p>
     */
    inline CreatePackageVersionResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Metadata that were added to the package version that can be used to define a
     * package version’s configuration.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>Metadata that were added to the package version that can be used to define a
     * package version’s configuration.</p>
     */
    inline void SetAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_attributes = value; }

    /**
     * <p>Metadata that were added to the package version that can be used to define a
     * package version’s configuration.</p>
     */
    inline void SetAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_attributes = std::move(value); }

    /**
     * <p>Metadata that were added to the package version that can be used to define a
     * package version’s configuration.</p>
     */
    inline CreatePackageVersionResult& WithAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetAttributes(value); return *this;}

    /**
     * <p>Metadata that were added to the package version that can be used to define a
     * package version’s configuration.</p>
     */
    inline CreatePackageVersionResult& WithAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p>Metadata that were added to the package version that can be used to define a
     * package version’s configuration.</p>
     */
    inline CreatePackageVersionResult& AddAttributes(const Aws::String& key, const Aws::String& value) { m_attributes.emplace(key, value); return *this; }

    /**
     * <p>Metadata that were added to the package version that can be used to define a
     * package version’s configuration.</p>
     */
    inline CreatePackageVersionResult& AddAttributes(Aws::String&& key, const Aws::String& value) { m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>Metadata that were added to the package version that can be used to define a
     * package version’s configuration.</p>
     */
    inline CreatePackageVersionResult& AddAttributes(const Aws::String& key, Aws::String&& value) { m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Metadata that were added to the package version that can be used to define a
     * package version’s configuration.</p>
     */
    inline CreatePackageVersionResult& AddAttributes(Aws::String&& key, Aws::String&& value) { m_attributes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Metadata that were added to the package version that can be used to define a
     * package version’s configuration.</p>
     */
    inline CreatePackageVersionResult& AddAttributes(const char* key, Aws::String&& value) { m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Metadata that were added to the package version that can be used to define a
     * package version’s configuration.</p>
     */
    inline CreatePackageVersionResult& AddAttributes(Aws::String&& key, const char* value) { m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>Metadata that were added to the package version that can be used to define a
     * package version’s configuration.</p>
     */
    inline CreatePackageVersionResult& AddAttributes(const char* key, const char* value) { m_attributes.emplace(key, value); return *this; }


    /**
     * <p>The status of the package version. For more information, see <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/preparing-to-use-software-package-catalog.html#package-version-lifecycle">Package
     * version lifecycle</a>.</p>
     */
    inline const PackageVersionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the package version. For more information, see <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/preparing-to-use-software-package-catalog.html#package-version-lifecycle">Package
     * version lifecycle</a>.</p>
     */
    inline void SetStatus(const PackageVersionStatus& value) { m_status = value; }

    /**
     * <p>The status of the package version. For more information, see <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/preparing-to-use-software-package-catalog.html#package-version-lifecycle">Package
     * version lifecycle</a>.</p>
     */
    inline void SetStatus(PackageVersionStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the package version. For more information, see <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/preparing-to-use-software-package-catalog.html#package-version-lifecycle">Package
     * version lifecycle</a>.</p>
     */
    inline CreatePackageVersionResult& WithStatus(const PackageVersionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the package version. For more information, see <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/preparing-to-use-software-package-catalog.html#package-version-lifecycle">Package
     * version lifecycle</a>.</p>
     */
    inline CreatePackageVersionResult& WithStatus(PackageVersionStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Error reason for a package version failure during creation or update.</p>
     */
    inline const Aws::String& GetErrorReason() const{ return m_errorReason; }

    /**
     * <p>Error reason for a package version failure during creation or update.</p>
     */
    inline void SetErrorReason(const Aws::String& value) { m_errorReason = value; }

    /**
     * <p>Error reason for a package version failure during creation or update.</p>
     */
    inline void SetErrorReason(Aws::String&& value) { m_errorReason = std::move(value); }

    /**
     * <p>Error reason for a package version failure during creation or update.</p>
     */
    inline void SetErrorReason(const char* value) { m_errorReason.assign(value); }

    /**
     * <p>Error reason for a package version failure during creation or update.</p>
     */
    inline CreatePackageVersionResult& WithErrorReason(const Aws::String& value) { SetErrorReason(value); return *this;}

    /**
     * <p>Error reason for a package version failure during creation or update.</p>
     */
    inline CreatePackageVersionResult& WithErrorReason(Aws::String&& value) { SetErrorReason(std::move(value)); return *this;}

    /**
     * <p>Error reason for a package version failure during creation or update.</p>
     */
    inline CreatePackageVersionResult& WithErrorReason(const char* value) { SetErrorReason(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreatePackageVersionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreatePackageVersionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreatePackageVersionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_packageVersionArn;

    Aws::String m_packageName;

    Aws::String m_versionName;

    Aws::String m_description;

    Aws::Map<Aws::String, Aws::String> m_attributes;

    PackageVersionStatus m_status;

    Aws::String m_errorReason;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
