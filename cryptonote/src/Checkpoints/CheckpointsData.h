// Copyright (c) 2012-2016, The CryptoNote developers, The Bytecoin developers
// Copyright (c) 2022, Parsec Node
//
// This file is part of Parsec.
//
// Parsec is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Parsec is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with Parsec.  If not, see <http://www.gnu.org/licenses/>.

#pragma once

#include <cstddef>
#include <initializer_list>

namespace CryptoNote {

struct CheckpointData {
  uint32_t height;
  const char* blockId;
};

 const std::initializer_list<CheckpointData> CHECKPOINTS = {
  {   1,  "3dde818606e636cdd743a5e4ab717cde65ddad2cec0e0ecfd02b2a21f06773c3" }
, {   2,  "387b51312fe1932cc8fb8308beae084508f0888d90e3271ae8e1c597b6542ad2" }
, {  50,  "74267bc9ebd6ce9f28634a6519454353c0d46f95d7a241c30dd9210e86ade8af" }
, { 100,  "276d2ae5527b2566efee10b8abd8084a9346e62012025fc3ccd3301615487776" }
, { 200,  "7ce2d1497206189c3f77c1bcade12ff754c8c28dda2964080c838daefbd8f3c9" }
, { 300,  "6ed51ef2a17e09db0dade3ab8b1016162d4789f1aafbe728d4d753197c07a724" }
, { 400,  "b3a873dc1429e5aad78231d8d4f3cb29dc185ee1e895211c48159ccbbd3d96d0" }
, { 500,  "82b3286f1b512c950cc6b188aca5f35766db95e996cc7abf994bd5b4e8a1a12d" }
, { 600,  "bb75311022bccd13bcf799b694c87e3c23d1789bcc8600b0eb57b2f9c73c508a" }
, { 700,  "b4f3a9bca64d0d649c6bf2dfc4a495983a25a3f3b75884648476db1ce43a7d8f" }
, { 800,  "78be85f250281a051cb5070724ceeb1fd928b5e814be5a6a406197881c72ea7d" }
, { 900,  "a1176441744beb2e9dc3f3135c95e9f66246e5726fcf24b09a3d2f4caf820bd8" }
, {1000,  "936873f8f5a79561b76af61a5a5133eab16bc53c76b4ece3be4b9b824b747cc4" }
, {1100,  "cea9778ce40ce7e67758f221fbfb43bdd3613a4c13a47ab42fc6a09084cce4b8" }
, {1200,  "8461519a02bd8fdaefafdfa75bf9c0ff44368e7874898862d35dad020cac3cbc" }
, {1300,  "ca2633e92f862a2558ddac04f3fa19d946f76ae689cc0f7f25d50e04e517c7fa" }
, {1400,  "7bdfe9ee0014352b3483b949c3b34a3693db44efd6c6fa41e209f28149691555" }
, {1500,  "535218ec80100c1eaea5124501d7529a1db43bde9a5a6bf4fb93544e5f0562cf" }
, {1600,  "b37a2b5d2a0789893094b81175cb2be0cfc84da58fbc590c34299b7aac729194" }
, {1700,  "1953284353efba7bf15e42641da8809039a0749190130c2db5eccf14686b2466" }
, {1800,  "26e4ffdadef20e8e6a3d262c1a45b0323fad1f061e9a317fa27f95aea63b054c" }
, {1900,  "e0e8312d75b87cffdd9eb14c5d2b21febd8bb29121172718d0ce98b23df97329" }
, {2000,  "b3b142afaa7d8dba13fadcb3940cd725cb57ede4b4d1a557bb2275dc3de520f1" }
, {2100,  "e934922907f244847d46fc99f2941eaa3fed6f0b2d4055696c8d08ed6085e0b9" } 
, {2200,  "4153f2639c0394222f7c8dca3708791b7bd8c64810a881a70c11fc940b2b2824" }
, {2300,  "87d54c5ac193539f19632dff956b13f022faea496206a4a90585de73c5e17e6b" }
, {2400,  "50347ef21ab5ab258b778bc4a1ff8d606f4e1f49fa8e7013036b115c2b9ec547" }
, {2500,  "70f9ef5c6db32835684106149d44b4cc8aa415b37f285dda013e4fdcc5c6cf81" } 
, {2600,  "041eeb5387a99854ab754c9808282f96ed8e64d7f59275e029812a326ee42e08" } 
, {2700,  "dda41ecdb6f9075e6be056baf8576878504d3c67d1fd718a74dc290b90e48594" } 
, {2800,  "ee6899615352a45fd1c5e392d04763c08946cd8639aa3e146e70f64f21bfa5bc" } 
, {2900,  "91fa1c8b9bdc4a083e382bbba996f771027309e06d6fb797d33b37c1039fbb06" } 
, {3000,  "2d9ac8806e600e429d910886ca04ef1428c5d45088b1d8cfd012849a6d71f288" } 
, {3100,  "123b77d69da5327579945db51bd9e75b50b0de5975037e725246c1dd30f124b7" } 
, {3200,  "7473f5573edd20cb48ec4446b2d74d00feee23732a27ac36d2d41abd01f17244" } 
, {3300,  "aff24dd9992d418787df623c9950506978dd5a4a1c548ee65bacdaa72119662a" } 
, {3400,  "dcd3b541b3230427d3108dca19773202feb4c2c92014000b5d4cb434681b6cb8" } 
, {3500,  "a17b0e608416d92305b8736a6aedf5b5c335c36bacbd1805610cd2466327b9cd" } 
, {3600,  "fdb98b2ef8d30c383e8e94f05f9f14060c074c7511a32a682888f4b2f0cb94c3" } 
, {3700,  "ddcd790ffe8db09e0ac2a45f61622b6af5cbcfbac4776be738c31b9ae498cb97" } 
, {3800,  "c41c049f896397cd825a22a06b2526f4c3d75b0826fe8db8ad543c6de87d4389" } 
, {3900,  "9b74f0038038a40b99030ff25a0f4d84d53f991356812ace327de1abdadc60d4" } 
, {4000,  "02052ebbe35e8cb8444859084971b66a38ec49c367d675393581e0f10a63304a" } 
, {4100,  "ed304ca6b55f8a231fe00a313a9bbc32b30698f77ef61302e1cc6e24bef553f5" } 
, {4200,  "d0e1376ddc997efe471ccf915405fe11074ba1f3a1c7d20a868366c11eba0e57" } 
, {4300,  "015f86eea21a1392d2e2748c5a69f34f4144c16a104f4a6b95bb285f3e9cc7b6" } 
, {4400,  "d11407ae8c88aafa2aa330d697cae6cf22f6195e50ca71f869b124d86d00a2dd" } 
, {4500,  "96970e042bfb5b3fc7e533d8489ed01941d79cdaa1ff575d0645d19db4f59e57" } 
, {4600,  "50d3b664f4c0ab03158b162b66a6897b6ce7f12f2f877d87cdada63311824b72" } 
, {4700,  "9fb1e3e7a57b373660df6ca73ea28f39e58388e3bf64ee7a80841cd1b17dcf32" } 
, {4800,  "7d68d5e3776840c4fbe5289d4e4d0584e0bfc155586864cb4891cc820f2c48f6" } 
, {4900,  "5100cd8a8ccb9f41c48ebe5055a7124d0a424d00177fdcf917b69bf584741e88" } 
, {5000,  "431bf7ac1a4650b682fbaa24a991555dfed321f1c7021302e7599f8264e783ee" } 
, {5100,  "6bfbf8f98252dfdbe582530b72fd3b6d767c6797e0c4cdacee622b5f726be242" }
, {5200,  "6007fa5d57007b8855bee07fadac0b1587b82f0e7b5006a19c5e29c68d2b936d" }
, {5300,  "0d954e55146734aef318271ebb8822162a682d451972c957b03dc1fa44da09f1" }
, {5400,  "4adec084ca5ffe7abd307fd204ea5dcd8c823117ddac141ef245f134c521c28f" }
, {5500,  "62c1fba48c25848375ce45ea6c354fb8595d17b2f1c862ded6e076b85c42af6b" }
, {5600,  "cf6518d0a16f60f9a8894e8a0f19fe07b11e36722922f29744f289644bc96e13" }
, {5700,  "e8336ab9c1a188e943153978add5b3c0001bbcedb001c274b9ff51b36f21a569" }
, {5800,  "c68cd346f44ed50ec34616205b4dc5e1e6f55ef4d07d2f781233eab9c787fc35" }
, {5900,  "c9700c3ee9bc93408f72024ed813f31e1deeb7bec947846aea3d886f52899dab" }
, {6000,  "39fd8d66993ba0a981a48a6f02d268ebbc0c48aea9ff3346bfc515fbc0064fe5" }
, {6100,  "b8080636bc572a85ec40a76c82ec214cdb2d3d08a4dae56843935ac1fa733cba" }
, {6200,  "9e1437c33cd2e62c132e14bea22cb5ef68ea2fd08faeaa7bf4ea1f587439540f" }
, {6300,  "cd32ba8780ab5083521fa432f3bcde9d83d1682d96f55cf55567b9c0590b449f" }
, {6400,  "40e0348ca5f76edb1e767d8fdbe5eaf95edd314e41674f9dfccc152f131ec02c" }
, {6500,  "50987d7f8047886c6a509d6d060a5d93cd765916b7a1d4eb5fe134d4ada43b11" }
, {6600,  "c6007fe47a4cdcfee4c1e4a8cb4da74c86b9a7b4f0ecddfc73b41ec31257b08a" }
, {6700,  "092acc4c6fa845151a476c2b0bb1e680fb7e8f3370055772b1feb93100fc6501" }
, {6800,  "4c8f5fc631568c7f2d675394aaa242d2c6fd751fcbd3f923c7754733dc0217cc" }
, {6900,  "eef29182fffff606ad596d112b94c1d84044c20c6c86673d8f51cf10728bc511" }
, {7000,  "af580484f3d0455b1866d6316791e1af4ba6327ccc7ec4401d25c243bb211e6b" }
, {7100,  "9bc51454b325246e4443a994c42a34005bfed47ef08aa022e4040b7787a399c0" }
, {7200,  "42afe356cf20cdce4b15a285d93bfcb803328cdc6b512ef7ca66d67ce5e01a5f" }
, {7300,  "8fbc085515d0c673d8c2d3f91e7ddc320837e6befcfda2986e7c6853a7c01695" }
, {7400,  "15cd78f283aa354a4278d2f256c5e75a39f6d5f189fb5b05e088878900bb1f5e" }
, {7500,  "226bc4511968079e5f8c665dab0d9e9c987a3cef6b8dc180792e974e3848d191" }
, {7600,  "eef780278e8c4d672c1a4dfe79ea899151b97ba2a7e31d80e3e39d1ec3ebe201" }
, {7700,  "7e5333b374accc6e3ef9aadd364e528da5d62dc3351a3e7f9f50f69a2ae6645b" }
, {7800,  "1b6e4d16edfbfa2dbcf92c69dddf19accfa3a18c7ec8f41bd33de145f32c4b66" }
, {7900,  "89e0e6ea2a263393c35812972e69af73695f87eee9844fa1b1bc62a6be16aac4" }
, {8000,  "604a2b2d2634435912fb6f1c2b32beca6447de252f8b62f62bacf898dfbef470" }
, {8100,  "8cc6608d833d123e071d7b1ba14abd45258bb49c12d77cc3f272d46987252540" }
, {8200,  "1c2e45e714bc7c9e3974d066f64cdfc5f69b3bef02db8d03997c281ef7a7b2a9" }
, {8300,  "e216bcb70139d52f2096c55bc7b5920cf6fb4a35ff7db6da002bbfe1abf07d34" }
, {8400,  "5ee608afe14d5b68b9b3319e69fc8b143b13b37795932e40d08502ab792a5bfe" } 
, {8500,  "68a08bee29c040f3a9ed67ea24b58943296547952e426bb2a28ab43f77deab10" } 
, {8600,  "c2b0137bea1391130563ac6b2a4c24dfc856b3096db512a94fbc62cd8e43a892" }
, {8700,  "1c8dda4fc45d9f92a186290d6c713e2963cd678ac40c2bd6e647e654596c41c5" }
, {8800,  "afb7a2fef649f4bb436210a53ecd8bdde3157b0ed853eb58d399fc212afbf5d0" }
, {8900,  "65c07538053e476c8d10ebf9040150aae8d52a805d59dcc84b7fcaa5acc11082" }
, {9000,  "750a7befb8425178449598f9c304756ebb58c8d3de6023b013182010b9ff19e7" }
, {9100,  "1fdd36859ac0741d5f81255821e2b92c2039dfbc955a9b0be1265e9ccd455b19" }
, {9200,  "18e623b24708f04970328bbb1a553b105233442a7ed5dfab823a31c86dcb82ac" }
, {9300,  "71c01c439000652e77ee99be91f7825ec95f23e92eed5e0ac78e2de77b102d40" }
, {9400,  "d7e092991333b83b8f1c3a9eca4f9c32c364f4efcf038e6ede85185b4d824c27" }
, {9500,  "b63b1c157a2eacb74b142fef1e19a3385bce73c9ada907930b4185282e72aab7" }
, {9600,  "76f17463fac0bb20881f440a9b8c9213737b93b60854c8ce72b0b3760f89416b" }
, {9700,  "4a191dea14100425297b1bbd9311e61f36bb50e787b257292b7eee1ac2fa207c" }
, {9800,  "061da0b1f80142633c76ca1d0b29c5b41d6681be36f1c26e51d8bf6a09cd2d28" }
, {9900,  "a935bca47770465e215b7611da202efab04a6147efa2b08cf214e5ba55755dd1" }
, {10000, "c5fb9e26ca01b760e52d10cc1042d9ce3aaff7f5a3034aac5f7583592cd6fa53" }
, {10100, "6578ca4302e8a77a1e884d31f274aa4c3753c7e5960b27f3c5c883c81cbde163" }
, {10200, "4af9477c4efc1f26cc55ede024565db167ac0515adda6af7a23f17faee0c9834" }
, {10300, "a758b830f7cf9f12b15bf87199edeb3309c3b3f5c1b0b9d6926b47fe6a8e0361" }
, {10400, "e41ee86eec1302354d1a8c28745fc2c2c84f1d04c973c1e873e4860b8628a613" }
, {10500, "39d82851b2e60c4a89d5aee3d5ff2971741145bb8edbce7b05f40c33891359b9" }
, {10600, "954f100de27b8073a21ceea07ffc98c03a6d4aad15b2112b10f1ca620683cb48" }
, {10700, "89b34a14d8ebfefdfe90c620c3c64d17bd40e12e8f5136f294abd520a70ef717" }
, {10800, "0e65a596231585e2f8bb82f4b6f3bfb0c15afe97621186691890d021c609c069" }
, {10900, "b3e29dfe99bc9a567472fb02d2af281a83873dd90b04fe968337e109face6a4b" }
, {11000, "f8278dd2e9254108109f5409e28b4c4459a41a640d5699400195e4f3881627b7" }
, {11100, "0113fc4979ff44c3562065a56118e77f4b2e848fa015aaddb62238a3ab067317" }
, {11200, "89d5295b1f76bcd919edf02bf963c7c97ba90d580ae6d82399ec59dd43ef2b22" }
, {11300, "33fa9ffada5077be91c149b728fc9f01896dd7f8b4ed246c8a401716b8ee87d4" }
, {11400, "74d4eeceb2197f4802e454edd6dc2b4eba1fbcffe99f5a5f9f48b49b3ae9ac86" }
, {11500, "5f6acb1da34f91b0b534514eadba9ca0458540f9afd0d52dfc09af5f81c14a19" }
, {11600, "58e0cd036c209648187d2495d8f4e36568387e15a8172cfa17644ebd3b2b4136" }
, {11700, "74b6fbffafab6344432135696870bbd56d598680e4d1726240a2793a93a31de3" }
, {11800, "70ed8d9ad947889f4465dcd4d8d929c1c9c669aa491bbe29d3bc8abc668d7041" }
, {11900, "d18c92a3cce6476782c463f90e4ac4b133f24d23ea3428212f6ba327ca273112" }
, {12000, "b4c7762871e248c959ba39a41a90a6f04e16b7e2d31e4011ee56b0923439046a" }
, {12100, "d182955a4eafcf89cf78ce840e3dbcaacdb43d1dfaee204a6a657cceddff7878" }
, {12200, "0b1be332c6f5acbc62a3c4a402dc945841ba64ca1bb143ae758e9caba3b92408" }
, {12300, "215364c1f150b84fd72817b9d0891cdbc1f331816327c27027c77d1f19f50580" }
, {12400, "54b04d696a9de210fb371aeb41e9105c2c3a4f2d4011c4a376e736152de3e431" }
, {12500, "a31d47446c08fa12435c29352ca237d69e4d22174b97d3bbffed415a121cf2d8" }
, {12600, "d69c6772546efc0ecdab8be1ea359a7e26a649e0750bcea5c9a82e0254f263b9" }
, {12700, "db340167af73be385faf848c3171e8f125163de56f550d08d1cde3aa877e2851" }
, {12800, "c3b0749f1cdf578380a9275ce7f816ca07ebf51aa70234a8eb473b66f1729613" }
, {12900, "a4c4db27de4f25989974cddd64112fc266e6be14568179dbe0debfa1d0033c0c" }
, {13000, "aeee1ac97382b486a6feacb0befbf06cf193dbfa46a9ee5028aa8458785ca730" }
, {13100, "ac0f49f14895444e82ab8b4989552123f394d89b439ce606614bae1615a5caf7" }
, {13200, "7dc051003a35771c6911221c2caaeda69aebe5f3bc2c2da7bfa9ed7cee1d5a53" }
, {13300, "850b56e8dbf5d408847d1bc2eb60006d97000a4d01824f016e4f305308fe53d8" }
, {13400, "19790e1dcd1058be1a2d02db173cfb746b147061fef71672bc45b01133356f83" }
, {13500, "b6470a2fbdd86d48a25e03558f901a17aca92a3171051bd36cd0b9d0f53a408a" }
, {13600, "f40f7aa08b086f1d41a4569d2b04409c06c258969ac575f491ad9f0c6b0fb0a5" }
, {13700, "d53a41d7eddcfc6f514fef807842c42ac8e74f28d05af7efec327da19acbbac5" }
, {13800, "8258b3629e17f4f77980d31d08d115e0d2c6db8ff8109742bbace9a1ae178bd8" }
, {13900, "9890c38fb660610c67593c2e9674f8b6b4b3a111e6fe7377cd6aea82818e78b6" }
, {14000, "3e2d75074156e2501ea49f4b9edeca2b1f4bc76ad177db936635f4fb6085a289" }
, {14100, "210f6aea8fe6bb143d2d1c5043962cfa2aca3b793f2fc6700cf4e476bf45c853" }
, {14200, "ffb35a5bb269b28ca01249bed412e8fcc612e0f374f933a26fb12cd6234e46fe" }
, {14300, "95f8e7baa792ffd4e73c04aa58152393280e5cf9047ae22afe12054f635e0ed5" }
, {14400, "c1e5c47c34b3b2f091a75b5c7ec85a9eac3c98ef5c7b406c4fd23e45a850370d" }
, {14500, "b4366e52f98f39a76d48c18fe6cc95090f8bd475f28d09c0816abfce4b968468" }
, {14600, "b6182ca1ced6d83e62136800b7516d738a209acfdd0dfb1b01f6bb4cae449454" }
, {14700, "873d4800db3d4e3e958934abe526937ce3b8fbc87510dfab57ea5ebc1ecc64e0" }
, {14800, "d9f5826c6a459133231a2e7e859c381947045e745533c11bde16bb42b9e8c6bf" }
, {14900, "8c588b50e1836d8368ee04da36e03839c55cb9e3fbbf1d9000588928b7c45804" }
, {15000, "1bd08d0203c1f70490f0521768e5eb7b5c506256275d664f8eff506e00ca4d0a" }
, {15100, "77e932dd4f8e14d39e66bb5a3621fe7f6013e0a9bc6b1704ed92426b9a58cd7b" }
, {15200, "dbcdab7040f5cdd94ff1e8ce893d23089cc4079c0d87bc323a93652d25037193" }
, {15300, "8a4a19ee2bafd29de1afe9b982eeb247ff8d3bc4ad4391e254ed23059564d309" }
, {15400, "e012018bac03e12d605364e26176771d265ec8826cd73db79efaa294d8cd31bf" }
, {15500, "ba552a15cd6dcd2cb925bb699f98f46f42bcdc4a45e043305e3cf3464a8c9255" }
, {15600, "354fa3756ee0524e148a8f49fd9fe08643ee230b94a5e6f1d754018e35aa7cea" }
, {15700, "e20cbd3fdf74408b09293e4214b5e8a558add6b454e7c3685d9f88697ed40019" }
, {15800, "bc05cdd510bb89e5f3350818ec4c10da7aba4ede4a6d2c4cce006a0a8a9db488" }
, {15900, "df7406172e4a9dbc303d5304f993f835b1b8984ba5acc922884a98881531eb96" }
, {16000, "9067c8350ecc8a254551b5bff5cd9eaa2bb10b4aa7eee89076985ce2ba429a67" }
, {16100, "87ef9965ca1d63fab6a7797c47660ff36cf50611e9a853606eb6ac68b3f1c9a8" }
, {16200, "d239e7e12431f821a71e4be18def3201ccfa0089d76a249e086c98ab63a33933" }
, {16300, "0728f69fe8dbd18f47bd3b4dcccc5828d8d9be236ff8e38b318ae981a72cae3f" }
, {16400, "ec4183112db90991c21c354575d49df20a4db5daa10b2a5cd1c6e013c84a3360" }
, {16500, "14794e8f2534c37571e3eeabf2d0d71a55c9178413cdff239985e0654cca4d7c" }
, {16600, "809c415c610335d45e8a97cb3bfae716d6021fa283c00cb1cfa9f50f73646350" }
, {16700, "7fb04a908cfe8b78929b8e1a0d8a8845069ee66709d8f390fa58b6fde3257ba1" }
, {16800, "d0ad4f62072f964398400508fe193f99a3302123813fa81046f78976b5d4e6c3" }
, {16900, "3344704d61750389723293ba028bec0b4a089a5e62a486209d2c243ac8b7731c" }
, {17000, "6a4911ffbda4f4213c22f3d1f7449aa881ebf18f7f2aa806b6a709cf6ce5e389" }
, {17100, "60cbe9d084214efb313fea47048f0096fc689e4c67353d023d271448fce92e38" }
, {17200, "e40653311a098c988fd9b8c86d9b4c57d5515d8ed93b6f36dbc39949fdf59717" }
, {17300, "cf4fda725f17d9c4d93920dc39b55df525aece92e34f527379d74b7878ee7012" }
, {17400, "590428fa19967bb460a587d05a1a52b548ef72e88daf6247ab15cc722d44dd6f" }
, {17500, "b40ae275624ef36697d2fecad6d5891c2b3e08904156e625c471b4b14ba8ce18" }
, {17600, "7bf6def10913fa08bfad6e019e6f7600bea4bb392c86c550278078ffbeb6a9dd" }
, {17700, "471b754616fc17b8908d69a955d336ffae36eeea26e3fd9c3974eb1d97352204" }
, {17800, "f339064d42d2d7611bb6967b8619836144e7f46117e0165032cd81e4b48abee4" }
, {17900, "0abb86ce2d2986c28a26c0b48bac29697f09ec9fc995c0720b85fbf9a346e592" }
, {18000, "1cc480609a096eb4da74328f82d977066641305c608bfe4e1f0f999639420a98" }
, {18100, "33eed3a893c08716732e9ae39848453b2846b053f5052e806bae77a6d1faf05e" }
, {18200, "56828b800418ae6ae50825a17f677f7a20c1d2f8554e59cc7d086fd5cb474c31" }
, {18300, "1a128a9b0b7bc7365b51958c08178741c775df8190c6d4adf070fc69f666ddfe" }
, {18400, "9858383377b3765c058aad40e3671b34aa427be9513f0d3700165b2fec0c64f5" }
, {18500, "92b7421bc6a71ac903bb0069212568a1841d261452421c43fe849d8b5dd0413e" }
, {18600, "d03ff2fff45d5fccdb868b18d10df6f5b3edd4d84768aa92ed2eeff01157a5bc" }
, {18700, "7a60c1b1347ccdd51b4160a4f56ed04a81523233151651b998f249c55658de32" }
, {18800, "b8e32dab488daf912749b1c600bbce45aa265ae211f664e73d01ee31b55d14de" }
, {18900, "76ede85b89f01250bb587398961492925e6a0c1b4dbdc161d364b786e9863dd0" }
, {19000, "ed2844c4b0c1df23cded97811c15fdc3daecf831950d4c86a6fe528d2cab29df" }
, {19100, "4d8dd15402d54bff30c6e4dd86612b30ca6094e08b56a35eb07f9b8d01fb61ba" }
, {19200, "3d60e367fb1cb0f49e43a6e456fa75ffa161244084c3cc440afb36f36fdbbaaa" }
, {19300, "c3cc6e975505d88d53598520f636d3a81152eafb36a05db63bae518870ea7aa9" }
, {19400, "886773652b665767166e686b95daeb3e2c658aaa324524a52afe97580fc4ad71" }
, {19500, "37452a903203fd0994004ada3262fe8553f35effdf9a7d5ef4daf1f656075ab2" }
, {19600, "6371fd903ef19be276f29c24fd117030a192ea93ad7305b375f8b402b91f9585" }
, {19700, "3648bc2638b7df14ebf62b672c7828571d4f17bce44f6f27e1c7a5782704bde7" }
, {19800, "1f7220e4a70f8e9149cf2eea9137461b360a73278e8fb256169e8eb9684e3bda" }
, {19900, "107583a6a2c00950aa72c70d16a583126df29a6ad7fda73b6b250514d9f5522c" }
, {20000, "70ef96abe63417a673e52001d98ac8aaa036aa796b859184518e476d952dcea9" }
, {20100, "e03dd88a769be2e6974ba17395e722120e8bc2d50b75ca1564abad201029d4c0" }
, {20200, "635fcb08fe64b135a9622ec1ae7eda4e34edb6b164dc3880dd91df218eac3042" }
, {20300, "20eecfc15868417375e8aed840257ee1ca4e1276a3865d57f3db69770360335e" }
, {20400, "cc9afe897808ec2b68e2cdcbf8d47e25580d5f9ac528b9e5223858e691f04fc5" }
};

}
